#include <iostream>
#include <vector>
#include <algorithm>  //������õ��㷨���������

using namespace std;

int main()
{
    //����һ��vector���ݽṹ������data
    vector<int> data;
    vector<int> data1(2);

    /* ���� */
    //β������ data.push_back(int m);---��data����������m��
    data.push_back(2);
    data.push_back(4);
    data.push_back(9);
    data.push_back(1);
    //����data�е�����Ϊ2��4��9��1��5

    //����  insert( &p,int m);  p��ָҪ����ĵ�ַ��m��Ҫ���������
    data1[0]=10;
    data1.insert(data1.begin(),20);  //��ͷ������һ��Ԫ��20
    data1.push_back(14);
    data1.insert(data1.begin()+1,17);   //���±�Ϊ1��λ���ϲ���17����0��ʼ��
    //���ڵ�data1�е�����Ϊ20��17��10��0,14

    //����ͷ����һ��Ԫ�صĵ�ַ������
    cout << "data�е�ͷ����һ��Ԫ��Ϊ��"<<*data.begin()<<endl;
    cout << "data�е�ͷ���ڶ���Ԫ��Ϊ��"<<*(data.begin()+1)<<endl;
    //����β�����һ��Ԫ�صĵ�ַ������
    cout << "data�е�β�����һ��Ԫ��Ϊ��"<<*(data.end()-1)<<endl;
    
    //�õ���һ�����������һ������
    cout <<"\ndata1�еĵ�һ������Ϊ��"<<data1.front()<<endl;
    cout <<"data1�е����һ��һ������Ϊ"<<data1.back();


    
    //����
    sort(data.begin(),data.end());  //����
    reverse(data1.begin(),data1.end()); //����  

    //����
    vector<int>::iterator it;  //����һ����������
    cout <<"\ndata1����\n";
    for(it=data1.begin();it!=data1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout <<"\ndata����\n";
    for(int i=0;i<data.size();i++)
    {
        cout << data.at(i) <<" ";
    }



    //�޸�
    data1[2]=100;

    //ɾ��
    //ɾ��һ��
    data.erase(data.begin());  //ɾ����һ��Ԫ�أ�����Ϊ��ַ
    //��С
    cout << "\ndata�е����ݵĸ�����"<<data.size();
    cout << "\ndata1�����ݵĸ�����"<<data1.size();
    //ɾ�����һ��
    data.pop_back();
    //ɾ�����
    data.erase(data.begin(),data.begin()+2); //ɾ��data��[0,2) *ǰ�����*-----
    //ɾ��ȫ��
    data1.clear();

    //��С
    cout << "\ndata�е����ݵĸ�����"<<data.size();
    cout << "\ndata1�����ݵĸ�����"<<data1.size();

}
