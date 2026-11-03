#include <iostream>
#include "NumberArray.h"

using namespace std;

int main()
{
	NumberArray test(3);
	test.setNumber(0, 4.5);
	test.setNumber(1, 10.0);
	test.setNumber(2, 1.0);

	cout << test.getNumber(0) << endl << test.getNumber(1) << endl << test.getNumber(2) << endl;
	cout << test.getMin() << endl;
	cout << test.getMax() << endl;
	cout << test.getAverage() << endl;
	test.print();
}
