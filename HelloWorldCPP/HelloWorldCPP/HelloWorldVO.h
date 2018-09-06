#pragma once
#include <string>
class HelloWorldVO {
private:
	std::string name = "";
	std::string greeting = "";

public:
	HelloWorldVO();
	HelloWorldVO(std::string name, std::string greeting);
	HelloWorldVO(const HelloWorldVO& anotherHelloWorldVO);
	~HelloWorldVO();
	std::string getName() const;
	std::string getGreeting() const;
	void print();
};