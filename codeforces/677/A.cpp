#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
    int n, h, v[2001]; cin >> n >> h;
    for(int i = 0; i<n; i++) cin >> v[i];
    int a = 0;
    for(int i = 0; i<n; i++){
        if(v[i] > h){
            a++;
        }  
    }
    cout << (n - a) + (2 * a);
    return 0;
}