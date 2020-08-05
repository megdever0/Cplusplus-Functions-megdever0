//Megan Devereux

#include <iostream>
#include <string>
using namespace std;
int main(){
	int height;
	
	cout << "Height of Star Shapes: ";
	cin >> height;
	cout << endl;
	
	//triangle
	string aStars = "*";
	string aSpaces = "";
	cout << "Triangle" << endl << endl;
	for(int i = 1; i < height; i++){
		aSpaces += " ";
	}
	for(int i = 0; i < height; i++){
		
		cout << aSpaces << aStars << endl;
		aStars = "*" + aStars + "*";
		aSpaces = aSpaces.substr(0,aSpaces.length()-1);
		
	}
	//right triangle
	string bStars = "*";
	cout << "Right Triangle" << endl << endl;
	for(int i = 0; i < height; i++){
		cout << bStars<<endl;
		bStars += "*";
	}
	
	cout << endl;
	
	
	cout << "Right Triangle" << endl << endl;
	for(int )
	cout << endl;	
	
	//Reflected Right Triangle
	string cStars = "*";
	string cSpaces = "";
	int middle = 1;
	cout << "Reflected Right Triangle" << endl << endl;
	
	for(int i = 1; i < height; i++){
		cSpaces += " ";
	}
	
	for(int i = 0; i < 2; i++){
		if(middle > height){
			for(int j = 0; j < height; j++){
				cStars  = cStars.substr(0,cStars.length()-1);
				cSpaces = " " + cSpaces;
				cout << cSpaces << cStars << endl;
			}
		}
		else{
			for(int k = 0; k < height; k++){
				cout << cSpaces << cStars << endl;
				cStars += "*";
				cSpaces = cSpaces.substr(0,cSpaces.length()-1);
				middle++;	
			}
			cStars = cStars.substr(0,cStars.length()-1);			
		}		
	}
	
	cout << endl;
	
	//double rectangle
	string rowOne = "";
	string rowTwo = "";
	cout << "Double Rectangle" << endl;
	
	for(int i = 0; i < height; i++){
		rowOne += "* ";
	}
	
	for(int j = 0; j < height; j++){
		rowTwo += " *";
	}
	
	rowTwo = rowTwo.substr(0,rowTwo.length()-1);
	
	for(int k = 0; k < height/2 ; k++){
		cout << rowOne << endl << rowTwo << endl;
	}
	cout << rowOne;
	
}
	
