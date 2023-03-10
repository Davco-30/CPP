#include <iostream>

using namespace std;

int main()
{
    int numA, numB, numK;
    cin >> numA >> numB >> numK;

    numA -= numB;

    if(numA < 0){
        numA -= (numA*2);
    }

    cout << numA << endl;

    if(numA > numK){
        cout << "No";
    }

    else{
        cout << "Si";
    }

    return 0;
}
