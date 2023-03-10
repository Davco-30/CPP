#include <iostream>

using namespace std;
///Entrada: Paréntesis (1,0)
///Indicar cual es la longitud más larga de un sub-string válido que hay en la entrada

///Ejemplo: 1 1 0 = (() = 2, ()()

int main()
{
    int n;
    cin >> n;

    int pila[n];

    for(int i = 0; i < n; i++){
        cin >> pila[i];
    }

    int start = 0, ending = 0;
    int ones = 0, zeros = 0, length = 0;

    while(start < n){
        if(pila[start] == 0){
            start++;
            ending = start;
            continue;
        }

        else{
            if(pila[ending] == 1){
                ones++;
            }

            else if(pila[ending] == 0){
                zeros++;
            }

            if(zeros - ones == 0){
                ones = 0;
                zeros = 0;

                if( (ending-start) > length){
                    length = (ending-start)+1;
                }
            }

            if( (zeros > ones) || (ending == (n-1) && ones > zeros) ){
                start++;
                ending = start;
                ones = 0;
                zeros = 0;
                continue;
            }

            ending++;
        }

        if(ending >= (n)){
            start++;
            ending = start;
            ones = 0;
            zeros = 0;
            continue;
        }

        /*cout << "start: " << start << " || ending: " << ending << endl;
        cout << "ones: " << ones << " || zeros: " << zeros << endl;
        cout << "length: " << length << "\n" << endl;*/
    }

    cout << "length: " << length << "\n" << endl;

    return 0;
}
