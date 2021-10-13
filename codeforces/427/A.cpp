#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

const long long int maxn = 1e5;

int main(){
    long long int n, v[maxn]; cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    long int s = 0, a = 0;
    for(int i = 0; i<n; i++){
        if(v[i] > 0){
            s += v[i];
        }
        else{
            if(s > 0){
                s -= 1;
            }
            else if(s <= 0){
                a++;
            }
        }
    }
    cout << a;
    return 0;
}   