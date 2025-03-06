#include "../../std_lib_facilities.h"


void printAlmostZero(double large, double small){
    if((large-small) < .01){
        cout << "The numbers are almost equal." << endl;
    }
}

void printLargeSmall(double large, double small){
    cout << "The larger number is " << large << endl;
    cout << "The smaller number is " << small << endl;
    printAlmostZero(large, small);
}

int main(){
    double num1{0},num2{0},larger{0},smaller{0};
    while(cin>>num1>>num2){
        if(num1 > num2){
            larger = num1;
            smaller = num2;
            printLargeSmall(larger, smaller);
        } else if (num1 < num2){
            larger = num2;
            smaller = num1;
            printLargeSmall(larger, smaller);
        } else {
            cout << "The numbers are equal" << endl;
        }

    }
}