#include <iostream>

int main(){
    const double PI = 3.14;  // Const keyword makes the variable constant nobody change that
    // PI = 14213.523  it will show error because PI is under constant variable
    double radius = 90;
    double circumference = 2 * PI * radius;

    double length = 30;
    length = 60;  // Here we can change values because length is not constant
    double breadth = 70;
    double Area = length * breadth;

    const double side = 20;
    double area  = side * side;
    

    std::cout<< "The Circumference of the circle is "<< circumference  << " cm" << "\n";
    std::cout << "The Area of rectangle is  "<< Area << "cm" << "\n";
    std::cout << "The Area of square is "<< area << "cm" << "\n";
    return 0;

}