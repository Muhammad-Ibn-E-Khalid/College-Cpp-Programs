//This program check if the character is vowel or not
#include<iostream>
using namespace std;
int main(){
	
	char vowel;
	
	cout << "Enter a character to check if it is a vowel or not: ";
    cin >> vowel;
    
	if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u' || vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U'){
		cout<<vowel<<" is vowel";
	}
	
	else
	{
	    cout<<vowel<<" is not vowel";	
	}
	
}
