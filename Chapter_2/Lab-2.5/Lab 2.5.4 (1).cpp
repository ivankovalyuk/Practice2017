#include <iostream>
using namespace std;

int main() {
	int n,a,b;
	
	do
	{
	cout<<"MENU:"<<endl<<"0 - exit"<<endl<<"1 - addition"<<endl<<"2 - subtraction"<<endl<<"3 - multiplication"<<endl<<"Your choice?"<<endl;
	cin>>n;
	if(n==0)
		continue;
	cin>>a;
            cin>>b;
	switch(n)
	{
	    case 1: cout<<(a+b)<<endl;
	    break;
	    case 2 :cout<<(a-b)<<endl;
	    break;
	    case 3 : cout<<a*b<<endl;
	    break;
	    case 4 : cout<<a/b<<endl;
	    break;
	    default : cout<<"Incorrect"<<endl;
	}
	
	}
	while(n!=0);
	return 0;
}