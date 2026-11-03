#include "NumberArray.h"
#include <iostream>

using namespace std;

NumberArray::NumberArray(int size) {
	if (size <= 0) {
		size = defaultSize;
	}
	data = new double[size];
	this->size = size;

	for (int i = 0; i < size; i++) {
		data[i] = 0.0;
	}
}

NumberArray::~NumberArray() {
	delete[] data;
}

void NumberArray::setNumber(int index, double value) {
	if (index < size) {
		data[index] = value;
	}
	else {
		cout << "Invalid index found when entering number, please enter an index between 0 and " << size - 1 << endl;
	}
	return;
}

double NumberArray::getNumber(int index) const {
	if (index < size) {
		return data[index];
	}
	else {
		cout << "Invalid index found when getting number, please enter an index between 0 and " << size - 1 << endl;
		return 0.0;
	}
}

double NumberArray::getMin() const {
	double min = data[0];

	for (int i = 1; i < size; i++) {
		if (data[i] < min) {
			min = data[i];
		}
	}
	return min;
}

double NumberArray::getMax() const {
	double max = data[0];

	for (int i = 1; i < size; i++) {
		if (data[i] > max) {
			max = data[i];
		}
	}
	return max;
}

double NumberArray::getAverage() const {
	double sum = 0.0;
	double average;

	for (int i = 0; i < size; i++) {
		sum += data[i];
	}
	average = sum / size;
	return average;
}

void NumberArray::print() const {
	cout << "The values of the array are: ";
	for (int i = 0; i < size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}