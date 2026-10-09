#include <iostream>
#include <string>

using namespace std;

int poly_roll_hash(string str){

    const int mod = 1000019;
    const int base = 271;

    long long result = 0;

    for (int i = 0 ; i < str.length() ; i++){
        int ascii_of_char = str[i];
        result = (result * base + ascii_of_char) % mod;
    }

    return result;
}

int main(){

    cout << poly_roll_hash("my string") << endl;
    cout << poly_roll_hash("my string space") << endl;
    cout << poly_roll_hash("string") << endl;
    cout << poly_roll_hash("string") << endl;

    return 0;
}