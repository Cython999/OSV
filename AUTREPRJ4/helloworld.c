#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>


///cree dossier

//executer prog ici!


void hello_world(int argc, char *argv[])
{
  //printf("HELLO WORLD\n");
  const char *name=argv[1];
  mkdir(name,0777);
}

int main(int argc, char *argv[]) {
  hello_world(argc, argv);
  return 0;
}
