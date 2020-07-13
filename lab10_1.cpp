#include <iostream>
#include <string>
using namespace std;

class Hero {
public:
    Hero(string n, int lv) {
            name = n;
            level = lv;
    }
	string getName() const {
		return name;
	}
	int getLevel() const {
		return level;
	}
private:
	string name;
	int level;
};

int main() {
	string name;
  	int level;
 	cin >> name >> level;
 	Hero *hero = new Hero(name, level);
 	cout << hero->getName() << " " << hero->getLevel() << endl;
}