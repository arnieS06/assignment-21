#include <iostream>
using namespace std;

int fillDyanmicArray(unique_ptr<int[]>& defaultArray, int& arraySize) {
	int userInput = 0;
	int iteratorVariable = 0;
	int inputSum = 0;


	while (true) {
		cout << "\nGive me a number (put non-number to stop) -> ";
		cin >> userInput;

		if (cin.fail()) {
			cout << "\nStopping input.";
			break;
		}

		if (iteratorVariable >= arraySize) {
			int newSize = arraySize * 2;
			unique_ptr<int[]> newArray(new int[newSize]);

			for (int n = 0; n < arraySize; n++) {
				newArray[n] = defaultArray[n];
			}

			defaultArray = move(newArray);
			arraySize = newSize;
		}


		defaultArray[iteratorVariable] = userInput;
		iteratorVariable++;

	}

	for (int i = 0; i < iteratorVariable; i++) {
		inputSum += defaultArray[i];
	}

	return inputSum;

}