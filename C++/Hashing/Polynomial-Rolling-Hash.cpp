#include <iostream>
#include <string>

using namespace std;

int poly_roll_hash(string str){

    int hash = 0;

    for (int i = 0 ; i < str.length() ; i++){
        int ascii_of_char = str[i];
        hash = hash * 10 + ascii_of_char;
    }

    return hash % 1000000000;
}

int main(){

    cout << poly_roll_hash("my string") << endl;
    cout << poly_roll_hash("my string space") << endl;
    cout << poly_roll_hash("string") << endl;
    cout << poly_roll_hash("string") << endl;
    
    return 0;
}