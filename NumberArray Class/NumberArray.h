#pragma once


class NumberArray
{
private:
	int size;
	double* data;
	static const int defaultSize = 10;
public:
	// Purpose: create array Input: desired size of the array Preconditions: none Postconditions: Array is allocated and initialized to 0.0 Output: none
	NumberArray(int size);
	// Purpose: delete array Input: none Preconditions: NumberArray is initialized and is no longer in use Postconditions: data has been deallocated Output: Confirmation message
	~NumberArray();

	//Purpose: set a number in the array Input: index you want to change and value you want to set it to Preconditions: NumberArray is initialized Postconditions: value has been stored in the array Output: none
	void setNumber(int index, double value);
	//Purpose: get a number from the array Input: index you want to get Preconditions: NumberArray is initialized Postconditions: value has been returned Output: none
	double getNumber(int index) const;
	//Purpose: get the lowest value in the array Input: none Preconditions: NumberArray is initialized Postconditions: lowest value has been returned Output: none
	double getMin() const;
	//Purpose: get the highest value in the array Input: none Preconditions: NumberArray is initialized Postconditions: highest value has been returned Output: none
	double getMax() const;
	//Purpose: get the average value of the array Input: none Preconditions: NumberArray is initialized Postconditions: average value has been returned Output: none
	double getAverage() const;
	//Purpose: display the values in the array Input: none Preconditions: NumberArray is initialized Postconditions: values have been displayed in console Output: all values in the array
	void print() const;
};