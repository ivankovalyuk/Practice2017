#include <iostream>
using namespace std;

int main() {
	// your code goes here
	unsigned long long b=1,a;
	cin>>a;
	for(int i = 1; i<=a; i++)
	{
		b*=i;
	}
	cout<<b;
	return 0;
}