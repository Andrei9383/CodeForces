#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string input; cin >> input;
    if(input.length() < 7){
        cout << "NO";
        return 0;
    }
    for(int i = 0; i<input.length() - 6; i++){
        if(count(input.begin() + i , input.begin() + i + 7, input[i]) == 7){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}