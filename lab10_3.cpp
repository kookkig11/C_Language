#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point

class Circle {
public:
	Circle(point center, double radius) {
		this->center = center;
		this->radius = radius;
	}
	double area() const {
    	return M_PI * pow(radius, 2);
    }
    double distanceFromCenter(point pt) const {
    	double sumX = abs(pt.xPosition - center.xPosition);
      	double sumY = abs(pt.yPosition - center.yPosition);
      	return sqrt(pow(sumX, 2) + pow(sumY, 2));
    }
    int contains(point pt) const {
    	double sumX = abs(pt.xPosition - center.xPosition);
    	double sumY = abs(pt.yPosition - center.yPosition);
      	double d = sqrt(pow(sumX, 2) + pow(sumY, 2));
      	if (d > radius) {
        	return 0;
      	}
      	else {
        	return 1;
      	}
    }
private:
	point center;
	double radius;
};

int main()
{
	point center, check;
	double radius;
	  
	cout << "Center of Circle: ";
	cin >> center.xPosition >> center.yPosition;
	cout << "Radius of Circle: ";
	cin >> radius;
	cout << "Point to Check: ";
	cin >> check.xPosition >> check.yPosition;
	  
	Circle *circle_ = new Circle(center, radius);
	cout << "Area of Circle is " << circle_->area() << "\nDistance from Center to Point (" << check.xPosition << ", " << check.yPosition << ") is " << circle_->distanceFromCenter(check) << endl;
	if (!circle_->contains(check)) {
		cout << "This point is not in this circle.";
	}
	else {
	    cout << "This circle contains this point.";
	}
}