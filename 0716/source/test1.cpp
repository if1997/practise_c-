#include <iostream>
using namespace std;
#if 0
class Point
{
public:

	Point(int m_x, int m_y) :x(m_x), y(m_y)
	{
		cout << "Constructor Point" << endl;
	}
	Point(Point& p)
	{
		x = p.x;
		y = p.y;
		cout << "Copy Constructor" << endl;
	}
	~Point(){
		cout << "Destructor Point" << endl;
	}
	void SetX(int xx){ x = xx; }
	void SetY(int yy){ y = yy; }
	int getX(){ return x; }
	int getY(){ return y; }
	void setOffet(int xx){ x += xx; }
private:
	int x, y;
};


class Line
{
public:
	Line(Point xp1, Point xp2) :p1(xp1), p2(xp2)
	{
		int x = p1.getX() - p2.getX();
		int y = p1.getY() - p2.getY();
		len = sqrt(x*x + y*y);
		cout << "Constructor Line" << endl;
	}

	Line(int x1, int y1, int x2, int y2) :p1(x1, y1), p2(x2, y2)
	{
		int x = p1.getX() - p2.getX();
		int y = p1.getY() - p2.getY();
		len = sqrt( x*x + y*y);
		cout << "Constructor Line" << endl;
	}
	Line(Line& pLine):p1(pLine.p1), p2(pLine.p2)
	{
		len = pLine.len;
		cout << "Line Copy Constructor" << endl;
	}
	~Line()
	{
		cout << "Destructor Line" << endl;
	}
	int getLen()
	{
		return len;
	}
	Point getP1()
	{
		return p1;
	}
	Point getP2()
	{
		return p2;
	}
private:

	Point p1;
	Point p2;
	double len;
};

int main()
{
	Point p1(1, 2);
	Point p2(4, 5);
	Line line(p1, p2);
	cout << line.getLen() << endl;

	return 0;
}
#endif
class A
{
public:
	A()
	{
		cout << "Cons A" << endl;
	}
	~A()
	{
		cout << "Des A" << endl;
	}
};

class Obj
{
public:
	Obj()
	{
		cout << "Obj Cons" << endl;
	}
	Obj(Obj& pObj)
	{

	}
	~Obj()
	{
		cout << "Obj Des" << endl;
	}
private:
	A a1;
	A a2;

};
int mainx()
{
	Obj obj;
	return 0;
}