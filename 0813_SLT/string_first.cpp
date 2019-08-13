#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;//默认初始化
    string s1="qqqqq";  //拷贝初始化
    string s2("wwww");//s2字面值，是“wwww”的副本
    string s3(s1);//是s1的副本
    string s4=s1;//是s1的副本
    string s5(10,'c');//s5是10个c填充

    //string s(cp,n)
    char cs[]="12345";
    string s7(cs,3);//复制字符串cs的前3个字符到s当中

    //string s(s2,pos2)
    string s8="asac";
    string s9(s8,2);//从s2的第二个字符开始拷贝，不能超过s2的size

    //string s(s2,pos2,len2)
    string s10="qweqweqweq";
    string s11(s10,3,4);//s4是s3从下标3开始4个字符的拷贝，超过s3.size出现未定义
    
    cout <<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<endl;
    cout <<s7<<" "<<s9<<" " <<s11<<endl;
    return 0;
}