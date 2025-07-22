#include<iostream>
#include<fstream>
using namespace std;

void inputdata(int arr[], const int size);
void output(int array[], int size1);
void bubblesorting(int array[], int size);
void swapping(int& a, int &b);
void inputfromfile(int array[], int size, ifstream& fin);
bool fileopener(char filename[], ifstream& fin);
bool fileopener2(char filename[], ofstream& fout);
void outputtofile(char filename[], int  array[],int size,ofstream & fout);
void outputtofile2(int  array[], int size, ofstream & fout);
void outputtofile3(int  array[], int size);
int main()
{
	const int size = 7;
	int array[size];
	ifstream fin;
	//ofstream fout;
	if (fileopener("input.txt",fin))
	{
		inputdata(array, size);
	//	inputfromfile(array, size, fin);
		fin.close();
		cout << "Before swapping" << endl;
		output(array, size);
		bubblesorting(array, size);
		cout << "After swapping" << endl;
		output(array, size);
		//outputtofile("out.txt", array, size, fout);
		//outputtofile2(array, size, fout);
		outputtofile3(array, size);
		//fout.close();
	}
	else
	{
		cout << "failed to load file " << endl;
	}
	
	
	
	return 0;
}
void inputdata(int arr[],  const int size)
{
	
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void output(int array[], int size1)
{
	for (int j = 0; j < size1; j++)
	{
		cout << array[j] << " ";
	}
	cout << endl;
}
void bubblesorting(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (array[j]>array[j + 1])
				swapping(array[j], array[j + 1]);
		}
	}
}
void swapping(int& a, int &b)
{
	int temp = b;
	b = a;
	a = temp;
}
void inputfromfile(int array[], int size, ifstream& fin)
{
	for (int i = 0; i < size; i++)
	{
		fin >> array[i];
	}
}
bool fileopener(char filename[],ifstream& fin)
{
	fin.open(filename);
	if (!fin)
		return false;
	else
		return true;
}
void outputtofile(char filename[], int  array[], int size, ofstream & fout)
{
	if (fileopener2(filename, fout))
	{
		for (int i = 0; i < 7; i++)
		{
			fout << array[i] << endl;
		}
	}
	
}
bool fileopener2(char filename[], ofstream& fout)
{
	fout.open(filename);
	if (!fout)
		return false;
	else
		return true;
}
void outputtofile2(int  array[], int size, ofstream & fout)
{
	if (fileopener2("out.txt", fout))
	{
		for (int i = 0; i < 7; i++)
		{
			fout << array[i] << endl;
		}
	}
}
void outputtofile3(int  array[], int size)
{
	ofstream fout;
	if (fileopener2("out.txt", fout))
	{
		for (int i = 0; i < 7; i++)
		{
			fout << array[i] << endl;
		}
	}
	fout.close();
	
}