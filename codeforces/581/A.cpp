#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int c = 0;
    while(a > 0 && b > 0){
        a--;
        b--;
        c++;
    }
    cout << c << " " << (a + b) / 2;
    return 0;
}