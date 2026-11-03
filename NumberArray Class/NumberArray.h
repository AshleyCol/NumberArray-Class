#pragma once


class NumberArray
{
private:
	int size;
	double* data;
	static const int defaultSize = 10;
public:
	NumberArray(int size);
	~NumberArray();

	void setNumber(int index, double value);
	double getNumber(int index) const;
	double getMin() const;
	double getMax() const;
	double getAverage() const;
	void print() const;
};