#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	unsigned long long c =0;
	unsigned long long p =0;
	unsigned long long current=1;
	for(int i=1; i<x; i++)
	{
               c=p+current;
               p=current;
               current=c;
	}
	cout<<c;
	return 0;
}