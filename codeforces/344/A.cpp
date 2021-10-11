#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, v[10001], a = 0, lx; cin >> n;
    string input, lastinput;
    for(int i = 0; i<2 * n; i++){
        cin >> input;
        if(input != lastinput){
            a++;
        }
        lastinput = input;
    }
    cout << a;

    return 0;
}