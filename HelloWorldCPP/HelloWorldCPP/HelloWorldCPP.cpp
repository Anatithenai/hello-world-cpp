// HelloWorldCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <string>
#include <vector>
#include <iostream>

// sample struct
struct HelloWorldVO {
	std::string name;
	std::string greeting;
};

// prototypes must come before compiler references relevant function, 
// unless the function implementation comes before reference.

void printHelloWorldVO(HelloWorldVO* helloWorldVOPtr);

int main()
{
	std::vector<HelloWorldVO> helloWorldVOs (0); 
	
	HelloWorldVO* helloWorldVO1Ptr = new HelloWorldVO;
	helloWorldVO1Ptr -> name = "Jessica";
	helloWorldVO1Ptr -> greeting = "howdy!";

	HelloWorldVO* helloWorldVO2Ptr = new HelloWorldVO;
	helloWorldVO2Ptr -> name = "Jessica";
	helloWorldVO2Ptr -> greeting = "hello!";

	helloWorldVOs.push_back(*helloWorldVO1Ptr);
	helloWorldVOs.push_back(*helloWorldVO2Ptr);

	for (unsigned int i = 0; i < helloWorldVOs.size(); i++) {
		// get the memory address for the relevant HelloWorldVO
		printHelloWorldVO(&helloWorldVOs[i]);
	}

	// free up memory allocated
	delete helloWorldVO1Ptr;
	delete helloWorldVO2Ptr;

}

void printHelloWorldVO(HelloWorldVO* helloWorldVOPtr) {	
	if (helloWorldVOPtr != NULL) {
		// alternatively could do helloWorldVOPtr->name and/or helloWorldVOPtr->greeting
		std::cout << (*helloWorldVOPtr).name << " says " << (*helloWorldVOPtr).greeting << std::endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
