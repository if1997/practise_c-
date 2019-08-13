#include <iostream>
#include <vector>
#include <algorithm>  //基本的算法

using namespace std;

int main()
{
    vector<int> b(5);   //定义一个大小为5的vector容器
    b[0]=14;
    b[1]=12;b[2]=16;b[3]=44;
    b.push_back(99);  //在b的最后面，开辟一个空间，并填充值1
    b.push_back(11);
     
    cout <<"最大值为:"<<*max_element(b.begin(),b.end())<<endl;
    cout<<"最大值下表为:"<<max_element(b.begin(),b.end())-b.begin()<<endl;

    cout <<"最小值为:"<<*min_element(b.begin(),b.end())<<endl;
    cout<<"最小值下表为:"<<min_element(b.begin(),b.end())-b.begin()<<endl;
}