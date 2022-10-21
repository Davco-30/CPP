#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int total_faces = 0;

    for(int i = 0; i < n; i++){
        string figure;
        cin >> figure;

        if(figure == "Tetrahedron"){
            total_faces = total_faces + 4;
        }

        if(figure == "Cube"){
            total_faces = total_faces + 6;
        }

        if(figure == "Octahedron"){
            total_faces = total_faces + 8;
        }

        if(figure == "Dodecahedron"){
            total_faces = total_faces + 12;
        }

        if(figure == "Icosahedron"){
            total_faces = total_faces + 20;
        }
    }

    cout << total_faces;

    return 0;
}
