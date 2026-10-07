#include <mgba/flags.h>
#include <mgba/core/core.h>
#include <mgba/core/config.h>
#include <mgba/core/log.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static void quiet(struct mLogger *l,int c,enum mLogLevel level,const char *f,va_list a){}
int main(int argc,char **argv){
 struct mLogger log={.log=quiet};mLogSetDefaultLogger(&log);
 struct mCore *c=mCoreFind(argv[1]);if(!c||!c->init(c))return 2;
 mCoreInitConfig(c,NULL);mCoreLoadConfig(c);color_t *video=calloc(240*160,sizeof(color_t));c->setVideoBuffer(c,video,240);
 if(!mCoreLoadFile(c,argv[1]))return 3;c->reset(c);
 char line[1024],cmd[30],p[500];unsigned n,k,a,v,sz;void *state=malloc(c->stateSize(c));
 while(fgets(line,sizeof(line),stdin)){
 sscanf(line,"%29s",cmd);
 if(!strcmp(cmd,"f")){sscanf(line,"%*s %u %u",&n,&k);c->setKeys(c,k);for(unsigned i=0;i<n;i++)c->runFrame(c);printf("ok\n");}
 else if(!strcmp(cmd,"rtc")){long long stamp;sscanf(line,"%*s %lld",&stamp);c->rtc.override=RTC_FIXED;c->rtc.value=stamp*1000;printf("ok\n");}
 else if(!strcmp(cmd,"r")){sscanf(line,"%*s %x %u",&a,&sz);printf("%u\n",sz==4?c->busRead32(c,a):sz==2?c->busRead16(c,a):c->busRead8(c,a));}
 else if(!strcmp(cmd,"w")){sscanf(line,"%*s %x %x %u",&a,&v,&sz);for(unsigned i=0;i<sz;i++)c->busWrite8(c,a+i,(v>>(i*8))&255);printf("ok\n");}
 else if(!strcmp(cmd,"battery")){sscanf(line,"%*s %499s",p);void *sram=NULL;size_t len=c->savedataClone(c,&sram);FILE*f=fopen(p,"wb");if(f&&sram){fwrite(sram,1,len,f);fclose(f);}free(sram);printf("%zu\n",len);}
 else if(!strcmp(cmd,"batteryload")){sscanf(line,"%*s %499s",p);FILE*f=fopen(p,"rb");if(!f){printf("error\n");}else{fseek(f,0,SEEK_END);size_t len=ftell(f);rewind(f);void *sram=malloc(len);fread(sram,1,len,f);fclose(f);int ok=c->savedataRestore(c,sram,len,true);free(sram);c->reset(c);printf("%d\n",ok);}}
 else if(!strcmp(cmd,"shot")){sscanf(line,"%*s %499s",p);FILE *f=fopen(p,"wb");fprintf(f,"P6\n240 160\n255\n");for(int i=0;i<240*160;i++){unsigned char rgb[3]={video[i]&255,(video[i]>>8)&255,(video[i]>>16)&255};fwrite(rgb,1,3,f);}fclose(f);printf("ok\n");}
 else if(!strcmp(cmd,"save")){sscanf(line,"%*s %499s",p);c->saveState(c,state);FILE*f=fopen(p,"wb");fwrite(state,1,c->stateSize(c),f);fclose(f);printf("ok\n");}
 else if(!strcmp(cmd,"load")){sscanf(line,"%*s %499s",p);FILE*f=fopen(p,"rb");fread(state,1,c->stateSize(c),f);fclose(f);c->loadState(c,state);printf("ok\n");}
 fflush(stdout);
 }c->deinit(c);return 0;
}
