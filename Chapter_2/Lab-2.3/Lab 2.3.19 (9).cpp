#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int e, answ=1;
	cin>>e;
	for(int i =0; i<e/2; i++)
	{
		answ+=(4+i*8);
	}
	cout<<answ;
	return 0;
}