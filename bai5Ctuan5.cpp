#include <iostream>
#include <cmath>
using namespace std;
int check(int n) {
	 if (n < 2){
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
	int n;
	cin >> n;
	if(check(n)== 0) {
		cout << "0"<< endl;
	} else { 
	cout << "1" << endl;
	}
	for(int i=2;i<n;i++)
	{
		if(check(i)){
			cout << i << " ";
		}
	}
	
	return 0;
}
