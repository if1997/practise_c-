#include <iostream>
#include <vector>
#include <algorithm>  //�������㷨

using namespace std;

int main()
{
    vector<int> b(5);   //����һ����СΪ5��vector����
    b[0]=14;
    b[1]=12;b[2]=16;b[3]=44;
    b.push_back(99);  //��b������棬����һ���ռ䣬�����ֵ1
    b.push_back(11);
     
    cout <<"���ֵΪ:"<<*max_element(b.begin(),b.end())<<endl;
    cout<<"���ֵ�±�Ϊ:"<<max_element(b.begin(),b.end())-b.begin()<<endl;

    cout <<"��СֵΪ:"<<*min_element(b.begin(),b.end())<<endl;
    cout<<"��Сֵ�±�Ϊ:"<<min_element(b.begin(),b.end())-b.begin()<<endl;
}