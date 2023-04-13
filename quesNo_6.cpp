#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if(marks >= 90 && marks <= 100){
        cout << "Your grade is A+" << endl;
    }
    else if(marks >= 80 && marks < 90){
        cout << "Your grade is A" << endl;
    }
    else if(marks >= 70 && marks < 80){
        cout << "Your grade is B+" << endl;
    }
    else if(marks >= 60 && marks < 70){
        cout << "Your grade is B" << endl;
    }
    else if(marks >= 50 && marks < 60){
        cout << "Your grade is C" << endl;
    }
    else if(marks >= 40 && marks < 50){
        cout << "Your grade is D" << endl;
    }
    else if(marks >= 30 && marks < 40){
        cout << "Your grade is E" << endl;
    }
    else if(marks >= 0 && marks < 30){
        cout << "Your grade is F" << endl;
    }
    else{
        cout << "You have entered incorrect marks." << endl;
    }

    return 0;
}