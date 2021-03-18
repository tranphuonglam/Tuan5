#include <iostream>
#include <cmath>
using namespace std;
int UCLN(int a,int b) {
	while(a != b) {
		 if (a > b)
            a = a - b;
        else
            b = b - a;
	}
	return a; // hoac return b;
}
int check(int a) {
	 if (a < 2 ){
        return 0;
    }
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
    
}
int check1(int b) {
	 if (b < 2 ){
        return 0;
    }
    for (int i = 2; i <= sqrt(b); i++)
    {
        if (b % i == 0)
        {
            return 0;
        }
    }
    return 1;
    
}
int main() {
	int a,b;
	cin >>a >> b;
	int n = UCLN(a,b);
	cout << "ucln: " << n << endl;
	if(check(a)==1 && check1(b) == 1) {
		cout << a << " va " << b << " la SNT";
	} else if (check(a) !=1 || check1(b) !=1){
		cout << "1 trong 2 so khong phai la SNT" << endl;
	} else {
		cout << "ca 2 so khong phai la SNT";
	}
	return 0;
}
