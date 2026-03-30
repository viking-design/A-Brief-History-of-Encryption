#include "Menu.h"

void printMainArt() {
	std::cout << "================================================\n";
	std::cout << "=== WELCOME TO A BRIEF HISTORY OF ENCRYPTION ===\n";
	std::cout << "================================================\n";
}

bool scytaleSelect() {
	system("cls");
	printMainArt();
	std::cout << "Select one of the following encryption methods:\n1. Scytale <---\n2. Caesar Cipher\n3. Vigenere Cipher\n4. Hebern Cipher Machine\n5. Engima\n6. RSA Encryption\n";
	std::cout << "Do you wish to continue? y/n: ";
	char input = ' ';
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}

bool caesarSelect() {
	system("cls");
	printMainArt();
	std::cout << "Select one of the following encryption methods:\n1. Scytale\n2. Caesar Cipher <---\n3. Vigenere Cipher\n4. Hebern Cipher Machine\n5. Engima\n6. RSA Encryption\n";
	std::cout << "Do you wish to continue? y/n: ";
	char input = ' ';
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}

bool vigenereSelect() {
	system("cls");
	printMainArt();
	std::cout << "Select one of the following encryption methods:\n1. Scytale\n2. Caesar Cipher\n3. Vigenere Cipher <---\n4. Hebern Cipher Machine\n5. Engima\n6. RSA Encryption\n";
	std::cout << "Do you wish to continue? y/n: ";
	char input = ' ';
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}

bool hebernSelect() {
	system("cls");
	printMainArt();
	std::cout << "Select one of the following encryption methods:\n1. Scytale\n2. Caesar Cipher\n3. Vigenere Cipher\n4. Hebern Cipher Machine <---\n5. Engima\n6. RSA Encryption\n";
	std::cout << "Do you wish to continue? y/n: ";
	char input = ' ';
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}

bool enigmaSelect() {
	system("cls");
	printMainArt();
	std::cout << "Select one of the following encryption methods:\n1. Scytale\n2. Caesar Cipher\n3. Vigenere Cipher\n4. Hebern Cipher Machine\n5. Engima <---\n6. RSA Encryption\n";
	std::cout << "Do you wish to continue? y/n: ";
	char input = ' ';
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}

bool rsaSelect() {
	system("cls");
	printMainArt();
	std::cout << "Select one of the following encryption methods:\n1. Scytale\n2. Caesar Cipher\n3. Vigenere Cipher\n4. Hebern Cipher Machine\n5. Engima\n6. RSA Encryption <---\n";
	std::cout << "Do you wish to continue? y/n: ";
	char input = ' ';
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}

bool exitSelect() {
	system("cls");
	char input = ' ';
	std::cout << "Enter 'y' to confirm that you would like to exit the program: ";
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}