#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rand(int a) {
	srand(time(0));
	return rand() % 50;
}
int main() {
	int n = rand(n);
	cout << n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			for(int k=j+1;k<n;k++) {
				if((a[i]+a[j]+a[k])% 25) {
					cout << a[i] << " " << a[j] << " " << a[k];
					break;
				}
			}
		}
	}
	return 0;
}
