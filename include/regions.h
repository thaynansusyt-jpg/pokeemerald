#ifndef GUARD_REGIONS_H
#define GUARD_REGIONS_H

#include "global.h"
#include "constants/regions.h"

enum KantoSubRegion GetKantoSubregion(u32 mapSecId);

static inline enum Region GetRegionForSectionId(u32 sectionId)
{
    if(sectionId>=MAPSEC_UN_NUVEMA && sectionId<=MAPSEC_UN_CASTELIA)return REGION_UNOVA;
    if (sectionId >= MAPSEC_JUBILIFE_CITY && sectionId <= MAPSEC_SINNOH_LEAGUE)
        return REGION_SINNOH;
    if (sectionId >= KANTO_MAPSEC_START && sectionId < MAPSEC_SPECIAL_AREA)
        return REGION_KANTO;
    return REGION_HOENN;
}

static inline enum Region GetCurrentRegion(void)
{
    return GetRegionForSectionId(gMapHeader.regionMapSectionId);
}

#endif // GUARD_REGIONS_H
