#include <iostream>
#include <string>

using namespace std;

int main(){
    int v[5]; cin >> v[1] >> v[2] >> v[3] >> v[4];
    string input; cin >> input;
    int ans = 0;
    for(int i = 0; i<input.length(); i++){
        ans += v[(int)input[i] - 48];
    }
    cout << ans;
    return 0;
}