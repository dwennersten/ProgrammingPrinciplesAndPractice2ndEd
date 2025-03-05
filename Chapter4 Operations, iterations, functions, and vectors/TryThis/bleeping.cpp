#include "../../std_lib_facilities.h"

int main(){
    vector<string> disliked = {"a", "bob", "what"};
    vector<string> words;
    for(string word; cin>>word;){
        bool match = false;
        for(string censored:disliked){
            if(word==censored){
                match=true;
            }
        }
        if(match) cout << "BLEEP" << endl;
        else cout << word << endl;
        match=false;
    }
}