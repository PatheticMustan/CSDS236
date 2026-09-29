
#include <iostream>
using namespace std;

int main() {
	string A = "";
	string B = "";
	cout << "Enter string A: ";
	getline(cin, A);
	cout << "Enter string B: ";
	getline(cin, B);

	// on Windows, returns are "\r\n", making A.length() longer than expected.
	if (!A.empty() && A.back() == '\r') {
	    A.pop_back();
	}
	if (!B.empty() && B.back() == '\r') {
	    B.pop_back();
	}

	string result = "aaaaaaaaaa A length: " + to_string(A.length());


//	cout << ":" << A << ":" << endl;
	cout << result << endl;

	
	for (char c : A) {
	    cout << "'" << c << "' (" << (int)(unsigned char)c << ")" << endl;
	}

	return 0;
}
