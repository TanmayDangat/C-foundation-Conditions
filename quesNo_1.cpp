#include<iostream>
using namespace std;

int main(){
    int length, breadth;
    cout << "Enter Length : ";
    cin >> length;

    cout << "Enter breadth : ";
    cin >> breadth;

    (length == breadth) ? cout << "Square" << endl : cout << "Rectangle" << endl;
    
    return 0;
}