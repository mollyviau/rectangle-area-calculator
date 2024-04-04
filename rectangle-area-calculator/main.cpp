#include <iostream>

using namespace std;

int main() {
    double length, width;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    double area = length * width;

    cout << "Area of the rectangle: " << area << endl;

    return 0;
}