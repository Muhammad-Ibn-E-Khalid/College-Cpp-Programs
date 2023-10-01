//This program read four integer and print sum,product and averegae of them
#include<iostream>
using namespace std;
int main(){
	
	int sum , product , average , a1 , b2 , c3 , d4;
	
	cout<<"Enter Value of First Integer: ";
	cin>>a1;
	cout<<"Enter Value of Second Integer: ";
	cin>>b2;
	cout<<"Enter Value of Third Integer:";
	cin>>c3;
	cout<<"Enter Value of Fourth Integer: ";
	cin>>d4;	
	sum = a1 + b2 + c3 + d4;
	cout<<"Sum of four Integer = "<<sum<<endl;	
	product = a1 * b2 * c3 * d4;
	cout<<"Product of four Integer = "<<product<<endl;
	average = (a1 * b2 * c3 * d4)/2;
    cout<<"Average of four Integer = "<<average<<endl<<endl;

    system("pause");

}
