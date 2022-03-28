#include <iostream>

using namespace std;

int main()
{
	int* numbArray = new int[4];
	int* maxNumb = new int;

	*maxNumb = 0;

	for (int i = 0; i < 4; i++)
	{
		cout << "Enter your " << i << " number: ";
		cin >> numbArray[i];
	}

	for (int i = 0; i < 4; i++)
	{
		if (numbArray[i] > *maxNumb)
		{
			*maxNumb = numbArray[i];
		}
	}
	
	
	cout << "Max numb: " << *maxNumb;
	
	delete[] numbArray;
	delete maxNumb;

	return 0;
}
