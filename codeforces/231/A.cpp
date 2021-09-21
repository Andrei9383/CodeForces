#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    unsigned long long int a = 0, b = 0, v[1000000];
    for(int i = 1; i<= 3*n; i++){
        cin >> v[i];
    }
    for(int i = 1; i<=3*n; i = i + 3){
        if(v[i] == 1){
            a++;
        }
        if(v[i + 1] == 1){
            a++;
        }
        if(v[i + 2] == 1){
            a++;
        }
        if(a >= 2){
            b++;
        }
        a = 0;
    }
    cout << b;
    return 0;
}