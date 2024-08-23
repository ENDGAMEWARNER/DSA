#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    float P, r;
    
    cout << "Enter the Principal Amount taken: ";
    cin >> P;
    
    cout << "Enter the Rate of Interest: ";
    cin >> r;
    
    float A; // A is the amount accumulated after 3 years
    
    A = P * (1 + (r / 100)) * (1 + (r / 100)) * (1 + (r / 100));
    
    cout << fixed << setprecision(5); // using setprecision to get 5 decimal digits in output
    
    cout << "The total amount accumulated after 3 years is " << A << endl;
    
    return 0;
}