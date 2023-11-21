#include <iostream>;
#include <string>;
#include <array>;
using namespace std;




// Getting the sales for the days
float func_Net_Gross_Profit(float expences, float costProduct, float price) {

	int sales[5]{0}; // Array with 5 elements each 0

	int dSales; // Daily sales

	float tNProfit = 0;
	float netProfit = 0; // Net Profit

	float tGProfit = 0;
	float grossProfit = 0; // Gross Profit

	int amountOfProduct = 0; // Amount of product made


	costProduct = costProduct / 100;

	price = price / 100;
	// Getting the amount of product made
	amountOfProduct = expences / (costProduct);

	// Adding the sales to the array
	for (int i = 0; i < 5; i++) {
		cout << "How many sales for day " << i+1 << " ";
		cin >> dSales;
		if (dSales > amountOfProduct) {
			cout << "Your sales exeed your product count. Please check your inputs and start again.";
			i = i - 1;
		}
		else if (dSales < 0) {
			cout << "Your sales are in the negative. Please check your inputs and start again. ";
			i = i - 1;
		}
		else {
			sales[i] = dSales;

			// Find the profit
			grossProfit = dSales * (price);
			tGProfit = tGProfit + grossProfit;
			
			// Getting the net profit
			tNProfit = tGProfit - expences;
		}	

		// prints all the sales by days
		cout << endl << "Sales on day " << i + 1 << " :  " << dSales << endl << "Profit: " << dSales * price << endl;
	
	}


	if ((tNProfit) < 0) {
		cout << "You need to raise your prices. ";
	}

	cout << endl << "Your total gross profit : " << tGProfit << endl << "Your total Net profit: " << tNProfit << endl;

	return 0;
}


int main() {
	
	cout << "          <================>" << endl;
	cout << "======================================" << endl;
	cout << "=========== WELCOME TO THE ===========" << endl;
	cout << "=========== LEMONADE STAND ===========" << endl;
	cout << "======================================" << endl;
	cout << "= Enter your Sales for the day below =" << endl;
	cout << "======================================" << endl;
	cout << "          <================>" << endl;


	func_Net_Gross_Profit(64, 35, 40);

	return 0;
}