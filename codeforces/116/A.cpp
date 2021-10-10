#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, v[2001], a = 0, max = -(1e5 + 5); cin >> n;
    for(int i = 0; i<2 * n; i++) cin >> v[i];
    for(int i = 0; i<2 * n - 1; i = i + 2){
        a -= v[i];
        a += v[i + 1];
        if(a > max){
            max = a;
        }
    }
    cout << max;
    return 0;
}