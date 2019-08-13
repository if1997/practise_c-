#include <iostream>
#include <vector>
#include <algorithm>  //基本的算法

using namespace std;

int main()
{
    vector<int> b(5);   //定义一个大小为5的vector容器
    b.push_back(1);  //在b的最后面，开辟一个空间，并填充值1
    b.push_back(11);
    b.insert(b.begin()+3,4,99);//在第三个元素后面添加4个数据99


    vector<int>::iterator it;  //定义一个vector迭代器
    cout << "b中的元素为：\n";
    for (it=b.begin();it!=b.end();it++)
    {
        cout <<*it<<" ";
    }
    cout <<endl;

    b.erase(b.begin());  //删除第一个元素
    b.pop_back();  //删除最后一个元素
    b.erase(b.begin()+1,b.begin()+3);  //删除第二个到第3-1个的元素（前开后闭） [1,3)

    cout <<"删除后的结果为：\n";
    for (int i=0;i<b.size();i++)
    {
        cout << b.at(i) <<" ";   //at的用法相当于[]的用法

    }
}