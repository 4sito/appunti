#include <iostream>


int main(){
	
	int age;
	std::string name;
	
			
	std::cout << "Input your full name and age:" << std::endl; // I'm printing my name i-times

	std::getline(std::cin,name);
	std::cin >> age;

	std::cout << "Hai  " << age << " anni e ti chiami "<< name << std::endl;

	return 0;
}
