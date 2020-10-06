#include <iostream>
using namespace std;
 
int tabl(int i) {
	for(i=1;i<10;i++) {
		cout << i << "*" << i << "=" << i * i << endl;
	}
	return 0;
}
int main() {
	int i = 1;
	tabl (i);
	return 0;
}