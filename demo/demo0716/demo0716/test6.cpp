#include <iostream>
#include <vector>//动态数组  栈
using namespace std;
//泛型编程
template <typename T>
class A
{
public:
	A(T xx=0, T yy=0) :x(xx), y(yy){ cout << "A cons" << endl; }
	~A(){ cout << "A Des" << endl; }
	void setX(T xx){ x = xx; }
	void setY(T yy){ y = yy; }
	void GetVal(){ cout << x << "," << y << endl; }
private:
	T x, y;
};


int mainrr()
{
	/*
	A<int> a(1,2);
	a.setX(44);
	a.setY(88);
	a.GetVal();
	A<double> b;
	b.setX(0.625);
	b.setY(1.01);
	b.GetVal();
*/
	vector<double>  vec;
	vec.push_back(2.0);
	vec.push_back(3.1);
	vec.push_back(5.3);
	vec.push_back(8.9);
	//stl源码剖析
	cout << vec.size() << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}

	vec.pop_back();
	cout << vec.size() << endl;



	return 0;
}