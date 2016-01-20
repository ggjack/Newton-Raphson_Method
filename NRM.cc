#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int findx(string y){
	for(int a=0; a<y.length();a++){
		if(y.substr(a,1)=="x") return 1;
	}
	return 0;
}
int findc(string y){
        for(int a=0; a<y.length();a++){
                 if(y.substr(a,1)=="^") return 1;
         }
         return 0;
}
int main(int argc, char* argv[]){
	double x0,f,fp;
	int decimal,iter;
	string terms;
	vector<string> function;
	vector<double> hold;
	vector<vector<double> > values;
	cout << "Please enter a value for x0, to approximate the root: " ;
	cin >> x0;
	cout << endl << "Now please enter the number of digits you want to be shown: ";
	cin >> decimal;
	cout << endl << "Now please enter a function, with each term separated wtih a space:" << endl;
	while(cin >> terms){
		function.push_back(terms);
	}
	for(int i=0;i<terms.size();i++){
		if(findx(temrms.at(i))){
			if(terms.at(i).substr(0,1)=="x"){
				hold.push_back(1);
			}
			else{
				hold.push_back(stod(terms.at(i).substr(0,terms.at(i).find("x"))));
			}
			if(findc(terms.at(i)){
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
	cout << "x0 = " << x0 << endl;
	for(int k=1;k<=iter;k++){
		f=0;
		fp=0;
		for(int j=0;j<values.size();j++){
			f+=(values.at(j).at(0)*pow(x0,values.at(j).at(1)));
			if(values.at(j).at(1)!=0.0)fp+=(values.at(j).at(0)*values.at(j).at(1)*pow(x0,values.at(j).at(1)-1));
		}
		x0=x0-f/fp;
		cout << "x" << k << " = "; 
		cout << setprecision(decimal)  <<  x0 << endl; 
	}
}
