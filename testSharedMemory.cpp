#include "sharedMemory.h"

int main()
{
  Shared_Memory sh;
  sh.setSize(10);
  sh.setKey(18);
  uint8_t* essai;
  essai = (sh.getSharedDatas());

  essai[1] = 12;
  essai[6] = 99;

  uint8_t* essaiBis;
  essaiBis = (sh.getSharedDatas());
  for(int i=0;i<sh.getSize();i++)
  {
    printf("%d \t",essaiBis[i]);
  }
  printf("\n");
  return 0;
}
