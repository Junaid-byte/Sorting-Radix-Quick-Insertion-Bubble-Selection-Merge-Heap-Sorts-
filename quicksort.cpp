#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int partition(int *a, int start, int end)
{
	int i = start - 1;
	int pivot = a[end];
	for (int j=start;j < end; j++)
	{
		if (a[j] <= pivot)// agr  element pivot waley array se chota hai toh kuch nhi hoga sirf i increment hojayega
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[end]); 
	return i + 1;
}

void Quicksort(int *a, int start, int end)
{
	if (start >= end)
	{
		return;
	}
	int p = partition(a, start, end);
	Quicksort(a, start, p - 1);
	Quicksort(a, p + 1, end);
} 

int main()
{ 
	int a[] = { 2,1,5,6,7,3,8,4 };
	int n = sizeof(a) / sizeof(int);
	Quicksort(a, 0, n - 1);
	cout << "Sorted Array is:- ";
	for(int i=0;i<n;i++)
	{
		cout << a[i] << " ";
	}
	_getch();
	return 0;

}