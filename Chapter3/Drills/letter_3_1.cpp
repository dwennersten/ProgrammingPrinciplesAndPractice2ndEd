#include "..//..//std_lib_facilities.h"

int main(){
    String first_name, friend_name;
    char gender=0;
    int age;
    cout << "Enter the name, a space, and then the age of the person you want to write to:";
    cin >> first_name >> age;
    if(age <=0 || age >=110){
        simple_error("You're kidding!");
    }
    cout << "Enter the name followed by a space and the gender (m or f) of your friend:";
    cin >> friend_name >> gender;
    cout << "Dear " << first_name << ",\n";
    cout << "\t How have things been going since we last spoke? \n";
    cout << "\t Things have been going well here!\n";
    cout << "\t Have you seen " << friend_name << " lately?\n";
    cout << "\t If you see " << friend_name << " please ask ";
    if(gender=='m'){
        cout << "him ";
    } else {
        cout << "her ";
    }
    cout << "to call me.\n";
    cout << "\t I hear you just had a birthday and you are " << age << " years old. \n";
    if(age<=12){
        cout << "\t Next year, you will be " << age+1 << ".\n\n";
    } else if (age==17){
        cout << "\t Next year you will be able to vote!\n\n";
    } else if (age>70){
        cout << "\t I hope you are enjoying retirement!\n\n";
    }
    cout << "Yours sincerely,\n\n Abe Lincoln";
}
