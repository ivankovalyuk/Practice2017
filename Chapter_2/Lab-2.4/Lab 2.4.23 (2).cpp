#include <iostream>
using namespace std;
int main(void) {
unsigned short int val;
bool ispalindrome = false;
cout << "value = ";
cin >> val;
bool answ;
for(int i=0; i<16;i++)
{
	ispalindrome=(((val>>i)&1)==((val>>15-i)&1));
	if(!ispalindrome)

	{
		break;
	}
}
if(ispalindrome)
cout << val << " is a bitwise palindrome" << endl;
else
cout << val << " is not a bitwise palindrome" << endl;
return 0;
}
