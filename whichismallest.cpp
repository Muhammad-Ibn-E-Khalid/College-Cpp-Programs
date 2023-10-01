//This program read 3 number and then tell which one is smallest
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
	
	if(a==b && b==c && a==c)
	{
		cout<<"\nAll number are same"<<endl;
	}
	cout<<endl;
	system("pause");
    
	return 0;
}
