#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    bool a = true;
    for(int i = n + 1; i<10000; i++){
        int c = i;
        a = true;
        int arr[10];
        for(int i = 0; i<10; i++) arr[i] = 0;
        while(c > 0){
            arr[c % 10]++;
            c /= 10;
        }
        for(int i = 0; i<10; i++){
            if(arr[i] > 1){
                a = false;
                break;
            }
        }
        if(a){
            cout << i;
            return 0;
        }
    }
    return 0;
}