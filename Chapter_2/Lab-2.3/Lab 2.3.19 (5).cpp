using namespace std;
int main(void) {
cout<<"enter a positive integer value greater than 1 (n)"<<endl;
cout << '+';
int a;
cin>>a;
if((a>1)&&(a<=100))
{
 a-=2;
for(int i = 0; i < a; i++)
cout << '-';
cout << '+' << endl;
for(int i = 0; i < a; i++) {
cout << '|';
for(int j = 0; j < a; j++)
cout << ' ';
cout << '|' << endl;
}
cout << '+';
for(int i = 0; i < a; i++)
cout << '-';
cout << '+' << endl;
}
else 
{
	cout<<"Error";
}
return 0;
}
