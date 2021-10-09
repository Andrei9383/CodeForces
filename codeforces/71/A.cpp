#include <iostream>
#include <string>

using namespace std;

int main(){
    int n; cin >> n;
    string input[101];
    for(int i = 0; i<n; i++) cin >> input[i];
    for(int i = 0; i<n; i++){
        int a = 0;
        for(int j = 0; j<input[i].length(); j++){
            a++;
        }
        if(a > 10){
            cout << input[i].front() << a - 2 << input[i].back();
        }
        else{
            cout << input[i];
        }
        cout << endl;
    }
    return 0;
}