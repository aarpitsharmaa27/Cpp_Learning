#include <iostream>

int main(){

    // Decalaration & Assignment
    int x ;   // Declaration
    x = 45;     // Assignment
    std::cout << x << "\n";


    // Integer (whole Number)
    int age = 34;
    int year = 2026;
    int days = 7.4;

    std::cout << age << "\n";
    std::cout << year << "\n";
    std::cout << days << "\n";   // Output 7 because int is only for non decimal values 

    // Double ( Numbers Including Decimals)

    double pi = 3.14;
    double weight = 56.4;
    double gram = 30;          // It also print int values

    std::cout << pi << std::endl;
    std::cout << weight << std::endl;
    std::cout << gram << std::endl;

    
    // Char (Single Characters)

    char letter = 'B';
    char grade = 'A';
    char initial = 'c';
    char currency = '$';

    std::cout << letter<< "\n";
    std::cout << grade << "\n";
    std::cout <<  initial << "\n";
    std::cout <<  currency << "\n";

    
    // Boolean ( True or False)

    bool student = true;
    bool power = false;
    bool forsale = true;


    // String ( Sequence of texts)

    std::string name = "Arpit Sharma";
    std::string hometown = "Palampur";
    std::cout << name << "\n";
    std::cout << hometown << "\n";

    
    
    std::cout << "Hello" << name << "\n";
    std::cout << "Hello " << name << "\n";  // For Spacing
    std::cout<< "My age is  "<< age<< "\n";
    std::cout << "MY Hometown is " << hometown <<"\n";


    return 0;

}