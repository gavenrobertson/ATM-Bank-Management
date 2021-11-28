#include <iostream>
#include <string>

using namespace std;

string dataEnteredCardNumber;
string dataEnteredName;
int dataEnteredPin;

class Security {
private:
	string cardNumber = "14";
	string nameOnCard = "Terry Bradshaw";
	int pinNumber = 3454;
	bool value = NULL;

public:
	bool checkCard(string userCardNumber, string userNameOnCard, int userPinNumber, bool userValue) {
		if (cardNumber == userCardNumber) {
			cout << "Card Number Matches Successfully!" << endl;
		}
		else if (cardNumber != userCardNumber) {
			cout << "Card Number was Denied!" << endl;
			value = false;
			userValue = value;
			return userValue;
		}
		if (nameOnCard == userNameOnCard) {
			cout << "Name on Card Matches Successfully!" << endl;
		}
		else if (nameOnCard != userNameOnCard) {
			cout << "Name on Care was Denied!" << endl;
			value = false;
			userValue = value;
			return userValue;
		}
		if (pinNumber == userPinNumber) {
			cout << "Pin Number Matches Successfully!" << endl;
			value = true;
			userValue = value;
			return userValue;
		}
		else if (pinNumber != userPinNumber) {
			cout << "Pin Number was Denied!" << endl;
			value = false;
			userValue = value;
			return userValue;
		}
		return userValue;
	}
	
};

int Introduction() {
	string userCardNumber;
	string userNameOnCard;
	int userPinNumber;

	cout << "Hello and Welcome to the ATM Account Management Software!" << endl;
	cout << "Could you please enter in your Card Number: ";
	cin >> userCardNumber;
	dataEnteredCardNumber = userCardNumber;

	cout << "Could you please enter in your Name on the Card: ";
	cin.ignore(2, '\n');
	getline(cin, userNameOnCard);
	dataEnteredName = userNameOnCard;

	cout << "Could you please enter your Pin for your Card: ";
	cin >> userPinNumber;
	dataEnteredPin = userPinNumber;

	return userCardNumber, userNameOnCard, userPinNumber;
}

bool validation() {
	bool check = NULL;
	Introduction();
	Security creditCard;
	creditCard.checkCard(dataEnteredCardNumber, dataEnteredName, dataEnteredPin, check);

	if (check == false) {
		return false;
	}
	else
		return true;
}

int main() {
	validation();

}
