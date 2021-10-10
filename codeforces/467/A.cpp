#include <iostream>

using namespace std;

int main(){
    int n, v[1001], a = 0; cin >> n;
    for(int i = 0; i<2 * n; i++) cin >> v[i];
    for(int i = 0; i< 2 * n - 1; i = i + 2){
        if(v[i + 1] - v[i] >= 2){
            a++;
        }
    }
    cout << a;
    return 0;
}