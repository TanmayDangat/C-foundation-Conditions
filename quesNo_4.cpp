#include<iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter the number : ";
    cin >> num;

    (num > 0) ? cout << "Positive integer." << endl : cout << "The number is negative and skipped." << endl;

    return 0;
}