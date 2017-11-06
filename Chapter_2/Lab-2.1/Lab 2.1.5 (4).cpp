#include <iostream>
using namespace std;

int main() {
	int year, month, day;
	cin>>year;
	cin>>month;
	cin>>day;
	month=month-2;
	if(month<=0)
	{
		month+=12;
		year--;
	}
	month=month*83/32;
	month+=day;
	month+=year;
	month+=year/4;
	month-=year/100;
	month+=year/400;
	month=month%7;
	cout<<month;
	
	
	return 0;
}