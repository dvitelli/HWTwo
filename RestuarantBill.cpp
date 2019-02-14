//============================================================================
// Name        : RestuarantBill.cpp
// Author      : Dominick Vitelli
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	cout << setprecision(2)<< fixed << showpoint;

	double mealCost = 88.67;
	double tax = mealCost * .0675;
	double tip = (mealCost + tax) * .2 ;
	double total = mealCost + tax + tip;


	cout << "Cost of meal: $" << mealCost;
	cout << "\nTax on meal: $" << tax;
	cout << "\nTip on meal: $" << tip;
	cout << "\nThe total due is: $"<< total;

	return 0;
}
