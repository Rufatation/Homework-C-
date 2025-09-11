#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "Enter the side of the cube (a): ";
    cin >> a;
    cout << "Cube volume: " << pow(a, 3) << endl;
    cout << "Cube surface area: " << 6 * pow(a, 2) << endl;

    double b, c;
    cout << "\nEnter the sides of the rectangular prism (a, b, c): ";
    cin >> a >> b >> c;
    cout << "Prism volume: " << a * b * c << endl;
    cout << "Prism surface area: " << 2 * (a*b + b*c + a*c) << endl;

    const double pi = 3.14;
    double r;
    cout << "\nEnter the radius of the circle: ";
    cin >> r;
    cout << "Circle circumference: " << 2 * pi * r << endl;
    cout << "Circle area: " << pi * r * r << endl;

    double x, y;
    cout << "\nEnter two numbers to calculate the arithmetic mean: ";
    cin >> x >> y;
    cout << "Arithmetic mean: " << (x + y) / 2 << endl;

    cout << "\nEnter two positive numbers to calculate the geometric mean: ";
    cin >> x >> y;
    if (x > 0 && y > 0)
        cout << "Geometric mean: " << sqrt(x * y) << endl;
    else
        cout << "Error: numbers must be positive for geometric mean." << endl;

    cout << "\nEnter two non-zero numbers: ";
    cin >> x >> y;
    if (x != 0 && y != 0) {
        double x2 = x * x;
        double y2 = y * y;
        cout << "Sum of squares: " << x2 + y2 << endl;
        cout << "Difference of squares: " << x2 - y2 << endl;
        cout << "Product of squares: " << x2 * y2 << endl;
        cout << "Quotient of squares: " << x2 / y2 << endl;
    } else {
        cout << "Error: numbers must not be zero." << endl;
    }

    return 0;
}

