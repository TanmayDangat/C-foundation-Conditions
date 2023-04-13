#include <iostream>
using namespace std;

int main()
{
    int costPrice, sellingPrice, profit, loss;
    cout << "Enter the cost price : ";
    cin >> costPrice;

    cout << "Enter the selling price : ";
    cin >> sellingPrice;

    profit = sellingPrice - costPrice;
    loss = costPrice - sellingPrice;

    if(costPrice < sellingPrice){
        cout << "Profit : " << profit  << endl;
    }
    else if(costPrice > sellingPrice){
        cout << "Loss : " << loss << endl;
    }
    else{
        cout << "Neither profit, nor loss." << endl;
    }

    //(costPrice < sellingPrice) ? cout << "Profit : " << profit << endl : cout << "Loss : " << loss << endl;

    return 0;
}