#include<iostream>

using namespace std;

void printArray( int n, int A[] ){
    
    for( int i = 0; i < n; i++ ){
        cout << A[i] << " ";
    }
    
    cout << endl;
}

void swap( int A[], int i, int j ){
    
    int s = A[i];
    A[i] = A[j];
    A[j] = s;
}

void selectionSort( int n, int A[] ){
    
    for( int i = 0; i < n; i++ ){
        
        int m = i;
        
        for( int j= i + 1; j < n; j++ ){
            
            if( A[j] < A[m] ){
                m = j;
            }
        }
        
        if( i != m ){
            
            swap( A, m, i );
        
            cout << "The array after swapping the " << m << "th and " << i << "th element is: ";
        
            printArray( n, A );
        }
    }
    
    cout << endl << "The final sorted array is: ";
    
    printArray( n, A );
}

int main(){
    
    int n;
    
    cout << "Enter the size of the array: ";
    
    cin >> n;
    
    int A[n];
    
    cout << "Enter the elements of array with a space: ";
    
    for( int i = 0; i < n; i++ ){
        
        cin >> A[i];
    }
    
    cout << "The input array is: ";
    
    printArray( n, A);
    
    selectionSort( n, A );
}