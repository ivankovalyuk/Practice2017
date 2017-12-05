#include <iostream>
#include <string>
using namespace std;
class Square
{
public:
	Square(double side);
	void set_side(double side);
	void print();
private:
	double side;
	double area;
};
Square::Square(double side)
{
	this->set_side(side);
}
void Square::print()
{
	cout << "Square: side=" << this->side << " area=" << this->area << endl;
}
void Square::set_side(double side)
{
	if (side > 0)
	{
		this->side = side;
		area = side*side;
	}
}
int main()
{
	Square s(8);
	s.print();
	s.set_side(4.0);
	s.print();
	return 0;
}







