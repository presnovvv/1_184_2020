#include <iostream>
using namespace std;
int main()
{
	float s = 0;
	float srz = 0;
	int n = 4;
	float x;
	cout << "Please enter x" << endl;;
	for (int i = 0; i < n; i++) {
		cin >> x;
		s = s + x;
	}
	srz = s / n;
	cout << "Average:" << srz << endl;;
	return 0;
}