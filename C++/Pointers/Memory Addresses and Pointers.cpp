#include <iostream>

int main(){
	int number = 10;
	int* ptr;
	ptr = &number;
	
	std::cout <<number <<std::endl;
	std::cout <<&number <<std::endl;
	std::cout <<ptr <<std::endl;
	std::cout <<*ptr <<std::endl;
	
	return (0);
}
