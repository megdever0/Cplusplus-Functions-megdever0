//Megan Devereux

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	int height;
	
	cout << "Height of Star Shapes: ";
	cin >> height;
	cout << endl;
	
	//triangle  
	//   *
	//  ***
    // *****
	//*******
	string aStars = "*";
	string aSpaces = "";
	cout << "Triangle" << endl << endl;
	
	int counter = height;
	for(int i = 0; i < height; i++){
		
		for(int i = 0; i < counter; i++){
		aSpaces += " ";
		}	
		cout << aSpaces << aStars << endl;
		aStars = aStars + "**";
		aSpaces = "";
		counter--;	
	}
	
	
	//right triangle
	// *
	// **
	// ***
	// ****
	
	string bStars = "*";
	cout << "Right Triangle" << endl << endl;
	for(int i = 0; i < height; i++){
		cout << bStars<<endl;
		bStars += "*";
	}
	cout << endl;
		
	
	//Reflected Right Triangle
	//   *
	//  **
	// ***
	//****
	// ***
	//  **
	//   *
	
	cout << "Reflected Right Triangle" << endl << endl;
	string stars = "*";
	string spaces = "";
	int line = 1 ;
	int spaceCount;
	int starCount;

	for(int i = 0; i < height*2; i++){
		spaceCount = abs(height - line);
		starCount = abs(height - spaceCount);
		while (spaceCount > 0){
			cout << " ";
			spaceCount--;
		}
		while (starCount > 0){
			cout << "*";
			starCount--;
		}
		line++;
		cout << endl;
	}
	
	//double rectangle
	//* * * *
	// * * *
	//* * * *
	// * * *
	//* * * *
	
	string rowOne = "";
	string rowTwo = "";
	cout << "Double Rectangle" << endl;
	
	for(int i = 0; i < height; i++){
		rowOne += "* ";
	}
	
	for(int j = 0; j < height-1; j++){
		rowTwo += " *";
	}
		
	for(int k = 0; k < height/2 ; k++){
		cout << rowOne << endl << rowTwo << endl;
	}
	cout << rowOne;
	
}
	
