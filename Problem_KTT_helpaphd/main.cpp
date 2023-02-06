#include <iostream>

using namespace std;
///Kattis - helpaphd

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string operation;
        cin >> operation;

        if(operation == "P=NP"){
            cout << "skipped" << endl;
        }

        else{
            int num1 = 0, num2 = 0;
            int mark = 0, mult = 1;

            for(int j = (operation.length() - 1); j >= 0; j--){
                int digit = operation[j];

                if(operation[j] == '+'){
                    mark = 1;
                    mult = 1;
                    continue;
                }

                if(mark == 0){
                    digit -= '0';
                    digit *= mult;
                    num2 += digit;

                    mult *= 10;
                }

                else{
                    digit -= '0';
                    digit *= mult;
                    num1 += digit;

                    mult *= 10;
                }
            }

            cout << (num1+num2) << endl;
        }
    }

    return 0;
}
