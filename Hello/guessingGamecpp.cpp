#include <iostream>

using namespace std;

void guessingGame() {
	int hostUserNum, guestUserNum;
	cout << "Host: ";
	cin >> hostUserNum;
	system("cls");
	cout << "Guest: ";
	cin >> guestUserNum;

	(hostUserNum == guestUserNum)? cout << "Correct!" : cout << "Failed!";
}