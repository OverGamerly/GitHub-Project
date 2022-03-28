#include <iostream>

using namespace std;

int main()
{
	int* firstNumb = new int;
	int* secondNumb = new int;

	cout << "Enter firts numb: ";
	cin >> *firstNumb;

	cout << "Enter second numb: ";
	cin >> *secondNumb;

	cout << "Max numb: " << (*firstNumb > *secondNumb ? *firstNumb : *secondNumb);
	
	delete firstNumb;
	delete secondNumb;

	return 0;
}
