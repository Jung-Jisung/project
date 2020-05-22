#include <iostream>

#include "processor.h"

Processor::Processor(Cache* cache)
{
  // implement here
	this -> cache = cache;
}

//main함수에서 받은 memory request를 read/write로 구분
void Processor::rcvMemRequest
{
  // implement here

}

//Cache의 read를 호출
int Processor::read_data
{
  // implement here
	return cache.read_data(address);
}

//Cache의 write를 호출
void Processor::write_data
{
  // implement here
	cache.write_data(address,value);
}
