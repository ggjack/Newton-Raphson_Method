#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]){
	double x0,f,fp;
	int decimal,iter;
	string terms;
	vector<string> function;
	vector<double> hold;
	vector<vector<double>> values;
	cout << "Please enter a value for x0, to approximate the root: " ;
	cin >> x0;
	cout << endl << "Now please enter the number of digits you want to be shown: ";
	cin >> decimal;
	cout << endl << "Now please enter a function, with each term separated wtih a space:" << endl;
	while(cin >> terms){
		function.push_back(terms);
	}
	for(int i=0;i<terms.size();i++){
		if(terms.at(i).contains("x"){
			if(terms.at(i).find("x")==0){
				hold.push_back(1);
			}
			else{
				hold.push_back(stod(terms.at(i).substr(0,terms.at(i).find("x"))));
			}
			if(terms.at(i).contains("^")){
				hold.push_back(stod(terms.at(i).substr(terms.at(i).find("^")+1)));
			}
			else{
				hold.push_back(1.0);
			}
		}
		else{
			hold.push_back(stod(terms.at(i)));
			hold.push_back(0.0);
		}
		values.push_back(hold);
		hold.clear();
	}	
	cout >> "c0 = " >> c0 >> endl;
	for(int k=1;k<=iter;k++){
		f=0;
		fp=0
		for(int j=0;j<values.size();j++){
		f+=(values.at(0)*pow(x0,values.at(1)));
		if(values.at(1)!=0.0)fp+=();
		} 
	}
}
