#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string a, b, c; cin >> a >> b >> c;
    a = a + b;
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    if(equal(a.begin(), a.end(), c.begin(), c.end())){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
