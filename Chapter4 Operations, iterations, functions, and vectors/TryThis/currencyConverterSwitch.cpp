#include "../../std_lib_facilities.h"

int main(){
    constexpr double yen_per_dollar = 149.31;
    constexpr double kroner_per_dollar = 11.3;
    constexpr double pounds_per_doller = 0.79;

    double money = 0;
    char unit=' ';

    cout << "Please type the amount of money you have followed by y for yen, ";
    cout << "k for kroner, or p for pounds. \n";
    cout << "ex: 3.5p would be 3.5 pounds:\n";
    cin >> money >> unit;
    switch(unit){
        case 'y':
            cout << money << unit << " = " << money/yen_per_dollar << " dollars." << endl;
            break;
        case 'k':
            cout << money << unit << " = " << money/kroner_per_dollar << " dollars." << endl;
            break;
        case 'p':
            cout << money << unit << " = " << money/pounds_per_doller << " dollars." << endl;
            break;
        default:
            cout << "I do not understand that unit." << endl;
            break;
    }
}