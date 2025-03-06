#include "../../std_lib_facilities.h"
/*
    This program assumes that the first input for the number and unit type are both valid to initialize the values.
*/

double convertToM(double number, string unitType){
    if (unitType=="cm"){
        return number/100.0;
    } else if (unitType=="in"){
        return number*2.54/100.0;
    } else if (unitType=="ft"){
        return number*2.54/100.0*12;
    } else {
        return number;
    }
}

int main(){
    double num1{0};
    string unit{""};
    vector<double> nums(0);
    cin >> num1 >> unit;
    double largest = convertToM(num1, unit);
    double smallest = convertToM(num1, unit);
    double sum{0};
    int amountOfNumbers{0};
    do {
        if(unit!="m" && unit!="cm" && unit!="in" && unit!="ft") continue;
        num1 = convertToM(num1, unit);
        sum+=num1;
        ++amountOfNumbers;
        nums.push_back(num1);
        if(num1 > largest){
            cout << "largest so far" << endl;
            largest = num1;
        }
        else if (num1 < smallest){
            cout << "smallest so far" << endl;
            smallest = num1;
        }
    } while(cin>>num1>>unit);
    cout << "The largest number is " << largest << endl;
    cout << "The smallest number is " << smallest << endl;
    cout << "The amount of numbers entered is " << amountOfNumbers << endl;
    sort(nums);
    cout << "The numbers entered as meters is as follows:" << endl;
    for(double num:nums){
        cout << "\t" << num << endl;
    }
}