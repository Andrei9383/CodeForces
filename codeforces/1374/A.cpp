#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long t; cin >> t;
    while(t--){
        long long x, y, n; cin >> x >> y >> n;
        cout<<(n-y)/x*x+y<<endl;
    }
    return 0;
}