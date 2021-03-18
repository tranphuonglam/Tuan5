#include <iostream>
#include <cmath>
using namespace std;
void lamtronlen(double n) {
	double result;
	result = ceil(n);
	cout << result;
}
void lamtronxuong(double n) {
	double result;
	result = floor(n);
	cout << result;
}

int main() {
	double n;
	cin >> n;
	cout << "lam tron len: ";
	lamtronlen(n);
	cout << endl;
	cout << "lam tron xuong: ";
	lamtronxuong(n);
	return 0;
}
