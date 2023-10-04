//This program perform 4 basic operation by interacting menu
#include<iostream>
using namespace std;
int main()
{

    int option;
    float op1,op2,op;
    int n;
	cin>>n;    
    cout<<"Enter first number: ";
    cin>>op1;
    cout<<"Enter second number: ";
    cin>>op2;
    cout<<"Muhammad Bin Khalid";
    cout<<"1: Sum \t\t 2: Subtraction \n";
    cout<<"3: Multipliply \t 4: Divide \n";
    cout<<"5: Reminder 6:Exit\n";
    cout<<"Choosse Operation: ";
    cin>>option;
      
	if(n==1){

    if(option == 1)
	{
    	op = op1+op2;
    	cout<<"Sum of two number = "<<op;
	}
	
	else if(option == 2)
	{
    	op = op1-op2;
    	cout<<"Subtract of two number = "<<op;
	}
	
	else if(option == 3)
	{
    	op = op1*op2;
    	cout<<"Multiplcation of two number = "<<op;
	}
	
	else if(option == 4)
	{
    	op = op1/op2;
    	cout<<"Divide of two number = "<<op;
	}
	
	else if(option == 5)
	{
    	cin>>op2;
    //	op = op1 % op2;
    	cout<<"Divide of two number = "<<op;
	}
	
	else if(option == 6)
	{
		cout<<"";
		return 0;
	}
	
	else
	{
		cout<<"You Enter Invalid option\n";
		system("pause");
		system("cls");
		main();
	}
	
	
}
	
	
	
	
	
	
	else if(n==2)
	{
	
	switch(option)
    {
    case 1:
    	
        op = op1+op2;
        cout<<"Sum of two number = "<<op;
    break;
    
	case 2:
    
	    op = op1-op2;
        cout<<"Sum of two number = "<<op;
    break;
    
    case 3:

        op = op1*op2;
        cout<<"Sum of two number = "<<op;
    break;

    case 4:

        op = op1/op2;
        cout<<"Sum of two number = "<<op;
    break;

    Defualt: 
    cout<<"Invalid Option \n";
    }
}
	
	system("pause");
    system("cls");
    main();

}
