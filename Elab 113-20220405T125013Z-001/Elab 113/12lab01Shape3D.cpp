#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape3D{
	private:
    public:
        virtual double volumn();
        virtual double surfaceArea();
};

double Shape3D::volumn() { 
return 0; 
}
double Shape3D::surfaceArea() { 
return 0; 
}


class RightRectangularPyramid : public Shape3D {
private :
    double width;
    double length;
    double height;

public :

    RightRectangularPyramid() : width(0), length(0), height(0) {}
   
    RightRectangularPyramid(double width, double length,double height){
    	this->width = width;
		this->length = length;
		this->height = height;
    }


    double volumn() {
        return (width * length * height)/3;
    }

    double surfaceArea() {
        double a, b, c;
	a = length * width; 
	b = length * sqrt(pow(width/2, 2) + pow(height, 2));
	c = width * sqrt(pow(length/2, 2) + pow(height, 2));
	return a+b+c;
    }
};

class Sphere : public Shape3D {
private :
    double radius;

public :
    Sphere() : radius(0) {}
    Sphere(double radius){
        this->radius = radius;
    }

    double volumn() {
        return M_PI * pow(radius, 3) * 4 / 3 ;
    }

    double surfaceArea() {
        return 4 * M_PI * pow(radius, 2);
    }

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