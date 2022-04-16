#include "os_defines.h"

//----------------Couche 1-----------------


//Ecrit un block a la position pos
// block ??
void write_block(char *block[], int pos)
{
  FILE *fichier=fopen("./d0","r+");
  fseek(fichier,pos,SEEK_SET);
  while()
  fclose(fichier);
}
