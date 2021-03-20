#include<iostream>
#include <cmath>
using namespace std;
int factorial(int n)
{
	if(n==0) return 1;
	else return factorial(n-1)*n;
}
int main()
{
	int n;
	cout << "n = ";
	cin>>n;
	int x = 10;
	cout<<"x = "<<x<<endl;
	cout<<n<<"! = "<<factorial(n)<<endl;
	cout<<x<<"! = "<<factorial(x)<<endl;
	return 0;
}
