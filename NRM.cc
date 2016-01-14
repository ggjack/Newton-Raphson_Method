#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]){
	double x0;
	int decimal;
	string terms;
	vector<string> function;
	vector
	cout << "Please enter a value for x0, to approximate the root: " ;
	cin >> x0;
	cout << endl << "Now please enter the number of digits you want to be shown: ";
	cin >> decimal;
	cout << endl << "Now please enter a function, with each term separated wtih a space:" << endl;
	while(cin >> terms){
		function.push_back(terms);
	}
	
}
