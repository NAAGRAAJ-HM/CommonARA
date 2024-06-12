#include "Std_Types.hpp"

#include "Ara_NvM_Type.hpp"
#include "Ara_Dem_Type.hpp"
#include "Ara_Dem.hpp"

Std_ReturnType NvM_Rn_SetWriteAllTrigger(
      uint16  ushBlockNr
   ,  boolean bSet
){
   if(TRUE == bSet){
      Memstack_SetEcuNvMRamBlockStatus(ushBlockNr);
   }
   return E_OK;
}
