#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n; cin >> n;
    char v[101];
    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = 0; i<n; i++) v[i] = tolower(v[i]);
    for(char i = 'a'; i<='z'; i++){
        if(count(v, v + n, i) < 1){
            cout << "NO";
            return 0;
        }
    }  
    cout << "YES";
    return 0;
}