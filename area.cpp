//Program that read length , breadth and print area
#include<iostream>
using namespace std;
int main()
{
	
	float area,length,breadth;
	
    cout << "Enter value of length of rectangle: ";
	cin>>length;
	cout << "Enter value of length of breadth: ";
	cin>>breadth;
    area = length*breadth;
    cout << "The area of the rectangle with a length of " << length <<
	 " and a breadth of " << breadth << " = " << area <<endl<< endl;

    system("pause");

	return 0;
}
