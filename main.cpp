// assignment 21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "fillDynamicArray.h"
#include "printSum.h"
using namespace std;

int fillDyanmicArray(unique_ptr<int[]>& defaultArray, int& arraySize);

int main() {
	int arraySize = 5;
	unique_ptr<int[]> defaultArray(new int[arraySize]);

	int sum = fillDyanmicArray(defaultArray, arraySize);

	printSum(sum);

	return 0;
}
