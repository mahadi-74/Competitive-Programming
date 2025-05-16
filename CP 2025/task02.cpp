#include <iostream>
using namespace std;
class Circle {
private:
    float radius;

public:
    Circle() {
        radius = 1.0;
    }

    Circle(float r) {
        radius = r;
    }
    float getRadius() const {
        return radius;
    }
    float getArea() const {
        return 3.1416* radius * radius;
    }
};

int main()
{
    Circle circle1(2.0);
    Circle circle2(12.0);
    Circle circle3(24.0);

    cout << "Circle 1 - Radius: " << circle1.getRadius() << " , Area: " << circle1.getArea() <<endl;
    cout << "Circle 2 - Radius: " << circle2.getRadius() << " , Area: " << circle2.getArea() <<endl;
    cout << "Circle 3 - Radius: " << circle3.getRadius() << " , Area: " << circle3.getArea() <<endl;

    circle2 = Circle(35.0);
    cout << "Updated Circle 2 - New Radius: " << circle2.getRadius() << ",New Area: " << circle2.getArea() <<endl;

    return 0;
}

