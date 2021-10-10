#include <iostream>

using namespace std;

int main(){
    int n, a = 0, d = 0; cin >> n;
    char v;
    for(int i = 0; i<n; i++){
        cin >> v;
        if(v == 'A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a > d){
        cout << "Anton";
    }
    else if(a < d){
        cout << "Danik";
    }
    else if(a == d){
        cout << "Friendship";
    }
    return 0;
}