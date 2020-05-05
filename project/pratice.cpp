#include <iostream>

int main(){
	int* array= new int[5]; 
	array[5] = 6;		
	std::cout << array[0] << array[1] << array[2] << array[3] << array[4] << array[5] << '\n';
	std::cout << sizeof(array) << sizeof(int);
	array[5] = 7;
	std::cout << array[5];
	return 0;	
}

