#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    char opr;

    cout << "Enter an operator : ";
    cin >> opr;

    cout << "Enter num1 : ";
    cin >> num1;

    cout << "Enter num2 : ";
    cin >> num2;

    switch(opr){
        case '+':
        cout << num1 << " " << "+" << " " << num2 << " " << "=" << " " << num1 + num2 << endl;
        break;

        case '-':
        cout << num1 << " " << "-" << " " << num2 << " " << "=" << " " << num1 - num2 << endl;
        break;

        case '*':
        cout << num1 << " " << "*" << " " << num2 << " " << "=" << " " << num1 * num2 << endl;
        break;

        case '/':
        cout << num1 << " " << "/" << " " << num2 << " " << "=" << " " << num1 / num2 << endl;
        break;

        default:
        cout << "Default" << endl;
    }
    
    return 0;
}