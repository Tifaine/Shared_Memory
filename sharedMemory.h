/*
* sharedMemory.h
*
* Copyright (c) 2018 STMicroelectronics - All Rights Reserved
* Copyright (c) 2018 CREN - Action de Recherche Tifaifai
*
* Author: Guyot Tifaine <tifaine.guyot@st.com>
*/

#ifndef SHARED_MEMORY_H
#define SHARED_MEMORY_H
#include <sys/shm.h>
#include <stdio.h>
#include <cstdint>
#include <stdlib.h> 
class Shared_Memory
{
public:
  Shared_Memory();
  ~Shared_Memory();

  uint8_t* getSharedDatas();

  void setKey(int _key){key=_key;}
  int getKey(){return key;}

  void setSize(int _size){size = _size;}
  int getSize(){return size;}

private:
  int key;
  int size;
  uint8_t* datas;
};

#endif //SHARED_MEMORY_H
