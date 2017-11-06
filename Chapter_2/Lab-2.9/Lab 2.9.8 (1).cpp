#include <iostream>
using namespace std;
int main(void) {
int vector1[7] = {4, 7, 2, 8, 1, 3, 0};
int vector2[7];
// Insert your code here
for(int i=0; i<7; i++)
{
	if((i-1)<0)
	{
	   vector2[i]=vector1[7];	
	}
	else
	{
	vector2[i]=vector1[i-1];
	}
}
for(int i = 0; i < 7; i++)
cout << vector2[i] << ' ';
cout << endl;
return 0;
}
