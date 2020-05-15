#include <iostream>
#include <iomanip> 

#include "memory.h"

/* memory cell 자체는 data_t array로 구현 */

Memory::Memory(int size, clockCycle_t mem_access_time)
{
  // implement here

}


Memory::~Memory()
{
  // implement here

}


// Cache 또는 Processor에서 받은 address의 data를 return
int Memory::read_data
{
  globalClock += mem_access_time;
  // implement here

}


// Cache 또는 Processor에서 받은 data를 address에 write
void Memory::write_data
{
  globalClock += mem_access_time;
  
  // implement here
}


void Memory::print()
{
  return;
  //std::cout << "// Memory //" << std::endl;
  for(int i = 0; i < this->size; i++)
  {
    std::cout << "[" << std::setw(2) << i << "] :" << std::setw(5) << this->memory_cells[i] << std::endl;
  }
  std::cout << std::endl;
}


