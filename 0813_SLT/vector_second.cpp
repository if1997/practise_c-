#include <iostream>
#include <vector>
#include <algorithm>  //�������㷨

using namespace std;

int main()
{
    vector<int> b(5);   //����һ����СΪ5��vector����
    b.push_back(1);  //��b������棬����һ���ռ䣬�����ֵ1
    b.push_back(11);
    b.insert(b.begin()+3,4,99);//�ڵ�����Ԫ�غ������4������99


    vector<int>::iterator it;  //����һ��vector������
    cout << "b�е�Ԫ��Ϊ��\n";
    for (it=b.begin();it!=b.end();it++)
    {
        cout <<*it<<" ";
    }
    cout <<endl;

    b.erase(b.begin());  //ɾ����һ��Ԫ��
    b.pop_back();  //ɾ�����һ��Ԫ��
    b.erase(b.begin()+1,b.begin()+3);  //ɾ���ڶ�������3-1����Ԫ�أ�ǰ����գ� [1,3)

    cout <<"ɾ����Ľ��Ϊ��\n";
    for (int i=0;i<b.size();i++)
    {
        cout << b.at(i) <<" ";   //at���÷��൱��[]���÷�

    }
}