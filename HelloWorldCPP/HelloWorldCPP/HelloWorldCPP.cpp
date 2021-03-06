// HelloWorldCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <string>
#include <vector>
#include <iostream>
#include "HelloWorldVO.h"

int main()
{
	std::vector<HelloWorldVO> helloWorldVOs (0); 
	
	HelloWorldVO* helloWorldVO1Ptr = new HelloWorldVO("Jessica","howdy!");
	
	HelloWorldVO* helloWorldVO2Ptr = new HelloWorldVO("Jessica", "hello!");

	HelloWorldVO* helloWorldVOCopyOf1Ptr = new HelloWorldVO(*helloWorldVO1Ptr);

	helloWorldVOs.push_back(*helloWorldVO1Ptr);
	helloWorldVOs.push_back(*helloWorldVO2Ptr);
	helloWorldVOs.push_back(*helloWorldVOCopyOf1Ptr);

	for (unsigned int i = 0; i < helloWorldVOs.size(); i++) {
		helloWorldVOs[i].print();
	}

	// free up memory allocated
	delete helloWorldVO1Ptr;
	delete helloWorldVO2Ptr;
	delete helloWorldVOCopyOf1Ptr;

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
