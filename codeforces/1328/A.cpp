#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        int d = 0;
        if(a % b == 0){
            cout << 0 << endl;
            continue; 
        }
        cout << b - a % b << endl;
    }
    return 0;
}