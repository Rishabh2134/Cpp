#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int withdraw;
    float balance;
    float charges = 0.5;
    cin >> withdraw;
    cin >> balance;
    if(withdraw%5==0 && withdraw<balance){
            balance = balance - withdraw - charges;
            cout << fixed <<  setprecision(2) << balance;
        }
    else{
        cout << fixed <<  setprecision(2) << balance << endl;
    }
}

