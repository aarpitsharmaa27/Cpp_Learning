#include <iostream>

int main(){

    std::string Name;
    std :: cout << "Enter you Name : " ;
    std :: cin >> Name;
    
    int x ;
    std :: cout << "Enter you Age : ";
    std :: cin >> x ;

    std:: cout << "My name is " <<  Name << " and My Age is " << x << "\n";
    
    // But the problem is that if I enter space in input then outpur get messy
    // To get clear data with space we use getline function

    std :: string Full_name ;
    int y;
    std :: cout << "Enter you Full name : " ;
    \
    std :: getline (std::cin >> std :: ws,Full_name);

 
    std :: cout << "Enter you Age : " ;
    std :: cin >> y;
    
    return 0 ;  
}