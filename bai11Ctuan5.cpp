#include <iostream>
#include <cmath>
using namespace std;
void chuyencoso(int n) 
{  
    int arr[1000]; 
    int i = 0; 
    while (n > 0) { 
        arr[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        cout << arr[j]; 
} 
int main() {
	int n; 
	cin >> n;
    chuyencoso(n);
	return 0;
}
