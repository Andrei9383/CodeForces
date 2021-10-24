#include <iostream>

using namespace std;

int main(){
    int n, a = 0, b = 0; cin >> n;
    while(n--){
        int x, y; cin >> x >> y;
        if(x > y) a++;
        else if(x < y) b++;
    }
    if(a > b) cout << "Mishka";
    else if(a < b) cout << "Chris";
    else if(a == b) cout << "Friendship is magic!^^";
    return 0;
}