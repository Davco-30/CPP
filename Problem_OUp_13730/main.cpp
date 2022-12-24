#include <iostream>

using namespace std;
///Marconacci - OmegaUp

int main()
{
    long long int p;
    cin >> p;

    long long int arr_A[1000000];
    long long int arr_B[1000000];

    arr_A[0] = 1;
    arr_A[1] = 0;

    arr_B[0] = 0;
    arr_B[1] = 1;

    for(int j = 0; j < 999998; j++){
        arr_A[j+2] = arr_A[j] + arr_A[j+1];
        arr_A[j+2] %= (long long int)(1000000000+7);
    }

    for(int j = 0; j < 999998; j++){
        arr_B[j+2] = arr_B[j] + arr_B[j+1];
        arr_B[j+2] %= (long long int)(1000000000+7);
    }

    for(int i = 0; i < p; i++){
        long long int a, b, k;
        long long int c = 0;
        cin >> a >> b >> k;

        a *= arr_A[k-1];
        //cout << "a: " << a << endl;
        a %= (long long int)(1000000000+7);
        b *= arr_B[k-1];
        //cout << "b: " << b << endl;
        b %= (long long int)(1000000000+7);

        a += b;
        a %= (long long int)(1000000000+7);
        //cout << "a: " << a << endl;

        cout << a << endl;
    }

    return 0;
}
