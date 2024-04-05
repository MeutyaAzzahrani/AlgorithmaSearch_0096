#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // Number of element in the array
int i; // Index of array element

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	// Accept array elements
	cout << "\n---------------------\n";
	cout << " Enter array elements \n";
	cout << "-----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr;
	int item;

	do
	{
		// Accept the number to be searched
		cout << "\nEnter the element you want to search: "; //step 1
		cin >> item;

		ctr = 0;
		i = 0; //steo 2
		while (i < n) //step 3
		{
			ctr++;
			if (arr[i]) == item)
			{
				cout << "\n" << " found at position " << (i + 1) << endl;
				break;
			}
			i++; // step 4
		}
		if (i == n)
			cout << "\n" << item << " not found in the array\n";
			cout << "\nNumber of comparision : " << ctr << endl;
	}
}

