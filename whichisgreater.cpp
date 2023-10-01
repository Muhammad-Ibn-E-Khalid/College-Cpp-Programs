//This program read 2 number and then tell which one is greater
#include<iostream>
using namespace std;
int main()
{   
    int a,b;
    
    cout<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    
    if(a>b){
    cout<<"A is grater than B"<<endl;
	}
	else{
	cout<<"B is grater A"<<endl;
	}
	
	system("pause");
    
	return 0;
}

















#include<iostream>
using namespace std;
int main()
{   
    int a,b;
    
    cout<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    
    if(a>b){
    cout<<"A is grater than B"<<endl;
	}
	else{
	cout<<"B is grater A"<<endl;
	}
	 
	return 0;
}







#include<iostream>
using namespace std;
int main()
{   
    int a,b,c;
    
    cout<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    cout<<"Enter value of C: ";
    cin>>c;
    
    if(a<b && a<c)
	{
    cout<<"\nA is smallest number"<<endl;
	}
	
	if(b<a && b<c){
	cout<<"\nB is smallest number"<<endl;
	}
	
	if(c<a && c<b)
	{
	cout<<"\nC is smallest number"<<endl;
	}
    
	return 0;
}









#include<iostream>
using namespace std;
int main(){
	
	char vowel;
	
	cout << "Enter a character to check if it is a vowel or not: ";
    cin >> vowel;
    
	if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u' || vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U'){
		cout<<vowel<<" is vowel";
	}

	
}









#include<iostream>
using namespace std;
int main()
{

    int option;
    float op1,op2,op;

    cout<<"1:Sum\n";
    cout<<"2:Subtract\n";
    cout<<"3:Multipliply\n";
    cout<<"4:Divide \n";
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
	
}
