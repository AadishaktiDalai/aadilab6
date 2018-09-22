//tax rate calculation using function

#include <iostream>
using namespace std;
	//function to accept all the values of 
		int accept(int &ucst , int &unt ,int &txrt)
		{
			cout<<"enter the unit cost : "<<endl;		//asking the user the cost of one unit
			cin>>ucst;
			cout<<"enter the number of units : "<<endl;		//asking the number of units
			cin>>unt;
			cout<<"enter the tax rate : "<<endl;				//asking the user the tax rate
			cin>>txrt;
		}

	//function to calculate the sales tax and the total due
		int calculate(int ucst , int unt , int txrt , int &stx , int &td)
		{
			stx=unt*ucst*txrt;
			td=stx+(unt*ucst);
		}


	//print all the values
		int print(int ucst , int unt , int txrt , int stx , int td)
		{
			cout<<"cost per unit = "<<ucst<<endl;
			cout<<"number of units = "<<unt<<endl;
			cout<<"the tax rate = "<<txrt<<endl;
			cout<<"sales tax = "<<stx<<endl;
			cout<<"total due = "<<td<<endl;
		}
	//the main function
		int main()
		{
			int ucst , unt , txrt , stx , td;
			accept(ucst,unt ,txrt);	
			calculate(ucst,unt,txrt,stx,td);
			print(ucst,unt,txrt,stx,td);
		
		return 8;
		}

