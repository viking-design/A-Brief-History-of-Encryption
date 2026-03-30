#pragma once
#include <iostream>
#include <string>
#include <fstream>

// Prints some nice ASCII art
void printScytaleArt();

// Prints some information about the Scytale
void scytaleInfo();

// Asks for confirmation if the user wants Scytale information being printed
bool scytaleInfoConfirm();

// Asks for confirmation if the user wants to either encrypt or decrypt with the Scytale
bool scytaleEncryptDecryptConfirm();

// Asks for confirmation if the user wants to exit the Scytale
bool scytaleExitConfirm();

// Asks for confirmation if the user wants to encrypt
bool scytaleEncryptConfirm();

// Asks for confirmation if the user wants to decrypt
bool scytaleDecryptConfirm();

// This is the main function for Scytale encryption
void scytaleEncrypt(std::string text, int length);

// This is the main function for Scytale decryption
void scytaleDecrypt(std::string text, int length);

// Asks the user for text to either be encrypted or decrypted
std::string getText();

// Asks the user for the length of the scytale
int getScytaleLength();

// Prints the encrypted text to a txt file with the scytale's length
void toTxt(std::string text, int length);

// Asks the user whether they want to encrypt or decrypt with the Scytale
void scytaleEncryptDecryptMenu();

// The main function of the Scytale
void scytale();