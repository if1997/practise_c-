#include <iostream>
using namespace std;
#if 0
class Hero
{
public:
	virtual int power()
	{
		return 15;
	}
};
class AdvHero:public Hero
{
public:
	virtual int power()
	{
		return 30;
	}
};

class Enemy
{
public:
	int attack()
	{
		return 20;
	}
};




void PlayGrd(Hero* pH, Enemy* pE)
{
	if (pH->power() > pE->attack())
	{
		cout << "You Win" << endl;
	}
	else
	{
		cout << "K.O." << endl;
	}
}


int main()
{
	Hero h;
	Enemy e;
	PlayGrd(&h, &e);
	AdvHero ah;
	PlayGrd(&ah, &e);

	//Hero* p = &ah;
	//cout << p->power() << endl;;
	return 0;
}
#endif

class Demo
{
public:
	Demo(int xx = 0) :x(xx){ cout << "Constructor Demo" << endl; }
	~Demo(){ cout << "Destructor Demo" << endl; }
	void setVal(int xx){ x = xx; }
	int getVal(){ return x; }
	//�麯����ָ�� Vptr
	virtual void print(){ cout << "Demo output" << endl; }
private:
	int x;
};
class Test :public Demo
{
public:
	void print(){ cout << "Test output" << endl; }
};
/*
���ض�̬  ��������  ����ʱ��̬
ǿ�ƶ�̬  ǿ������ת�� 
��������̬  ģ��
������̬    �麯����д   ����ʱ��̬
*/


int mainz()
{
	Demo d;
	cout << sizeof(d) << endl;
	d.setVal(5);
	//int* p = (int*)&d;
	//cout << *p++ << endl;
	//cout << *p << endl;
	Test t;
	cout << sizeof(t) << endl;
	return 0;
}