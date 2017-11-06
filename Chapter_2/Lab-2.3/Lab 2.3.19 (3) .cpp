#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	unsigned long long a = 2;
	if(n!=0)
	{
	for(int i=1;i<n;i++)
	{
		a*=2;
	}
	}
	else
	{
		a=1;
	}
	
	cout<<a;
	return 0;
}