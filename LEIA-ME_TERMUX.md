# Pokémon Hoenn Expansion — Unova 0.10.1 | Fonte e compilação

Esta pasta contém **o código-fonte** recuperado de Unova 0.10 mais correções e uma **implementação preliminar ainda não testada em jogo** da Rota 4 e Nimbasa. **Não acompanha ROM compilada, nem certificação de teste em emulador.** A compilação real e os testes em jogo são necessários antes de publicar um trailer como gameplay.

## Se o Termux já tem um Debian/Ubuntu ou um terminal `root@localhost`

Não reinstale o ambiente. Abra o terminal que já usa para compilar ROMs, coloque/descompacte este projeto numa pasta Linux, entre nela e execute:

```sh
ls Makefile Makefile.termux
make -f Makefile.termux validate
make -f Makefile.termux rom JOBS=2
ls -lh pokemon_hoenn_expansion_gen7.gba
```

O último comando só mostrará a ROM se a compilação tiver sido bem-sucedida. Em aparelhos com 4 GB de RAM, comece com **JOBS=1** se houver encerramento por falta de memória.

## Se tem apenas Termux e não tem compilador ARM

Termux (fora do Debian):

```sh
pkg update
pkg install proot-distro unzip
proot-distro install debian
proot-distro login debian
```

**Dentro do Debian** (normalmente como root do contêiner):

```sh
apt update
apt install -y make git gcc g++ gcc-arm-none-eabi binutils-arm-none-eabi libnewlib-arm-none-eabi python3 libpng-dev zlib1g-dev pkg-config
```

Coloque o ZIP na pasta compartilhada ou passe o projeto para o diretório HOME do Debian; depois execute os comandos da seção anterior. Caso `proot-distro install debian` não exista na sua versão, consulte `proot-distro list` ou `proot-distro search debian`.

### Dicas

- **Não** execute `make` na pasta pai; entre no diretório que contém `Makefile`.
- O Makefile do projeto já existe e é preservado. `Makefile.termux` apenas verifica pré-requisitos e executa `make modern` da base.
- A ROM prevista chama-se `pokemon_hoenn_expansion_gen7.gba`; saves Flash 128 KiB, RTC.
- Não execute `python tools/unova_world.py` nesta fonte recuperada. Esse script antigo é um gerador **de uso único** e duplicaria estruturas já existentes.
- Se o compilador acusar símbolos duplicados, conflitos de mapas, textos ou ROM maior que 32 MiB, envie **as últimas 60 linhas do erro** para análise.
- Faça backup do `.sav` antes de usar a ROM construída; não reutilize save states de versões anteriores.

## O que esta revisão alterou

- Criados novos mapas **Rota 4**, **Nimbasa City** e **Nimbasa Center**, com conexão a Castelia Street, roteiro de chegada e NPCs; cenário temporário usa os tiles existentes, não é um mapa final do Pokémon Black/White.
- Continuação da missão após a visão dos dragões em Castelia (estágios 17–19) e novos textos PT-BR/EN.
- Rota 4: tabela própria de encontros selvagens; Nimbasa: Pokémon Center e localização/respawn cadastrados.
- Mapa de missões: painel de instruções acionado com **A**, X intermitente no destino, mensagens mais legíveis e indicação da próxima missão.
- C-Gear: indicador de cargas de ressonância; isto **não é** conexão online sem fio.
- Corrigido o cadastro de localização de cura de Unova no arquivo JSON que alimenta os cabeçalhos gerados pelo Makefile.
- Adicionada inclusão das tabelas de scripts dos mapas de Unova em `data/event_scripts.s` para permitir resolução dos símbolos.

## Cobertura e limitações

- A base de Unova 0.10 registrava uma história até Castelia. A etapa 0.10.1 contém uma **extensão inicial**, não a campanha completa de Nimbasa, ginásios posteriores, Driftveil ou a Liga de Unova.
- Não garante compatibilidade de saves pré-existentes em Unova, nem ausência de bugs de gameplay.
- Nenhuma execução no mGBA ou compilação ARM foi confirmada para esta revisão no ambiente em que o ZIP foi preparado.
- A validação estática usa `tools/qa_unova_0101.py` e não substitui a compilação ou o jogo real.

## Política de uso

Preserve créditos e termos de uso do projeto base, suas ferramentas, artistas e mídias. Use uma ROM/patcheamento para distribuição somente com a autorização e direitos necessários.
