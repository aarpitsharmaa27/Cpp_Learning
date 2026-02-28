#include <iostream>

int main(){
    int x  = 10.34;
    std :: cout << x << "\n";   // int only hold integer value

    double y = 345.5;
    std :: cout << y << "\n";   // duble hold decimal value


    // conversion

    double z = (int) 514.5 ;
    std :: cout << z << "\n";   // decimal converted to integer
    
    
    std :: cout << (char)100 << "\n";      // by ASCII Table 
    std :: cout << (char)50 << "\n";

    int correct = 8;
    int questions = 20;
    double score = correct / questions * 100;       // shows output 0 beacuse we take int as input so 
    std :: cout << "The Total score is " << score << "\n";  // it divide 8/20 which is 0.4 so it take 0 * 100 
    
   

    double marks = correct /(double) questions * 100;
    std :: cout << "The Total marks are " << marks <<  "\n";
   

    
    return 0;
    
}