//This program read an number and tell if its Even or Odd
#include <iostream>
using namespace std;
int main(){
	
	int n;
	
	cout<<"Enter a number to check if it is Even or Odd: ";
	cin>>n;
	if(n%2==0)
	/*
	This statement mean if we divid n by 2 and its remainder is equal to zero then n will be even
	Forexample if n=86 and divide it by 2 then reminder will zero as 2 x 43 = 86 */

	/*
	More brief explanation by Chatgpt
	Imagine you have a number, let's say 86. Now, if you divide 86 by 2, you get 43.
	And here's the important part: there's nothing left over.
	It's like sharing 86 candies equally between 2 friends, and each friend gets 43 candies with none left.
    When this happens, we say that 86 is an "even" number.
	That's because even numbers can be divided by 2 without anything being left over.
	So, 86 is even because when you divide it by 2, you get a nice,
	                                      whole number without any fractions or leftovers.
	*/
	
	{
		cout<<n<<" is an Even Number \n";
	}
	else
	{
		cout<<n<<" is an Odd Number \n"<<endl;
	}
	
	system("pause");
	
}
