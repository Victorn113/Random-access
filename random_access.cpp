// This program demonstrates the seekg function.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;	// To hold a character

	// Open the file for input.
	fstream file("letters.txt", ios::in);
    //a z w b f t s r
    //abcdefghijklmnopqrstuvwxyz
	// Move to byte 5 from the beginning of the file
	// (the 6th byte) and read the character there.
	file.seekg(0L, ios::beg);
	file.get(ch);
	cout << ch;

	file.seekg(-1L, ios::end);
	file.get(ch);
	cout << ch;

	file.seekg(-4L, ios::end);
	file.get(ch);
	cout << ch;
file.seekg(1L, ios::beg);
	file.get(ch);
	cout << ch;
	file.seekg(5L, ios::beg);
	file.get(ch);
	cout << ch;
	file.seekg(-7L, ios::end);
	file.get(ch);
	cout << ch;
	file.seekg(-8L, ios::end);
	file.get(ch);
	cout << ch;
	file.seekg(-9L, ios::end);
	file.get(ch);
	cout << ch;
	file.close();
	return 0;
}
