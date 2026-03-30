#include "Scytale.h"

void printScytaleArt() {
	std::cout << "===================\n";
	std::cout << "=== THE SCYTALE ===\n";
	std::cout << "===================\n";
}

void scytaleInfo() {
	system("cls");
	char input = ' ';
	printScytaleArt();
	std::cout << "About:\nThe Scytale is an encryption device that was created by the ancient Greeks. This type of cryptography is known as a transposition cipher.\n\nTransposition Cipher - A cipher that moves around the letters in a given plaintext message as opposed to changing the letters outright.\n\n";
	std::cout << "How encryption works with the Scytale:\nYou would wrap either leather or parchment around a cylinder, write your message lengthwise and then unravel it to reveal your encrypted message widthwise. ";
	std::cout << "To decrypt, you would wrap the message around a cylindrical object and read it lengthwise to decipher the message.\n";
	std::cout << "To return to the previous menu, type any key and enter";
	std::cin >> input;
}

bool scytaleInfoConfirm() {
	system("cls");
	printScytaleArt();
	char input = ' ';
	std::cout << "Would you like to:\n1. See info about the Scytale <---\n2. Encrypt/Decrypt a message\n3. Exit\n";
	std::cout << "Enter 'y' if you would like to confirm your action, or 'n' to change your action: ";
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}

bool scytaleEncryptDecryptConfirm() {
	system("cls");
	printScytaleArt();
	char input = ' ';
	std::cout << "Would you like to:\n1. See info about the Scytale\n2. Encrypt/Decrypt a message <---\n3. Exit\n";
	std::cout << "Enter 'y' if you would like to confirm your action, or 'n' to change your action: ";
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}

bool scytaleExitConfirm() {
	system("cls");
	printScytaleArt();
	char input = ' ';
	std::cout << "Would you like to:\n1. See info about the Scytale\n2. Encrypt/Decrypt a message\n3. Exit <---\n";
	std::cout << "Enter 'y' if you would like to confirm your action, or 'n' to change your action: ";
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}

bool scytaleEncryptConfirm()
{
	system("cls");
	printScytaleArt();
	char input = ' ';
	std::cout << "Would you like to encrypt or decrypt a message?\n1. Encrypt <---\n2. Decrypt\n3. Exit\n\nEnter your chosen number here: ";
	std::cout << "Do you wish to continue? y/n: ";
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}

bool scytaleDecryptConfirm()
{
	system("cls");
	printScytaleArt();
	char input = ' ';
	std::cout << "Would you like to encrypt or decrypt a message?\n1. Encrypt\n2. Decrypt <---\n3. Exit\n\nEnter your chosen number here: ";
	std::cout << "Do you wish to continue? y/n: ";
	std::cin >> input;
	if (input == 'y') {
		return true;
	}
	else {
		return false;
	}
}

void scytaleEncrypt(std::string text, int length) {
	system("cls");
	printScytaleArt();

}

void scytaleDecrypt(std::string text, int length) {
	system("cls");
	printScytaleArt();

}

std::string getText() {
	system("cls");
	printScytaleArt();
	std::string text;
	std::cout << "Enter the text you wish to encrypt or decrypt: ";
	std::cin >> text;
	return text;
}

int getScytaleLength() {
	int length = 1;
	std::cout << "\nEnter the length of the Scytale: ";
	return length;
}

void toTxt(std::string text, int length) {
	std::fstream outputFile; 
	outputFile.open("scytale.txt", std::ios::app);
	if (outputFile.is_open()) {
		outputFile << "Scytale Encrypted text: ", text, " with a length of ", length, ".\n";
		outputFile.close();
	}
	else {
		std::cout << "There has been an error with outputting the text to a file\n";
	}
}

void scytaleEncryptDecryptMenu() {
	system("cls");
	printScytaleArt();
	int input = 0;
	std::string text;
	int length = 1;
	enum Options {
		ENCRYPT = 1,
		DECRYPT,
		EXIT
	};
	std::cout << "Would you like to encrypt or decrypt a message?\n1. Encrypt\n2. Decrypt\n3. Exit\n\nEnter your chosen number here: ";
	std::cin >> input;
	switch (input) {
	case ENCRYPT:
		if (scytaleEncryptConfirm()) {
			text = getText();
			length = getScytaleLength();
			scytaleEncrypt(text, length);
			std::cout << "\nWould you like to print this result into a txt file?\n1. Yes\n2. No\n\n";
			std::cin >> input;
			if (input == 1) {
				toTxt(text, length);
			}
		}
		break;

	case DECRYPT:
		if (scytaleDecryptConfirm()) {
			text = getText();
			length = getScytaleLength();
			scytaleDecrypt(text, length);
			std::cout << "Enter any character you like to exit\n\n";
			std::cin >> text;
		}
		break;

	case EXIT:
		break;
	}
}

void scytale() {
	enum Options {
		INFO = 1,
		ENCRYPT,
		EXIT
	};
	bool funcLoop = true;
	while (funcLoop) {
		system("cls");
		printScytaleArt();
		int input = 0;
		std::cout << "Would you like to:\n1. See info about the Scytale\n2. Encrypt/Decrypt a message\n3. Exit\n";
		std::cout << "Enter the number of the action you would like to take: ";
		std::cin >> input;
		switch (input) {
		case INFO:
			if (scytaleInfoConfirm()) {
				scytaleInfo();
			}
			break;

		case ENCRYPT:
			if (scytaleEncryptDecryptConfirm()) {
				scytaleEncryptDecryptMenu();
			}
			break;

		case EXIT:
			if (scytaleExitConfirm()) {
				funcLoop = false;
			}
		}
	}
}