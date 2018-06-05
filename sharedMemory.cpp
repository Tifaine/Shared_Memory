/*
* sharedMemory.h
*
* Copyright (c) 2018 STMicroelectronics - All Rights Reserved
* Copyright (c) 2018 CREN - Action de Recherche Tifaifai
*
* Author: Guyot Tifaine <tifaine.guyot@st.com>
*/
#include "sharedMemory.h"

Shared_Memory::Shared_Memory()
{

}

Shared_Memory::~Shared_Memory()
{

}

uint8_t* Shared_Memory::getSharedDatas()
{
  int shmid;
  if ((shmid = shmget(key, size, 0644 | IPC_CREAT)) < 0)
  {
    perror("shmget");
    exit(1);
  }
  if ((datas = (uint8_t*)shmat(shmid, NULL, 0)) == (uint8_t *) -1)
  {
    perror("shmat");
    exit(1);
  }

  return datas;
}
