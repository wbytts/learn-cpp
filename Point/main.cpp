#include <iostream>
using namespace std;

class Point
{
public:
	Point(int xx = 0, int yy = 0)
	{
		X = xx;
		Y = yy;
	}
	Point(Point& p);
	
	int GetX() { return X; }
	int GetY() { return Y; }
private:
	int X;
	int Y;
};

Point::Point(Point& p)
{
	X = p.X;
	Y = p.Y;
	cout << "调用拷贝构造函数\n";
}

int main()
{

	Point A(3, 4);
	Point B = A;

	cout << B.GetX() << endl;
	cout << B.GetY() << endl;

	return 0;
}