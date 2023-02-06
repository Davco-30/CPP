#include <iostream>
#include <bits/stdc++.h>

using namespace std;
///Online Judge - 10055

int main()
{
    string input;
    while(getline(cin, input)){
        if(input == "End of file"){
            return 0;
        }

        else{
            int num1 = 0, num2 = 0;
            int mark = 0, mult = 1;

            for(int i = (input.length() - 1); i >= 0; i--){
                if(input[i] == ' '){
                    mark = 1;
                    mult = 1;
                    continue;
                }

                if(mark == 0){
                    int digit = input[i] - '0';
                    digit *= mult;

                    num2 += digit;
                    mult *= 10;
                }

                else if(mark == 1){
                    int digit = input[i] - '0';
                    digit *= mult;

                    num1 += digit;
                    mult *= 10;
                }
            }

            cout << (num2 - num1) << endl;
        }
    }
}
