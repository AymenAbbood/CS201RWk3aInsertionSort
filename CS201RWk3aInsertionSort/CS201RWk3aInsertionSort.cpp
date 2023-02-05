// CS201RWk3aInsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


// PRE: a & b have integer values
// POST: a=b and b=a after swap

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;


}



// PRE: Array is set with values
// POST: Array will be sorted using insertion sort


void sortArray(int arr[], int size) {
	int j;
	for (int i = 1; i < size; i++) {
		j = i;
		while (j > 0 && arr[j] < arr[j - 1]) {
			swap(arr[j], arr[j - 1]);
			j--;

		}
	}
}


void sortArray(vector<int> &arr) {
	int j;
	for (int i = 1; i < arr.size(); i++) {
		j = i;
		while (j > 0 && arr[j] < arr[j - 1]) {
			swap(arr[j], arr[j - 1]);
			j--;

		}
	}
}



void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

}

void printArray(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;

}

void readFile(vector<int> &v1) {
	ifstream inFile;
	inFile.open("data.txt");
	if (!inFile.is_open()) {
		cout << "Unable to open file\n";
		return;
	}
	int tempInt;
	while (inFile >> tempInt){
		v1.push_back(tempInt);

	}
	printArray(v1);
	inFile.close();
}




int main() {
	int size = 6;
	int arr[6] = { 15, 7, 3, 4, 9, 5 };
	cout << arr << " " << &arr[0] << " " << &arr[1] << endl;
	printArray(arr, size);
	sortArray(arr, size);
	printArray(arr, size);

	vector<int> myVector;
	readFile(myVector);
	printArray(myVector);
	sortArray(myVector);
	printArray(myVector);
}