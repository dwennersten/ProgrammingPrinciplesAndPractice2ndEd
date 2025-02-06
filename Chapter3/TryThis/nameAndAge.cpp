#include "../../std_lib_facilities.h"

int main(){
    cout << "Please type in your first name and age: ";
    double age;
    String name;
    cin >> name >> age;
    cout << "Hello " << name << " you are " << age*12 << " months old\n";
    return 0;
}