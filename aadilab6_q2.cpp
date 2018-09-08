// SUM
#include <iostream>
using namespace std;


//sum by value
int func(int a ,int b){
	// it takes the value of c and d directly and finds the sum
	int sum = a + b;
	return sum;
	cout <<endl;
}


//sum by reference
void funcR(int a ,int b, int &t){
	//here the '&t' is the reference parameter which refer to sum
	t = a + b;
	cout<<endl;
}


int main (){
	 // declaring the variables
	int c,d;
	//asking the user for two numbers
	cout<<"the two numbers are = ";
	cin>>c>>d;
 cout << func(c,d);
	int sum;   //'&t' refers to this sum
	funcR(c,d,sum);
 cout << sum;
return 9;

}





