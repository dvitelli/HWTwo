//============================================================================
// Name        : OceanLevels.cpp
// Author      : Dominick Vitelli
//============================================================================

#include <iostream>
using namespace std;

int main() {

	double oceanLevelRisingAmount = 1.5;
	double oceanLevelFiveYears = oceanLevelRisingAmount * 5;
	double oceanLevelSevenYears = oceanLevelRisingAmount * 7;
	double oceanLevelTenYears = oceanLevelRisingAmount * 10;

	cout<< "In 5 years the ocean level will be "<< oceanLevelFiveYears << " mm higher.";
	cout<< "\nIn 5 years the ocean level will be "<< oceanLevelSevenYears << " mm higher.";
	cout<< "\nIn 5 years the ocean level will be "<< oceanLevelTenYears << " mm higher.";

	return 0;
}
