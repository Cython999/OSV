#include "os_defines.h"

//----------------Couche 1-----------------


//calcule et etourne Nb block necessaire
//Pour stocker nOctets
int compute_nblock(int nOctets)
{
  int nb_blocks;
  nb_blocks=nOctets/512;
  return nb_blocks;
}
