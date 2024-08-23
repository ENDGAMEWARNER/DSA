#include <iostream>

using namespace std;

int reverse( int n ){
    
    int m = n;
    
    if( n == 0 ){
        return 0;
    }
    
    if( n < 0){ n = (-1)*n; }
    
    int N = 0;
    
    while( n > 0 ){
        N = n%10 + 10*N;
        n = n/10;
    }
    
    if( m < 0 ){ N = (-1)*N; }
    
    return N;
}
int main(){
    
    int n;
    
    cout << "Enter the number you want to reverse: ";
    
    cin >> n;
    
    cout << "The reverse of the number " << n << " is " << reverse(n) << ".";
}