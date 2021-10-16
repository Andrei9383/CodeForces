#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long n, v[101], max = -1e5; cin >> n;
    for(int i = 0; i<n; i++){
        cin >> v[i];
        if(v[i] > max){
            max = v[i];
        }
    }
    int s = 0;
    for(int i = 0; i<n; i++){
        s += max - v[i];
    }
    cout << s;
    return 0;
}