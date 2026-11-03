#include "NumberArray.h"
#include <iostream>

using namespace std;

NumberArray::NumberArray(int size) {
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