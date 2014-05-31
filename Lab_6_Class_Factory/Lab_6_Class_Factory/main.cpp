#include "Factory.h"
#include <vector>
#include <list>

int main()
{
	list<Class_A*> List;
	int repeat = 0;
	Class_A* elemet = nullptr;
	Factory fact;

	cout<<"Enter 1 to create Class B object"<<endl;
	cout<<"Enter 2 to create Class C object"<<endl;
	cout<<"Enter 3 to create Class D object"<<endl;
	cout<<"Enter 0 to print list"<<endl;

	do 
	{
	cin>>repeat;
	elemet = fact.Create(repeat);
	if (elemet)
		List.push_back(elemet);
	} 
	while (repeat != 0);

	
	while (  !List.empty()  )
	{
		elemet = List.front();
		elemet->Show();
		delete elemet;
		List.pop_front();
		elemet = nullptr;
	}
	

	system("pause");
	return 0;
}