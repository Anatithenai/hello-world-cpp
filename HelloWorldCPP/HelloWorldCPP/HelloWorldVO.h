#pragma once
#include <string>
class HelloWorldVO {
private:
	std::string name = "";
	std::string greeting = "";

public:
	void setName(std::string name);
	std::string getName();
	void setGreeting(std::string greeting);
	std::string getGreeting();
	void print();
};