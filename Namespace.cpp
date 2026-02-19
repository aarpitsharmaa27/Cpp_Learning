#include <iostream>
    namespace first {       // By name spacing we can declare
        int x = 0;          // Same variable many times
    }
    namespace second {
        int x = 2;

    }
    int main(){

        int x  = 40;

        std::cout << x << "\n"; 
        std::cout << first ::x << "\n";
        std::cout << second :: x << "\n";

        using namespace second;     // By this we can declare any variable
                                     // without naming               
        std :: cout << x << "\n";
        
        std:: cout << first ::x << "\n";  // but for another variable we have to name them
        
        
        using namespace std;        // With these we dont need to write std again & again
        
        string name =  "Arpit Bhai";
        cout << name << "\n";

        int y = 90;
        cout << y << "\n";

        double v = 3.1444444;
        cout << v << "\n";



        return 0;

    }