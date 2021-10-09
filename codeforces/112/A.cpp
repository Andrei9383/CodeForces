#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string a, b; cin >> a >> b;
    int as = 0, bs = 0, cs = 0;
    if(lexicographical_compare(a.c_str(), a.c_str() + a.length(), b.c_str(), b.c_str() + b.length(), [](char i, char j){return tolower(i) > tolower(j);})){
        cout << 1;
    }
    else if(lexicographical_compare(a.c_str(), a.c_str() + a.length(), b.c_str(), b.c_str() + b.length(), [](char i, char j){return tolower(i) < tolower(j);})){
        cout << -1;
    }
    else if(lexicographical_compare(a.c_str(), a.c_str() + a.length(), b.c_str(), b.c_str() + b.length(), [](char i, char j){return tolower(i) == tolower(j);})){
        cout << 0;
    }
    return 0;
}