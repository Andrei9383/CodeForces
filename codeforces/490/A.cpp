#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, v[5001]; cin >> n;
    int a = 0, b = 0, c = 0;
    for(int i = 0; i<n; i++){
        cin >> v[i];
        if(v[i] == 1){
            a++;
        }
        if(v[i] == 2){
            b++;
        }
        if(v[i] == 3){
            c++;
        }
    }
    cout << min(min(a, b), c) << endl;
    for(int i = 0; i<min(min(a, b), c); i++){
        bool ha = true, hb = true, hc = true;
        for(int j = 0; j<n; j++){
            if(v[j] == 1 && ha){
                cout << j + 1 << " ";
                ha = false;
                v[j] = 0;
            }
            if(v[j] == 2 && hb){
                cout << j + 1 << " ";
                hb = false;
                v[j] = 0;
            }
            if(v[j] == 3 && hc){
                cout << j + 1 << " ";
                hc = false;
                v[j] = 0;
            }
        }
        cout << endl;
    }
    return 0;
}