#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Point
{
public:
	Point(int xx = 0, int yy = 0) :x(xx), y(yy){}
	~Point(){}
	void SetX(int xx){ x = xx;  }
	void SetY(int yy){ y = yy; }
	int getX(){ return x; }
	int getY(){ return y; }
private:
	int x, y;
};
class Station
{
public:
	Station(string name) :strName(name){}
	string getName(){ return strName; }

private:
	string  strName;
};

int main()
{
	vector<Point> vec;
	vec.push_back(Point(1, 1));
	vec.push_back(Point(1, 2));
	vec.push_back(Point(2, 4));

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i].getX() << "," << vec[i].getY() << endl;
	}

	vector<Station> vec1;
	vec1.push_back(Station("∫ÛŒ¿’Ø"));
	vec1.push_back(Station("»˝«≈"));
	vec1.push_back(Station("‘Ê‘∞"));

	for (int i = 0; i < vec1.size(); i++)
	{
		cout << vec1[i].getName() << endl;
	}
	return 0;
}