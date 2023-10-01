//This program read an number and tell if its odd or even
#include <iostream>
using namespace std;
int main(){
	
	int n;
	
	cout<<"Enter a number to check if it is Odd or Even: ";
	cin>>n;
	if(n%2!=0)

	/*
    Imagine you have a number, let's say 7. Now, when you divide 7 by 2,
	you get 3 with a remainder of 1. This remainder is what we're looking at with "n % 2."
    When "n % 2 != 0" is true, it means that the remainder is not zero. In this case
	, 1 is not equal to 0, so the statement "n % 2 != 0" is true for the number 7.
    So, if "n % 2 != 0" is true for a number, like it is for 7, we call that number an "odd" number.
	Odd numbers are those that can't be evenly divided by 2, and they always have a remainder when divided by 2.
	*/
	
	{
		cout<<n<<" is an Odd Number \n";
	}
	else
	{
		cout<<n<<" is an Even Number \n"<<endl;
	}
	
	system("pause");
	
}
