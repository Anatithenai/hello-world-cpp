#include "pch.h"
#include "HelloWorldVO.h"
#include <iostream>

const std::string NO_NAME_SET = "No name set";
const std::string NO_GREETING_SET = "no greeting set.";

HelloWorldVO::HelloWorldVO()
{
	this->name = "";
	this->greeting = "";
}

HelloWorldVO::HelloWorldVO(std::string name, std::string greeting)
{
	this->name = name;
	this->greeting = greeting;
}

HelloWorldVO::HelloWorldVO(const HelloWorldVO & anotherHelloWorldVO)
{
	this->name = anotherHelloWorldVO.getName();
	this->greeting = anotherHelloWorldVO.getGreeting();
}

HelloWorldVO::~HelloWorldVO()
{
	
}

std::string HelloWorldVO::getName() const {
	return this->name;
}

std::string HelloWorldVO::getGreeting() const {
	return this->greeting;
}

void HelloWorldVO::print()
{
	std::string name = (this->getName() != "") ? this->getName() : NO_NAME_SET;
	std::string greeting = (this->getGreeting() != "") ? this->getGreeting() : NO_GREETING_SET;
	std::cout << name << " says " << greeting << std::endl;
}


