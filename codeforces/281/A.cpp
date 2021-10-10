#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string input;
    cin >> input;
    for(int i = 0; i<input.length(); i++){
        if(i == 0){
            cout << (char)toupper(input[i]);
        }
        else{
            cout << input[i];
        }
    }
    return 0;
}