#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int k, n, w; cin >> k >> n >> w;
    int a = 0;
    for(int i = 1; i<=w; i++){
        a = a +  i * k;
    }
    if(n - a >= 0){
        cout << 0;
    }
    else{
        cout << abs(n - a);
    }
    return 0;
}