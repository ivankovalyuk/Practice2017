#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
double pi4 = 0.;
long n;
int c;
cout << "Number of iterations? ";
cin >> n;
for(int i = 0; i<n; i++)
{
    	c = pow(-1,i);
        pi4 +=(double)(c)/(2*i+1);
}
cout.precision(20);
cout << "Pi = " << (pi4*4) << endl;
return 0;
}
