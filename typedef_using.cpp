// typedef and using keyword 


#include <iostream>
#include <vector>

typedef std::string text_t;     // we create a variable as text_t in place of std::string
typedef int int_i;
using flo_t = float;            // using act as same but written in different way
// using int_t = int;
int main(){
    text_t FirstName = "Arpit";     // now in place of std::string we can simply use text_t
    std::cout << "My name is " << FirstName << "\n";
    
    int_i x = 45;
    std::cout << "My weight is " << x  << "kg"<< "\n";
    

    flo_t v = 425.43;
    std::cout << "My fat is " << v << "lbs " << "\n";
     return 0 ;
}