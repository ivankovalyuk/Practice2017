#include <iostream>
using namespace std;
int main(void) {
int year;
cout << "Enter a year: ";
cin >> year;
   if(((year%4)!=0)||((year%400)!=0))
   {
   	 cout<<"Common Year";
   }
   else if((year%100)!=0)
   {
   	cout<<"Leap Year";
   }
   else
   {  
       	cout<<"Leap Year";	
   }
return 0;
}
