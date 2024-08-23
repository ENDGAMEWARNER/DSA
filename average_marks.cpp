
#include <iostream>
 using namespace std;
int main() {
    cout << " Enter your Name:";
    string Name;
    cin >> Name; //your name will be stored as a string under variable Name
    
    cout << " Enter your Roll Number:";
    int RollNumber;
    cin >> RollNumber; // your roll number will be stored as an integer under variable RollNumber
    
    cout << " Enter the marks you seccured in Maths:";
    // All the marks are given between 0 to 100 iclusively.
    double Mathmarks;
    cin >> Mathmarks; // your math marks will be stored as an integer under variable Mathmarks
    if( Mathmarks > 100 || Mathmarks < 0 ){ 
        cout << " " << endl;
        cout << " Invalid marks. Try again. ";
        return 0;
    }
    
    cout << " Enter the marks you seccured in Science:";
    double Sciencemarks; // your science marks will be stored as an integer under variable Sciencemarks
    cin >> Sciencemarks;
    if( Sciencemarks > 100 || Sciencemarks < 0 ){ 
        cout << " " << endl;
        cout << " Invalid marks. Try again. ";
        return 0;
    }
        
    cout << " Enter the marks you seccured in History:";
    double Historymarks; // your history marks will be stored as an integer under variable Historymarks
    cin >> Historymarks;
    if( Historymarks > 100 || Historymarks < 0 ){ 
        cout << " " << endl;
        cout << " Invalid marks. Try again. ";
        return 0;
    }
        
    cout << " Enter the marks you seccured in Geography:";
    double Geographymarks; // your geography marks will be stored as an integer under variable Geographymarks
    cin >> Geographymarks;
    if( Geographymarks > 100 || Geographymarks < 0 ){ 
        cout << " " << endl;
        cout << " Invalid marks. Try again. ";
        return 0;
    }
    
    // as all the data is stored we will calculate the average marks
    
    double avgMarks = ( Mathmarks + Sciencemarks + Historymarks + Geographymarks)/4;

    cout << " " << endl;
    cout << " " << endl;
    cout << "Report starts here "<< endl;
    
    cout << " Name: " << Name <<endl;
    cout << " Roll Number: " << RollNumber <<endl; 
    cout << " Marks in Maths: " << Mathmarks <<endl;
    cout << " Marks in Science: " << Sciencemarks <<endl;
    cout << " Marks in History: " << Historymarks <<endl;
    cout << " Marks in Geography: " << Geographymarks <<endl;
    cout << " Average Marks: " << avgMarks <<endl;
    
    if(avgMarks > 80){ cout << " Grade: A";}
    else if(avgMarks > 60 && avgMarks <= 80){ cout << " Grade: B";}
    else if(avgMarks > 40 && avgMarks <= 60){ cout << " Grade: C";}
    else{ cout << " Grade: D";}
    
    return 0;
}