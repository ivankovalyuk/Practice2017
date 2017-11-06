#include <iostream>
using namespace std;

int main() {
	int a;
    cin>>a;
    int vector1[5] = {50,20,10,5,1};
    int vector2[5];
    for(int i=0;i<5;i++)
    {
    	vector2[i]=a/vector1[i];
    	for(int j=0;j<vector2[i];j++)
    	{
    		cout<<vector1[i]<<" ";
    	}
    	a=a%vector1[i];
    }
	return 0;
}