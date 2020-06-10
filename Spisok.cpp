#include "Spisok.h"

int main()
{
	List<int> lst;
	int numberCount;
	numberCount = 10;

	for (int i = 0; i < numberCount; i++)
	{
		lst.insertLast(rand() % 10);
	}

	cout << "List of 10 random elements:" << endl;
	lst.print();
	cout << endl << "We delete last element" << endl;
	lst.deleteLast();
	cout << "New list:" << endl;
	lst.print();
	cout << "We delete first element" << endl;
	lst.deleteFirst();
	cout << "New list:" << endl;
	lst.print();
	cout << "We delete 3 element" << endl;
	lst.deleteAtPos(3);
	cout << "New list:" << endl;
	lst.print();
	cout << "We add 15 at firs position" << endl;
	lst.insertFirst(15);
	cout << "New list:" << endl;
	lst.print();
	cout << "We add 123 at last" << endl;
	lst.insertLast(123);
	cout << "New list:" << endl;
	lst.print();
	int n = lst.getFirst();
	cout << "\nFirst element: " << n;
	n = lst.getLast();
	cout << "\nLast element: " << n;
	return 0;
}
