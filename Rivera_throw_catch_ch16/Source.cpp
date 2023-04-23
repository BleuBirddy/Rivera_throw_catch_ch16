//this program demnstsrates an exception being thrown and caught
#include <iostream>
#include <string>
using namespace std;

//Function prototype
char character(char, int);
int main() {

	
 // to hold the quotient
	char variable = 0;

	try { 
		char c = character('a', 1);
		
		cout << " The Character is: " << c << endl;
	}
	
	catch (string invalidCharacterException) {
		cout << invalidCharacterException;
	}
	catch (string invalidRangeException) {
		cout << invalidRangeException;
	}

	try {
		char d = character('a', -1);

		cout << " The Character is: " << d << endl;
	}

	catch (string invalidCharacterException) {
		cout << invalidCharacterException;
	}
	catch (string invalidRangeException) {
		cout << invalidRangeException;
	}
	

	try {
		char g = character('?', 8);

		cout << " The Character is: " << g << endl;
	}

	catch (string invalidCharacterException) {
		cout << invalidCharacterException;
	}
	catch (string invalidRangeException) {
		cout << invalidRangeException;
	}






	cout << " GoodBye" << endl;
	return 0;

}

char character(char start, int offset) {
	if (!((start >= 'A' && start <= 'Z') || (start >= 'a' && start <= 'z'))) {
		string invalidCharacterException = "ERROR: Invalid character entered! Please provide a letter between A-Z, a-z.";
		throw invalidCharacterException;
		char target = start + offset;

		if (!((target >= 'A' && target <= 'Z') || (target >= 'a' && target <= 'z'))) {
			string invalidRangeException = " ERROR: Character offset out of range! Please provide a letter within the range A-Z, a-z.";
			throw invalidRangeException;
		}

		return target;
	}
}
