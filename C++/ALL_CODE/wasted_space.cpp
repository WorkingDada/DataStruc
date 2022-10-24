#include <iostream>
using namespace std;
int main()
{
	int a = 0,n = 1,y;
	cin >> y;
	while (n < y){
		n*=2;
	}
	cout << n-y;
}