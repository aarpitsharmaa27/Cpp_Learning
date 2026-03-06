#include <iostream>
int main(){
    
    std::string Name;
    std::cout<< "Enter Your Name ;" ;
    std::cin >> Name;
    
    int age;
    std::cout << "Enter yoour age :";
    std :: cin >> age;

    if (age >= 100){

        std :: cout << Name << " You are too old to enter this site .";
    }
    
    else if(age >= 18 ){
        std::cout << Name << " you are "<< age <<" years old. You are Elligible !!";

    }
    else if(age <= 0){
        std::cout << Name << " Please enter valid age. ";
    }
    else if (age > 100){

        std :: cout << Name << "You are too old to enter this site .";
    }
    else {
        std::cout << Name << " your age is " << age << " years old . Not Elligible !!";
    }

    return 0;
}