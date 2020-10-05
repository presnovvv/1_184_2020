#include <iostream>
using namespace std;
int main()
{
	float a = 0;
	float b = 0;
	cout << "Please enter a and b for 'ax+b=0'";
	cin >> a >> b;
	if (a != 0) {
		if (b == 0) { cout << "x=0"; }
		else {
			float x = -b / a;
			cout << "Solution:" << x;
		}
	}
	else { cout << "There is no solution"; }
	return 0;
}
