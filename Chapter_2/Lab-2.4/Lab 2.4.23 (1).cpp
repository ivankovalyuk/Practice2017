#include <iostream>
#include <iostream>
using namespace std;

int main() {
	int a,counter=0;
	cin>>a;
	while(a)
	{
		counter+=a&1;
		a>>=1;
	}
	cout<<counter;
	return 0;
}