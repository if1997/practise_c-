#include <iostream>
#include <vector>
#include <algorithm>  //许多有用的算法在这个里面

using namespace std;

int main()
{
    //定义一个vector数据结构的数据data
    vector<int> data;
    vector<int> data1(2);

    /* 插入 */
    //尾部插入 data.push_back(int m);---在data的最后面插入m；
    data.push_back(2);
    data.push_back(4);
    data.push_back(9);
    data.push_back(1);
    //现在data中的数据为2，4，9，1，5

    //插入  insert( &p,int m);  p是指要插入的地址，m是要插入的数据
    data1[0]=10;
    data1.insert(data1.begin(),20);  //在头部插入一个元素20
    data1.push_back(14);
    data1.insert(data1.begin()+1,17);   //在下标为1的位置上插入17（从0开始）
    //现在的data1中的数据为20，17，10，0,14

    //返回头部第一个元素的地址及数据
    cout << "data中的头部第一个元素为："<<*data.begin()<<endl;
    cout << "data中的头部第二个元素为："<<*(data.begin()+1)<<endl;
    //返回尾部最后一个元素的地址及数据
    cout << "data中的尾部最后一个元素为："<<*(data.end()-1)<<endl;
    
    //得到第一个数据与最后一个数据
    cout <<"\ndata1中的第一个数据为："<<data1.front()<<endl;
    cout <<"data1中的最后一个一个数据为"<<data1.back();


    
    //排序
    sort(data.begin(),data.end());  //升序
    reverse(data1.begin(),data1.end()); //倒置  

    //遍历
    vector<int>::iterator it;  //定义一个遍历容器
    cout <<"\ndata1导致\n";
    for(it=data1.begin();it!=data1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout <<"\ndata遍历\n";
    for(int i=0;i<data.size();i++)
    {
        cout << data.at(i) <<" ";
    }



    //修改
    data1[2]=100;

    //删除
    //删除一个
    data.erase(data.begin());  //删除第一个元素，参数为地址
    //大小
    cout << "\ndata中的数据的个数："<<data.size();
    cout << "\ndata1中数据的个数："<<data1.size();
    //删除最后一个
    data.pop_back();
    //删除多个
    data.erase(data.begin(),data.begin()+2); //删除data中[0,2) *前开后闭*-----
    //删除全部
    data1.clear();

    //大小
    cout << "\ndata中的数据的个数："<<data.size();
    cout << "\ndata1中数据的个数："<<data1.size();

}
