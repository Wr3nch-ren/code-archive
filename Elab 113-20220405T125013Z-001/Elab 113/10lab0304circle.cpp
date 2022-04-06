#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{
    private: 
        point center;
        double radius;
    public:
        explicit Circle(point center, double radius){
            this->center = center;
            this->radius = radius;
        }

        double area(){
            double area = M_PI * (radius * radius);
            return area;
        }

        double distanceFromCenter(point pt){
            double distance = sqrt(pow(center.xPosition - pt.xPosition,2) + pow(center.yPosition - pt.yPosition,2));
            return distance;
        }

        int contains(point pt){
            if (distanceFromCenter(pt) > radius)
                return 0;
            else
                return 1;
        }

};

int main(){
    point center, check;
    double radius;
    
    cout << "Center of Circle: ";
    cin >> center.xPosition >> center.yPosition;
    cout << "Radius of Circle: ";
    cin >> radius;
    cout << "Point to Check: ";
    cin >> check.xPosition >> check.yPosition;
    
    Circle circle(center, radius);
    cout << "Area of Circle is " << circle.area() << endl;
    cout << "Distance from Center to Point (" 
         << check.xPosition 
         << ", " << check.yPosition <<  ") is " 
         << circle.distanceFromCenter(check) << endl;
    
    if (circle.contains(check))
        cout << "This circle contains this point." << endl;
    else
        cout << "This point is not in this circle." << endl;
}