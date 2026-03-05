#include <iostream>
    int main(){
        std::cout<< "My name is Arpit"<<"\n";
        
        std::string Name;
        std::cout << "Enter your name :";
        std::cin >> Name;
        
        int x ;
        int y ;
        
        std::cout << "Enter first number :";
        std::cin >> x;
        std::cout << "Enter second number :";
        std::cin >> y;
        std::cout << "Sum of two number is "<< x + y;
        
        return 0;
    }