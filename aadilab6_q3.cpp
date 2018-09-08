// MAXIMUM
#include <iostream>
using namespace std;


//finding the sum and then the maximum number by value
int func(int a , int b){
	// it takes the value of c and d directly then finds the sum of two and then finds the maximum among them
	int sum = a + b;
	//this condition finds the max value
	cout<<"the max of the two is ";
	if(a>b){
		cout<<a;
		}
	else{
		cout<<b;}
	cout<<endl;
	cout <<"the sum is (s1) ";
	return sum;
	
	}


//finding the sum and then the maximum value by reference
void funcr(int a ,int b, int &t){
	//here the '&t' is the reference parameter which refer to sum
	//the condition finds the max among the two
	cout<<endl;
	cout<<"the max of the two is ";
	if(a>b){
		cout<<a;
		}
	else{
		cout<<b;}
	cout<<endl;
	cout<<"the sum is (s2)";
	t = a + b;
	
	}

int main (){
	 // declaring the variables
	int c,d;
	//asking the user for two numbers
	cout<<"the two numbers are = ";
	cin>>c>>d;
 	cout << func(c,d);
	int sum;   //'&t' refers to this sum
	funcr(c,d,sum);
 	cout << sum;
	cout <<endl;
	
return 8;
}

















  
