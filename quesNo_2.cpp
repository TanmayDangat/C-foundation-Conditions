#include<iostream>
using namespace std;
int main(){
   int num;
   cout << "Enter the number : ";
   cin >> num;

   if(num < 0){
      num = num * (-1);
   }
   cout << "Absolute value is : " << num << endl;

   //(num < 0) ? cout << num = num * (-1) << endl : cout << num << endl;
   
}