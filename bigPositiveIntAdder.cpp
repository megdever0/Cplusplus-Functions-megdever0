//Megan Devereux

#include <iostream>
using namespace std;

string total = "";
int lenDif;
int aDigit;
int bDigit;
int abSum;
int carryOver = 0;

string add(string a, string b){
	if(a.length() > b.length()){
		lenDif = a.length() - b.length();
		for(int i = 0; i < lenDif; i++){
			b = "0" + b;
		}
	}
	else if(b.length() > a.length()){
		lenDif = b.length() - a.length();
		for(int i = 0; i < lenDif; i++){
			a = "0" + a;
		}
	}
	
	for(int i = a.length()-1; i >= 0; i--){
		aDigit = a[i] - '0';	
		bDigit = b[i] - '0';
		abSum = aDigit + bDigit;
		
		if(carryOver == 1){
			abSum += 1;
		}
		
		if(abSum < 10){
			total = to_string(abSum) + total;
			carryOver = 0;
		}
		else{
			abSum = abSum % 10; //last digit
			total = to_string(abSum) + total;
			
			carryOver = 1;
		}
	}
	
	if(carryOver == 1){
		total = '1' + total;
		carryOver = 0;
	}
	
	return total;
}

int main(){
	cout << "****************************" << endl;
	cout << "BIG POSITIVE INTEGER ADDER" << endl;
	cout << "****************************" << endl;
	
	bool megDev = true;
	
	while(megDev){
		string a;
		string b;
	
		cout << "First Big Integer: ";
		cin >> a;
		
		if(a == "done" || a == "DONE" || a == "Done"){
			megDev = false;
			cout << "Terminating Program...";
			break;
		}
		
		cout << "Second Big Integer: ";
		cin >> b;
		cout << " " << endl;
		string answer = add(a,b);
		cout << a << " + " << b << " = " << answer << endl << endl;
		total = "";
		
	}
}


