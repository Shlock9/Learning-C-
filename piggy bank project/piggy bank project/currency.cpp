#include <iostream>
using namespace std;

// program written by Evan Doerksen
// this program will take input of brazillina currencies, then convert them into US dollars and print the result ot the terminal
// returns 0

int main() {

	float peso;
	float reais;
	float soles;
	float usdollar = 0;

	float pesoUsd = 0.055;
	float reaisUsd = 0.20;
	float solesUsd = 0.27;

	// prompts the user for the amount of each foreign currency
	// apparently "endl" is for flushing buffers and is used inefficiently if used as a newline (usefule for reading massive files
	// the "using namespace std" allows us to skip the "std::cout/cin" syntax and just write cout/cin, ez pz
	cout << "Enter number of Colombian Pesos: ";
	cin >> peso;
	cout << "\n";
	cout << "Enter number of Brazilian Reais: ";
	cin >> reais;
	cout << "\n";
	cout << "Enter number of Peruvian Soles: ";
	cin >> soles;


	// convert all currency then add together
	usdollar = peso * pesoUsd;
	usdollar = usdollar + (reais * reaisUsd);
	usdollar = usdollar + (soles * solesUsd);

	// output as reuired
	cout << "\nUS Dollars = $" << usdollar;


	return 0;
}
