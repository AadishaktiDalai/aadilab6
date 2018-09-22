//asking the user to enter two variables and the operation to perform and perform accordingly

#include <iostream>
using namespace std;

	//defining different functions
	
	int sum(int a, int b )
	{
		int sum = a + b ;
		return sum;
	}

	int max(int a,int b)
	{
		if (a>b){
			int maximum = a;
			return maximum; 
			}
		else{
			int maximum = b;
			return maximum; 
			}
	}
	
	int min(int a , int b)
	{
		if (a<b){
			int minimum = a;
			return minimum;
				}
		else{ 
			int minimum = b;
			return minimum;			
			}
	}

//based on the input of the user calling the required function and displaying the output
		
	int main (){
			int a , b , c ,options;
                    cout<<" enter the first number = "<<endl;
					cin>>a;
					cout<<" enter the second number = "<<endl;
					cin>>b;
					cout<<" Enter the number of the operation want to perform"<<endl;				
					cout<<" 1.sum the 2 numbers "<<endl;
					cout<<" 2.maximum of the two "<<endl;
					cout<<" 3.minimum of the two "<<endl;
					cin>>options;
			if(options==1){int a , b , c , options;
					c = sum(a,b);
					cout<<"The sum of the two number is "<<c<<endl;
					}
			else if (options==2){int a , b , c , options;
					c = max(a,b);
					cout<<"The maximum of the two number is "<<c<<endl;
					}
			else if(options==3){int a , b , c , options;
					c= min(a,b);
					cout<<"The minimum of the two number is "<<c<<endl;}
			else{
					cout<<" Invalid !!!"<<endl;
				}						
	return 7;
	}
































	

