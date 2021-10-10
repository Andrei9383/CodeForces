#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n; cin >> n;
    char v[51];
    int a = 0;
    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = 0; i<n - 1; i++){
        if(v[i] == v[i + 1]){
            a++;
        }
    }
    cout << a;
    return 0;
}