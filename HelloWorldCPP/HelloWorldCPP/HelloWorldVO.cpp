#include "pch.h"
#include "HelloWorldVO.h"
#include <iostream>

const std::string NO_NAME_SET = "No name set";
const std::string NO_GREETING_SET = "no greeting set.";

void HelloWorldVO::setName(std::string name)
{
	this->name = name;
}

std::string HelloWorldVO::getName() {
	return this->name;
}

void HelloWorldVO::setGreeting(std::string greeting) {
	this->greeting = greeting;
}

std::string HelloWorldVO::getGreeting() {
	return this->greeting;
}

void HelloWorldVO::print()
{
	std::string name = (this->getName() != "") ? this->getName() : NO_NAME_SET;
	std::string greeting = (this->getGreeting() != "") ? this->getGreeting() : NO_GREETING_SET;
	std::cout << name << " says " << greeting << std::endl;
}


