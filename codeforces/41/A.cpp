#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string v, w; cin >> v >> w;
    reverse(v.begin(), v.end());
    if(v == w){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}