#include <iostream>
using namespace std;
//函数模板 -->模板函数-->编译
template <typename T>
void mySort(T arr[], int len)
{
	int i, j, k;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				k = arr[j];
				arr[j ] = arr[j+1];
				arr[j + 1] = k;

			}
		}
	}
}

template <typename T>
void myprint(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "\t" ;
	}
	cout << endl;
}


int maint()
{
	int arr[] = { 1, 9, 2, 8, 3, 7, 4, 6, 5, 0 };
	char str[] = "zxcvbnmasdfghjkqwertyui";
	int len = sizeof(arr) / sizeof(int);
	int slen = sizeof(str)-1;
	//mySort(arr, len);
	//myprint(arr, len);
	//mySort<int>(arr, len);
	//myprint<int>(arr, len);

	mySort<char>(str, slen);
	myprint<char>(str, slen);
	  
	return 0;
}