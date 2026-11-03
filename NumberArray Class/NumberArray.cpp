#include "NumberArray.h"
#include <iostream>

using namespace std;

NumberArray::NumberArray(int size) {
	data = new double[size];

	for (int i = 0; i < size; i++) {
		data[i] = 0.0;
	}
}

NumberArray::~NumberArray() {
	delete[] data;
}