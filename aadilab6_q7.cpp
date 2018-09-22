//uppercase and lowercase
#include<iostream>
using namespace std;

//write a user defined function toUpper() that returns the uppercase of the input

	char toUpper(char a){
		char b;
		if(a>93){b=a-32;};
		return b;}
//write a user defined function toLower() that returns the lowercase of the input
	char toLower(char a){
		char b;
		if(a<93){b=a+32;};
		return b;}
//the main function

int main(){
	char x,ch,ch1;
		cout<<"Type the alphabetical character : ";
		cin>>x;
		ch = toUpper(x);
		ch1 = toLower(x);
	if ( x > 93 ){
		cout<<"The alphabet is in lower case , the upper case is "<<ch<<endl;}
	else{
		cout<<"The character is in uppercase , the lower case is "<<ch1<<endl;}
return 6;
}
