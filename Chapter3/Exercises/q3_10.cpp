#include "../../std_lib_facilities.h"

int main(){
    string operation = "";
    double operand1=0, operand2=0;

    cout << "Please type an operation followed by two operands:";
    cin >> operation >> operand1 >> operand2;
    cout << endl;
    if(operation=="+" || operation=="plus"){
        cout << operand1 + operand2;
    } else if (operation=="-" || operation=="minus"){
        cout << operand1 - operand2;
    }else if (operation=="*"|| operation=="mul"){
        cout << operand1 * operand2;
    } else if (operation=="/" || operation=="div"){
        cout << operand1/operand2;
    } else{
        cout << "That operation is not available.";
    }
    
    return 0;
}

