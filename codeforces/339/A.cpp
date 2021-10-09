#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string input; cin >> input;
    int v[101], a = 0;
    for(int i = 0; i<input.length(); i++){
        if(input[i] != '+'){
            v[a++] = input[i] - '0';
        }
    }
    sort(v, v + a);
    for(int i = 0; i<a; i++){
        if(i == a - 1){
            cout << v[i];
        }
        else{
            cout << v[i] << "+";
        }
    }
    return 0;
}