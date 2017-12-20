#include <iostream>
#include <string>
using namespace std;
int main(void) {
char a = '0', b = '0';
int c = 0;
try{
    cin >> a;
    if(!isdigit(a))
        throw string("Input number!!!");
    cin >> b;
    if(!isdigit(b))
        throw string("Input number!!!");
    if(b=='0')
        throw string("Can't divide by zero.");
    c = a / b;
    cout << c << endl;
}
catch(string str){
    cout<<str<<endl;
}
return 0;
}