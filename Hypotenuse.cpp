#include <iostream>
#include <cmath>
    
    int main(){

        double P;
        double B;
        double H ;
        
        std :: cout << "Ente side P :" ;
        std :: cin >> P;
        std :: cout << "Enter side B :";
        std :: cin >> B;
        
        

        P = pow(P, 2);
        B = pow(B , 2);
        H = sqrt(P + B);

        std::cout<<"Side is :"<< H;

        

        return 0 ;
    }