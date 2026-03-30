#include "Scytale.h"
#include "Caesar Cipher.h"
#include "Vigenere Cipher.h"
#include "Hebern Cipher Machine.h"
#include "Enigma Machine.h"
#include "RSA Encryption.h"
#include "Menu.h"

int main() {
	bool mainLoop = true;
	int input = 0;
	while (mainLoop) {
		system("cls");
		printMainArt();
		std::cout << "Select one of the following encryption methods:\n1. Scytale\n2. Caesar Cipher\n3. Vigenere Cipher\n4. Hebern Cipher Machine\n5. Engima\n6. RSA Encryption\n";
		std::cout << "Enter the encryption method's number here, or enter 7 to exit the program: ";
		std::cin >> input;

		switch (input) {
		case SCYTALE:
			if (scytaleSelect()) {
				scytale();
			}
			break;

		case CAESAR:
			if (caesarSelect()) {
				caesarCipher();
			}
			break;

		case VIGENERE:
			if (vigenereSelect()) {
				vigenereCipher();
			}
			break;

		case HEBERN:
			if (hebernSelect()) {
				hebernCipher();
			}
			break;

		case ENIGMA:
			if (enigmaSelect()) {
				enigma();
			}
			break;

		case RSA:
			if (rsaSelect()) {
				rsa();
			}
			break;

		case EXIT:
			mainLoop = !exitSelect();
		}
	}
	return 0;
}