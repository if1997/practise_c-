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

	//���ͼ�����ԭ��   ���ӿ��Ե���
	// ������һ������ĸ���
	//���������Գ�ʼ���������
	//����ָ�����ָ���������
	return 0;
}
#endif
