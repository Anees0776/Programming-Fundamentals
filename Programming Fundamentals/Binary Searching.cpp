#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	ifstream fin; bool find = false;
	fin.open("Names.txt");
	if (fin)
	{
		char arr[50];
		char arr2[50];
		cout << "Enter the Name you want to Search:";
		cin >> arr;
		
		while (fin >> arr2)
		{
			for (int i = 0; arr2[i] != '.'; i++)
			{
				if (arr[i] != arr2[i])
				{
					find = false;
					break;
				}
				else
				{
					find = true;
				}
			}
		}
	}
	else
	{
		cout << "File Can't be Opened....." << endl;
	}
	if (find == true)
	{
		cout << "Name is Mentioned in File" << endl;
	}
	else
	{
		cout << "Name is not Mentioned in File" << endl;
	}


	system("pause");
	return 0;
}