#include <iostream>

int main(){

    std :: string name;
    std :: cout << "What's your name : " ;
    std:: cin >>  name;

    std :: cout << "Hello " << name << "\n";
    
    int x;
    int y ;
    
    std :: cout << "Enter first number : " ;
    std :: cin >> x;
    std :: cout << "Enter second numbe : " ;
    
    std :: cin >> y;
    int z = x + y;

    std :: cout << "Sum of x and y is : " << z ;
    
    return 0;
}