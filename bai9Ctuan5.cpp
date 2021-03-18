#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rand(int n) {
	srand(time(0));
	return rand() % n+1;
}
int main() {
	int n;
	cin >> n;
	int result = rand(n);
	cout << result;
	return 0;
}
