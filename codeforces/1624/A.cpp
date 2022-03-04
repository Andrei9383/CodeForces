#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int x, a[1001]; cin >> x;
        int maxx = 0, minn = 1000000005;
        for(int i = 0; i<x; i++){
            cin >> a[i];
            maxx = max(maxx, a[i]);
            minn = min(minn, a[i]);
        }
        cout << maxx - minn << endl;
    }
    return 0;
}