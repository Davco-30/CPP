#include <iostream>

using namespace std;
///Leerás un número k y debes de imprimir el número entero más pequeño que al elevarlo al cubo de como
///resultado >= k

int main()
{
    while(true){
        /// k = 73
        /// num = 5^3 = 125, 4^3 = 64

        int k;
        cin >> k; ///12

        int start = 0;
        int finish = k;

        ///Sin binaria
        /*for(int i = 1; i <= k; i++){
            int cube = i*i*i;

            if(cube >= k){
                cout << i;
                return 0;
            }
        }*/

        ///Binaria
        while((start-1) <= finish){
            int mid = (start + finish) / 2;    ///13/2 = 6 => [1,6][7,12]

            if((mid*mid*mid) >= k){
                finish = mid;
            }

            else{
                start = mid;
            }
        }

        if((start*start*start) < k){
            cout << finish;
        }

        else{
            cout << start;
        }
        cout << "\n";
    }

    return 0;
}
