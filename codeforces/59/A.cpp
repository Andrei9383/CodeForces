#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string input; cin >> input;
    int a = 0, b = 0;
    for(int i = 0; i<input.length(); i++){
        if(isupper(input[i])){
            a++;
        }
        else{
            b++;
        }
    }
    if(a > b){
        transform(input.begin(), input.end(), input.begin(), ::toupper);
    }
    else{
        transform(input.begin(), input.end(), input.begin(), ::tolower);
    }
    cout << input;
    return 0;
}