#include <iostream>
using namespace std;

int main() {
    int c0, counter;
    counter=0;
    cin>>c0;
    while(c0!=1)
    {
    	cout<<c0<<endl;
    	counter++;
    	if(c0%2==0)
    	{
    		c0/=2;
    	}
    	else 
    	{
    	c0=c0*3+1;
    	}
    }
    cout<<"Steps "<<counter;
	return 0;
}