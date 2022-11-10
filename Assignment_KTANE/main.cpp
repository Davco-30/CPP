#include <iostream>

using namespace std;
//OmegaUp - KTANE

int main()
{
    int num_A;
    int num_B;
    int num_K;

    cin >> num_A >> num_B >> num_K;

    num_A -= num_B;

    if(num_A < 0){
        num_A = -(num_A);
    }

    cout << num_A << "\n";

    if(num_A >= num_K){
        cout << "No";
    }

    else{
        cout << "Si";
    }

}
