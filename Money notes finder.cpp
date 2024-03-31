#include<iostream>
using namespace std;

int main() {
    cout << "Please enter the amount in PKR." << endl;
    cout << "The amount must be above 100 PKR." << endl;

    int user_amount;
    cin >> user_amount;

    int hundreds = user_amount / 100;
    user_amount -= hundreds * 100;

    int fiftys = user_amount / 50;
    user_amount -= fiftys * 50;

    int twenties = user_amount / 20;
    user_amount -= twenties * 20;

    int tens = user_amount / 10;

    // Removed the condition, display the results regardless of the remaining amount
    cout << "The number of hundreds is: " << hundreds << endl;
    cout << "The number of fifties is: " << fiftys << endl;
    cout << "The number of twenties is: " << twenties << endl;
    cout << "The number of tens is: " << tens << endl;

    return 0;
}