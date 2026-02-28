#include <iostream>

int main(){

    // Addition

    int students = 34;
    int age = 99 ;
    float weight = 49;
    
    std::cout << "Before Students = " << students << "\n";
    std::cout << "Before age = " << age << "\n";
    std::cout << "Before Weight = " << weight << "\n";
    students += 1;  // Method 1

    age = age + 1;  // Method 2
    
    weight ++;   // Method 3 for single increment
    
    std::cout << "After Students= " << students << "\n";
    std::cout << "Now the age is " << age << "\n";
    std:: cout << "Now My weight is " << weight << "kg" << "\n" ;
    
    
    // Substraction

    int fine = 110;
    
    std :: cout << "My fine was  " << fine << "\n";
    
    fine = fine - 10;
    std :: cout << "Now my fine is " << fine << "\n";
    
    double weights = 60;
    std::cout << "Before Weight = " << weights << "\n";

    weights -= 10;
    std:: cout << "Now My weight is " << weights << "kg" << "\n" ;
    
    double height = 179.4;
    height --;
    std:: cout << "Now My height is " << height << "kg" << "\n" ;
    

    // Multiplication

    weights *= 100;
    std:: cout << "Now My weight is " << weights << "kg" << "\n" ;  

    weights = weights * 4;
    std:: cout << "Now My weight is " << weights << "kg" << "\n" ;


    // Divide

    weights /= 200;
    std:: cout << "Now My weight is " << weights << "kg" << "\n" ;
    
    height /= 2;
    std :: cout << "My height is " << height << "\n";
    

    
    // Modulus 

    int x = 50;
    x %= 8;
    std :: cout << "Remainder is " << x << "\n";

    int y = 900;
    y = y % 7;

    std :: cout << "Remainder is " << y << "\n";
    
    
    // POMDAS Rule

    double group = 400 - 10 * (35 / 523) + 5 * (23- 34) - 3.34*3 ;
    std :: cout << "Members in Group are " << group << "\n";
    return 0;
}