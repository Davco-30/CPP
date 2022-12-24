#include <iostream>

using namespace std;
///OmegaUp - 6956. Paseo de la Reforma

int main()
{
    int n;
    cin >> n;

    int list1[n];

    for(int i = 0; i < n; i++){
        cin >> list1[i];
    }

    int result = 0;
    int countr = 1;

    for(int i = 0; i < n-1; i++){
        if(list1[i] > list1[i+1]){
            countr++;
        }

        if(list1[i] <= list1[i+1] || i == n-2){
            if(countr > result){
                result = countr;
            }
            countr = 1;
        }
    }

    cout << result;

    return 0;
}
