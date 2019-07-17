#include <iostream>
using namespace std;
#if 0
class Base
{
public:
	void Fun(){ cout << "Base Fun" << endl; }
	void Fun(int i){ cout << "Base Fun with one argument" << endl; }
};
class Sub :public Base
{
public:
	void Fun(){ cout << "Sub Fun...." << endl; }
};
int main()
{
	Base b;
	Sub s;
	b.Fun();
	s.Fun();

	//类型兼容性原则   儿子可以当爹
	// 子类是一种特殊的父类
	//子类对象可以初始化父类对象
	//父类指针可以指向子类对象
	return 0;
}
#endif
