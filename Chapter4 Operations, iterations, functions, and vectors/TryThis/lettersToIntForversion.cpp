#include "../../std_lib_facilities.h"

int main(){
    int capStart = int('A');
    int capEnd = int('Z');
    int lowStart = int('a');
    int lowEnd = int('z');
    for(int c=capStart; c<=capEnd; c++){
        cout << char(c) << "\t" << c << "\n";
    }
    for(int c=lowStart; c<=lowEnd; c++){
        cout << char(c) << "\t" << c << "\n";
    }
}