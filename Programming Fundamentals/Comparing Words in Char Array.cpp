#include<iostream>
#include<fstream>
using namespace std;

int length(char arr[])
{
	int size = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}

bool compare(char arr1[], char arr2[])
{
	int size1 = length(arr1);
	int size2 = length(arr2);
	if (size1 == size2)
	{
		for (int i = 0; i < size1; i++)
		{
			if (arr1[i] != arr2[i])
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char arr1[] = "Muneem";
	char arr2[] = "Muneen";

	cout << compare(arr1, arr2);


	system("pause");
	return 0;
}