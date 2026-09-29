
#include <iostream>
#include <cmath>
using namespace std;

bool isWholeNumber(float num) {
    return trunc(num) == num;
}

int main() {
	// input
	cout << "Babylonian Sqrt Approx!!!" << endl;
	float S;
	cout << "Enter a non-negative number: ";
	cin >> S;
	if (S < 0) {
		cout << "Negative number." << endl;
		return 0;
	}
	float iter = -1;
	while ((iter < 0) || !isWholeNumber(iter)) {
		cout << "Enter a positive integer number of iterations: ";
		cin >> iter;

		if ((iter < 0) || !isWholeNumber(iter)) {
			cout << "INVALID NUMBER OF ITERATIONS" << endl;
		}
	}

	// approximation
	float xn = S,
		  xn1 = S;
	for (int i=0; i<iter; i++) {
		xn1 = 0.5f * (xn + (S/xn));
		xn = xn1;
	}

	cout << xn1 << endl;

	return 0;
}
