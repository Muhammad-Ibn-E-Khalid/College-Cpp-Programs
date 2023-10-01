//This program perform 4 basic operation by interacting menu
#include<iostream>
using namespace std;
int main()
{

    int option;
    float op1,op2,op;

    cout<<"1: Sum \t\t 2: Subtract \n";
    cout<<"3: Multipliply \t 4: Divide \n";
    cout<<"Choosse Operation: ";
    cin>>option;
    
    if(option == 1)
	{
    	cout<<"Enter first number: ";
    	cin>>op1;
    	cout<<"Enter second number: ";
    	cin>>op2;
    	op = op1+op2;
    	cout<<"Sum of two number = "<<op;
	}
	
	else if(option == 2)
	{
    	cout<<"Enter first number: ";
    	cin>>op1;
    	cout<<"Enter second number: ";
    	cin>>op2;
    	op = op1-op2;
    	cout<<"Subtract of two number = "<<op;
	}
	
	else if(option == 3)
	{
     	cout<<"Enter first number: ";
    	cin>>op1;
    	cout<<"Enter second number: ";
    	cin>>op2;
    	op = op1*op2;
    	cout<<"Multiplcation of two number = "<<op;
	}
	
	else if(option == 4)
	{
		cout<<"Enter first number: ";
    	cin>>op1;
    	cout<<"Enter second number: ";
    	cin>>op2;
    	op = op1/op2;
    	cout<<"Divide of two number = "<<op;
	}
	
	else
	{
		cout<<"You Enter Invalid option\n";
		system("pause");
		system("cls");
		main();
	}
	system("pause");
}
