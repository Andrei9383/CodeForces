#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    char i, v[10000];
    cin >> i;
    string input;
    int a = 0, b = 0;
    while(i != '}'){
        cin >> i;
        if(i != ',' && i != '}'){
            v[a++] = i;
        }
    }
    for(char i = 'a'; i<='z'; i++){
        if(count(v, v + a, i) >= 1){
            b++;
        }
    }
    cout << b;
    return 0;
}