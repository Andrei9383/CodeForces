#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int a[100];
        for(int i = 0; i<x; i++) cin >> a[i];
        for(int i = 0; i<x; i++){
            if(count(a, a + x, a[i]) == 1){
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}