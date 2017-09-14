// Vending Change Machine.cpp : Defines the entry point for the console application.
//This program is designed to be a vending machine that ask for the cost of the item and displays the change when funds are met.  

#include "stdafx.h"
#include <iostream>
using namespace std;

// Formuala used for change
void change(int change) {
	int dollar = change / 100;
	change %= 100;
	int quarter = change / 25;
	change %= 25;
	int dime = change / 10;
	change %= 10;
	int nickel = change / 5;
	change %= 5;
}


int main()
{
	//Varibles needed
	float itemCost;
	float amountPaid;
	float fundsAdded;
	int change;

	int changeRemaining;

	int changeinDollars = 0;
	int changeinQuarters;
	int changeinDimes;
	int changeinNickels;
	//Starting the program
	while (true)
	{
	    cout << "Welcome to the vending machine program. \nThis program will ask you to input the cost of the item and will display the change that was left. \nPlease enter the cost the item. \nPress 0 to exit. " << endl;
		cout << "$ ";
		cin >> itemCost;
		if (itemCost == 0)
			break;

			cout << "Please enter the amount paid for the item: " << endl;
		    cout << "$ ";
		    cin >> amountPaid;

		while (amountPaid < itemCost)
		{
			cout << "You do not have enough sufficient funds" << endl;
			cout << "Please add more money to the machine. Type the amount you wish to add. " << endl;
			cout << " $ ";
			cin >> fundsAdded;
			amountPaid = amountPaid + fundsAdded;
		}

		cout << "Thank you for your purchase. You have paid $ " << amountPaid << endl;
		
		if (amountPaid == itemCost)
			cout << "No Change" << endl;

		else if (amountPaid > itemCost)
		{
			change = amountPaid - itemCost;
			cout << "Your change is $ " << change << endl;
			    changeRemaining = (change - changeinDollars) * 100;
				changeinDollars = changeRemaining / 100;
				changeinQuarters = changeRemaining / 25;
			    changeinDimes = changeRemaining / 10;
			    changeinNickels = changeRemaining / 5;

			cout << "This is how your change was disperse: " << endl;
			cout << "Dollar(s): " << changeinDollars << endl;
			cout << "Quarter(s): " << changeinQuarters << endl;
		    cout << "Dime(s): " << changeinDimes << endl;
			cout << "Nickel(s):" << changeinNickels << endl;
		}
	}
    return 0;
}

