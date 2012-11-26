#include "ProjectEuler.h"

using namespace std;

int main(int argc, char** argv)
{
	// Problem 1
	Multiple multi(5, 3, 1000);
	cout << "Problem 1: " << multi.getSum() << endl;

	// Problem 2
	Fib fib;
	cout << "Problem 2: " << fib.sum(4000000) << endl;

	// Problem 3
	PrimeFactor primFct(600851475143);
	cout << "Problem 3: " << primFct.getLargest() << endl;

	// Problem 4
	Palindromic pal(3);
	cout << "Problem 4: " << pal.getLargest() << endl;

	// Problem 5
	Divisible div(20);
	//cout << "Problem 5: " << div.getSmallest() << endl;

	// Problem 6
	cout << "Problem 6: " << difference(100) << endl;

	// Problem 7
	Prime prm;
	cout << "Problem 7: " << prm.getPrimeNum(10001) << endl;

	// Problem 8
	cout << "Problem 8: " << get5Greatest() << endl;

	// Problem 9
	cout << "Problem 9: " << pythagorean(1000) << endl;

	// Problem 10
	//cout << "Problem 10: " << prm.getPrimeSum(2000000) << endl;

	// Problem 11
	Matrix mtrx;
	cout << "Problem 11: " << mtrx.getMax4AdjacentProduct() << endl;

	// Problem 12
	TriangleNumber triNum;
	cout << "Problem 12: " << triNum.getTriNumByFactor(500) << endl;

	cout << "finish!" << endl;
	return 0;
}
