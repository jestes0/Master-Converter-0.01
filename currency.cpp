#include <iostream>
using namespace std;

int main()
{

	double total, amount, pennies;
	int quarters, nickels, dimes;
	char ans;
	
	
		cout<<"Enter the amount of money in United States Dollars."<<endl;
		cout<<"That is greater than $0.01 ."<<endl;
		cin>>total;
	
		if (total <0.01)
		{
			do
			{
			
				cout<<"Please enter in a valid USD Amount."<<endl;
				cin>>total;
				
			} while (total <0.01);
			
		}
	
	
	/*This is the math that determines how many quarters, dimes, nickels, and
	pennies the user has from what amount they entered */
	
	amount = total;
	
	quarters = total / .25;
	total = total-(quarters*.25);
	
	dimes = total / .1;
	total = total - (dimes*.1);
	
	nickels = total / .05;
	total = total - (nickels * .05);
	
	pennies=total*100;
	
	cout<<"Your Total amount of money entered was $"<<amount<<endl;
	cout<<"In change, your amount totals to:"<<endl;
	cout<<"Quarters: "<<quarters<<endl;
	cout<<"Dimes: "<<dimes<<endl;
	cout<<"Nickels: "<<nickels<<endl;
	cout<<"Pennies: "<<pennies<<endl;


	return 0;
}