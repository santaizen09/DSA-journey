#include <iostream>
using namespace std;
int afterTrade(float&balance, float result){
    float netresult = balance + result;
    return netresult;
}

int main(){
    float accountbalance = 10000.00;
    bool marketopen = 1;
    while(marketopen == 1){
        cout <<"\n ---TRADING MENU---" << endl;
        cout << "Current Balanc: " << accountbalance << endl;
        cout << "[1] If you had a profit" << endl;
        cout << "[2] If you had a loss" << endl;
        cout << "[3] Close the market" << endl;
        cout << "choose an option : ";
        int option;
        cin >> option;
        if(option==1){
            int profit;
            cout << "enter your profit : ";
            cin >> profit;
            afterTrade(accountbalance, profit);
        }
        else if ( option==2 ){
            int loss;
            cout << "Enter your loss : ";
            cin >> loss;
            afterTrade(accountbalance, -loss);
        }
        else if (option == 3){
            marketopen = 0;
        }
        else {
            cout << "Invalid option selected. please choose a valid option" << endl;
        }
    }
    cout << "Market closed. Final balance : " << accountbalance <<endl;
    return 0;  

}