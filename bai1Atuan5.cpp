#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int x = 6;
	char arr[10]="abcdefghi";
	int a[1000];
	char b[1000][1000];
	int d=9;
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
	cin>>a[i];
}
	fflush(stdin);  
	for(int i=0;i<n;i++) {
	cin.getline(b[i], 10);
}
	for(int i=0;i<n;i++)
	{
		cout<<&a[i]<<"\t"<<(void *)&b[i]<<endl;
	}
	return 0;
}

