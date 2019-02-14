//============================================================================
// Name        : PatternDisplay.cpp
// Author      : Dominick Vitelli
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Pattern A\n";

	for(int i = 0; i < 10; i++){

			if(i == 0){

				cout<<"\n+";
			} if(i == 1){

				cout<<"\n++";
			} if(i == 2){

				cout<<"\n+++";
			} if(i == 3){

				cout<<"\n++++";
			} if(i == 4){

				cout<<"\n+++++";
			} if(i == 5){

				cout<<"\n++++++";
			} if(i == 6){

				cout<<"\n+++++++";
			} if(i == 7){

				cout<<"\n++++++++";
			} if(i == 8){

				cout<<"\n+++++++++";
			} if(i == 9){

				cout<<"\n++++++++++";
			}
	}

	cout<< "\n\nPattern B\n";

	for(int i = 0; i < 10; i++){

				if(i == 0){

					cout<<"\n++++++++++";
				} if(i == 1){

					cout<<"\n+++++++++";
				} if(i == 2){

					cout<<"\n++++++++";
				} if(i == 3){

					cout<<"\n+++++++";
				} if(i == 4){

					cout<<"\n++++++";
				} if(i == 5){

					cout<<"\n+++++";
				} if(i == 6){

					cout<<"\n++++";
				} if(i == 7){

					cout<<"\n+++";
				} if(i == 8){

					cout<<"\n++";
				} if(i == 9){

					cout<<"\n+";
				}
		}



	return 0;
}
