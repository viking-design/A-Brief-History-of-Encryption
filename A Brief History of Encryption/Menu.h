#pragma once
#include <iostream>
#include <string>

// Prints the ASCII art for the main menu of this program
void printMainArt();

// All these functions ask the user for confirmation for each of their respective options
bool scytaleSelect();
bool caesarSelect();
bool vigenereSelect();
bool hebernSelect();
bool enigmaSelect();
bool rsaSelect();
bool exitSelect();

// Enum to enhance readability of the code
enum MenuOptions {
	SCYTALE = 1,
	CAESAR,
	VIGENERE,
	HEBERN,
	ENIGMA,
	RSA,
	EXIT
};