#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n, t; cin >> n >> t;
    string v; cin >> v;
    int a = 0;
    for(int i = 0; i<t; i++){
        for(int i = 0; i<n - 1; i++){
            if(v[i] == 'B' && v[i + 1] == 'G'){
                swap(v[i], v[i + 1]);
                i++;
            }
        }
    }
    cout << v;
    return 0;
}