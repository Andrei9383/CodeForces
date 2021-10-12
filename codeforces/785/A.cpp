/*

Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.

*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, s = 0; cin >> n;
    while(n--){
        string input; cin >> input;
        if(input == "Tetrahedron"){
            s += 4;
        }
        else if(input == "Cube"){
            s += 6;
        }
        else if(input == "Octahedron"){
            s += 8;
        }
        else if(input == "Dodecahedron"){
            s += 12;
        }
        else if(input == "Icosahedron"){
            s += 20;
        }
    }
    cout << s;
    return 0;
}