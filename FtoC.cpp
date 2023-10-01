//This program read temperature in fahrenheit and print temperature in celsius
#include<iostream>
using namespace std;
int main()
{
    float celsius,fahrenheit;
  
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>fahrenheit;
    
    celsius = (fahrenheit-32)*5/9;
    cout<<"Temperature in Celsius = "<<celsius<<endl<<endl;
    
    system("pause");
    
	return 0;

}
