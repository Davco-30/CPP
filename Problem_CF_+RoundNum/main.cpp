#include <iostream>

using namespace std;
///Sum of Round Numbers - Codeforces

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        int num2 = num;
        int m = 0, n= 1;

        while(num2 != 0){
            int digit = num2 % 10;
            num2 /= 10;
            if(digit > 0){
                m++;
            }
        }

        cout << m << endl;

        if(m == 1){
            cout << num;
        }

        else{
            while(num != 0){
                int digit2 = (num % 10);

                if(digit2 == 0){
                    num /= 10;
                    n *= 10;
                    continue;
                }

                cout << digit2*n << " ";
                n *= 10;
                num /= 10;
            }
        }

        cout << "\n";
    }
    return 0;
}
