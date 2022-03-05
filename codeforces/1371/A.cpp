#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int ans = x / 2;
        if(x % 2 == 1) ans++;
        cout << ans << endl;
    }
    return 0;
}