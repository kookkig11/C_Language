#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape3D
{
public:
virtual float volumn() = 0;
virtual float surfaceArea() = 0;
};


class RightRectangularPyramid : public Shape3D
{
  public:
    RightRectangularPyramid() : width(0), length(0), height(0) {}
    RightRectangularPyramid(float width, float length, float height) { //constructor
      this->width = width;
      this->length = length;
      this->height = height;
    }
    float volumn() {
      return (width * height * length) / 3;
    }
    float surfaceArea() {
      float heightL = sqrt(pow(height, 2) + pow(width / 2, 2));
      float heightW = sqrt(pow(height, 2) + pow(length / 2, 2)); 
      return (width * length) + (((width * heightW) / 2) * 2) + (((heightL * length) / 2) * 2);
    }
    
  private:
    float width;
    float length;
    float height;
};

class Sphere : public Shape3D
{
  public:
    Sphere() : radius(0) {}
    Sphere(float radius) {
      this->radius = radius;
    }
    float volumn() {
      return (4 * M_PI * pow(radius, 3)) / 3;
    }
    float surfaceArea() {
      return 4 * M_PI * pow(radius, 2);
    }
    
  private:
    float radius;
};


int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        Shape3D **shapes = new Shape3D*[3];
        shapes[0] = new RightRectangularPyramid(1, 5.2, 7);
        shapes[1] = new Sphere(10.6);
        shapes[2] = new RightRectangularPyramid(3, 3.5, 4.13);
        for (int i = 0; i < 3; i++) {
            cout << "Volumn: " << (*shapes)->volumn() << endl;
            cout << "Surface Area: " << (*shapes)->surfaceArea() << endl;
            cout << "--------------------\n";
            *shapes++;
        }
    } else if (tc == 2) {
        RightRectangularPyramid rectangle;
        Sphere sphere;
        cout << rectangle.volumn() << endl;
        cout << rectangle.surfaceArea() << endl;
        cout << sphere.volumn() << endl;
        cout << sphere.surfaceArea() << endl;
    } else if (tc == 3) {
        RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
        cout << rectangle.volumn() << endl;
        cout << rectangle.surfaceArea() << endl;
    } else if (tc == 4) {
        Sphere sphere(34.25);
        cout << sphere.volumn() << endl;
        cout << sphere.surfaceArea() << endl;
    } else if (tc == 5) {
        RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
        Sphere sphere(34.25);
        Shape3D *shape = &rectangle;
        cout << shape->volumn() << " " << shape->surfaceArea() << endl;
        shape = &sphere;
        cout << shape->volumn() << " " << shape->surfaceArea() << endl;
    } else if(tc == 6) {
    }

}