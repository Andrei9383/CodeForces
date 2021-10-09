#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, x = 0; cin >> n;
    string input;
    for(int i =0 ; i<n; i++){
        cin >> input;
        if(input == "X++" || input == "++X"){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x;
    return 0;
}