#include <iostream>
#include <string>

#include "greeting_utils.h"

int main(){
	std::string name;
	
	std::cout << "Please enter your name: ";	
	std::getline(std::cin, name);
	std::cout << std::endl;

	name = GreetingUtils::create_message(name);

	char *result = GreetingUtils::format_as_c_string(name);

	std::cout << result << std::endl;

	delete[] result;

	return 0;
}
