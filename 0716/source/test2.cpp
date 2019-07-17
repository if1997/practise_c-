/*
  在原有代码的基础上进行更具体更详细的定义
  1 拿到原有类的内容
  2 改造原有类的内容
  3 添加属于自己的新内容
*/
#include <iostream>
using namespace std;
#if 0
class  Base
{
public:
	Base(){ cout << "Base Sontructor" << endl; }
	int getX(){ return x; }
	int getY(){ return y; }
	int getZ(){ return z; }
	void setY(int m_y){ y = m_y; }
	void setZ(int m_z){ z = m_z; }
	int x;
protected:
	int y;
private:
	int z;
};

class Sub :public Base
{
public:
	Sub(){ cout << "Sub constructor" << endl; }
	void UseData()
	{
		cout << x << ";" << y << ";" << getZ() << endl;
	}
};



int main()
{
	//Base b;
	Sub sub;
	//cout << sizeof(sub) << endl;
	//cout << &b.x << endl;
	
	//cout << &sub.x << endl;

	//sub.setZ(100);
	int*p = (int*)&sub;
	*p = 100;  
	p++;
	*p = 1000; 
	p++;
	*p = 10000;
	cout << sub.getX() << endl;
	cout << sub.getY() << endl;
	cout << sub.getZ() << endl;
	
	return 0;
}
#endif

class A
{
public:
	A(int xx, int yy) :x(xx), y(yy){ cout << "Constructor A" << endl; }
	~A(){ cout << "Destructor A" << endl; }
private:
	int x, y;
};
class B :public A
{
public:
	B(int xx, int yy, int zz) :A(xx, yy), z(zz)
	{
		cout << "Constructor B" << endl;
	}
private:
	int z;
};

class C :public B
{
public:
	C(int xx, int yy, int zz, int ww) :B(xx, yy, zz), w(ww)
	{
		cout << "Constructor C" << endl;
	}
private:
	int w;
};
int mainy()
{
	C c(1,2,3,4);
	return 0;
}