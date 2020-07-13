#include <iostream>

using namespace std;

class Rational {
private:
	int num;
	int den;
public:
	Rational(int num, int den = 1) : num(num), den(den) {}

	void print() {
		if (den == 1) {
			cout << num << endl;
		}
		else if (num == 0) {
			cout << num << endl;
		}
		else {
			cout << num << "/" << den << endl;
		}
	}

	void add(int x, int y) {
		if (den == y) {
			cout << num + x << "/" << den << endl;
		}
		else {
			cout << (num * y) + (x * den) << "/" << den * y << endl;
		}
	}

	void subtract(int x, int y) {
		if (den == y) {
			cout << num - x << "/" << den << endl;
		}
		else {
			cout << (num * y) - (x * den) << "/" << den * y << endl;
		}
	}

	void multiply(int x, int y) {
		cout << num * x << "/" << den * y << endl;
	}

	void divide(int x, int y) {
		cout << num * y << "/" << den * x << endl;
	}

	int equals(Rational r) {
		if (r.num == num && r.den == den) {
			return 1;
		}
		else {
			return 0;
		}
	}
};