//By: Michelle Ly

#include <iostream>
#include <string>
using namespace std;

void compute_coins(int amount);
//tells what coins to give out for any amount of change from 1 cent to 99 cents

int main(){
    int coins;
    compute_coins(coins);
}

void compute_coins(int amount){
    do{
        int quarters(0), dimes(0), pennies(0);
        string str1;
        string q;
        string d; 
        string p;
        cout << "Enter number of cents (or zero to quit):" << endl;
        cin >> amount;
        if ((amount > 0) && (amount < 100)){
            if (amount > 1){
                cout << amount << " cents can be given in ";
            }
            else{
                cout << amount << " cent can be given in ";
            }
            if ((amount / 25) > 0){
                quarters = amount / 25;
                q = to_string(quarters);
                amount = amount % 25;
            }
            if ((amount / 10) > 0){
                dimes = amount / 10;
                d = to_string(dimes);
                amount = amount % 10;
            }
            if ((amount) > 0){
                pennies = amount;
                p = to_string(pennies);
            }
            if (quarters > 1){
                str1 += q + " quarters, ";
            }
            if (quarters == 1){
                str1 += q + " quarter, ";
            }
            if (dimes > 1){
                str1 += d + " dimes, ";
            }
            if (dimes == 1){
                str1 += d + " dime, ";
            }
            if (pennies > 1){
                str1 += p + " pennies. ";
            }
            if (pennies == 1){
                str1 += p + " penny. ";
            }
            str1[str1.length() - 2] = '.';
            str1.pop_back();
            cout << str1 << endl;
            amount = 1;
        }
        if ((amount < 0) || (amount > 99)){
        cout << "Amount is out of bounds. Must be between 1 and 99." << endl;
        }
    } while (amount != 0);
    return;
}