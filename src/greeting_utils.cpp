#include <iostream>
#include <cstring>
#include <string>

#include "greeting_utils.h"

namespace GreetingUtils{
	std::string create_message(const std::string& name){
		std::string msg = "Hello, " + name + "!";
		
		return msg;
	}

	char *format_as_c_string(const std::string& msg){
		long len = (msg.length()) + 1;
		
		char *result = new char[len];
		
		strcpy(result, msg.c_str());
		result[len] = '\0';

		return result;
	}
}
