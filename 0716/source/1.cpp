#include <iostream> 
using namespace std;

class String
{
    public:
        String()
        {
            pString=nullptr;
            size=0;
            cout << "Constructor with no arg" <<endl;
        }

        String(const char* p)
        {
            size=0;
            while(*p)
            {
                size++;
                p++;
            }
            pString=new char[size];
            if (pString==nullptr)
            {
                cout << "Err in new" << endl;
                exit(0);
            }
            else
            {
                for(int i=0;i<size;i++)
                {
                    pString[i]=*p++;
                }
                cout << "constructor with arg"<<endl;
            }
        }

        ~String()
        {
            delete[] pString;
            cout << "Destructor" <<endl;
        }

        int getsize()
        {
            if  (pString!=nullptr)
            {
                return size*sizeof(char);
            }
        }

        int length(){
            return size;
        }
        /*
        String operator+(const String& str)
        {
            int len;
            len=str.size+this->size;
            char* tmp=new char[len];
            for (int i =0;i<size;i++)
            {
                tmp[i]=pString[i];
            }
            for (int i=0;i<str.size;i++)
            {
                tmp[size+i]=str[i];
            }
        }
        String operator=(const String& str)
        {
            int len=str.size;
            delete[] pString;
            char* pString=new char[len];
            for (int i=0;i<len;i++)
            {
                pString[i]=str[i];
            }
            size=len;
        }
 
         */
        
        
        char& operator[](int val)
        {
            return pString[val];
        }
 

    private:
        char *pString;
        int size;


};


int main()
{
    //String String;
    String mystring="abcdef";
    String mystring1="123";
    cout << mystring[1] << endl;
    cout << mystring.getsize() << endl;
    cout << mystring.length() << endl;
    cout << mystring1[1] << endl;
    cout << mystring1.getsize() << endl;
    cout << mystring1.length() << endl;
    //String= mystring+mystring1;
}