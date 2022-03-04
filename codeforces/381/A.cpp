#include <iostream>

using namespace std;

int main(){
    int n, v[1001], a = 0, b = 0, c = 0, d = 0, e = 0;
    cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    b = n - 1;
    while(a <= b){
        if(e % 2 == 0){
            if(v[a] > v[b]) c += v[a++];
            else c += v[b--];
        }
        else {
            if(v[a] > v[b]) d += v[a++];
            else d += v[b--];
        }
        e++;
    }
    cout << c << " " << d;
    return 0; 

}