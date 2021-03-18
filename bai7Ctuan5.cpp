#include <iostream>
using namespace std;
void tamgiac(int n) {
	// n = sodong
	for(int i=1;i<=n;i++) {
		//in ra " "
		for(int j=i;j<n;j++) {
			cout << " ";
		}
		//in ra *
		for(int j=1;j<=2*i-1;j++) {
			cout << "*";
		}
		cout << endl;
	}
}
int main() {
	int n;
	cin >> n;
	tamgiac(n);
	return 0;
}
