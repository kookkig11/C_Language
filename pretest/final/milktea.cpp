#include <iostream>

using namespace std;

class MilkTeaMachine {
private:
	int milktea;
	int price;
	int coin;
public:
	MilkTeaMachine(int milktea, int price) : milktea(milktea), price(price), coin(0) {}

	void insertCoin(int addCoin) {
		coin += addCoin;
		cout << "Have coins now: " << coin << endl;
	}

	void dispense() {
		if (milktea <= 0) {
			cout << "No more milk tea. Sorry!" << endl;
		}
		else if (coin < price) {
			cout << "Not enough coin." << endl;
		}
		else {
			milktea -= 1;
			coin -= price;
			cout << "Your milk tea is here. Enjoy!\nReturning coins: " << coin << endl;
			coin = 0;
		}
	}

	void returnCoin() {
		cout << "Returning coins: " << coin << endl;
		coin = 0;
	}

	void add(int addMilkTea) {
		milktea += addMilkTea;
		cout << "Adding more milk tea." << endl;
	}
};



int main(){
}