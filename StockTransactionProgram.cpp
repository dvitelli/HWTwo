//============================================================================
// Name        : StockTransactionProgram.cpp
// Author      : Dominick Vitelli
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	cout << setprecision(2)<< fixed << showpoint;

	int firstStock = 1000;
	double firstStockPrice = 45.50;
	double firstStockTotal = firstStock * firstStockPrice;
	double firstBrokerCommission = firstStockTotal * .02;

	int secondStock = 1000;
	double secondStockSellPrice = 56.90;
	double secondStockTotal = secondStock * secondStockSellPrice;
	double secondBrokerCommission = secondStockTotal * .02;

	double profit = (secondStockTotal - secondBrokerCommission) - (firstStockTotal - firstBrokerCommission);

	cout << "Joey bought "<<firstStock <<" at $" <<firstStockPrice<< " for a total of : $" <<firstStockTotal;
	cout << "\nJoey paid $" << firstBrokerCommission << " to his stock broker for commission.";

	cout << "\n\nJoey sold "<<secondStock <<" at $" <<secondStockSellPrice<< " for a total of : $" <<secondStockTotal;
	cout << "\nJoey paid $" << secondBrokerCommission << " to his stock broker for commission.";

	cout << "\n\nJoey made a profit of $"<<profit<<".";


	return 0;
}
