#include <iostream>

using namespace std;
///Codeforces - A. Helpful Maths

int main()
{
    string sum;         int one = 0, two = 0, three = 0;
    cin >> sum;

    if(sum.length() == 1){
        cout << sum;
    }

    else{
        for(int i = 0; i < sum.length(); i++){
            if(sum[i] == '1'){
                one++;
            }

            else if(sum[i] == '2'){
                two++;
            }

            else if(sum[i] == '3'){
                three++;
            }
        }

        string answer = "";

        for(int i = 1; i <= sum.length(); i++){
            if(i%2 == 0){
                answer += '+';
            }

            else{
                if(one >= 1){
                   answer += '1';
                   one--;
                }

                else if(two >= 1){
                   answer += '2';
                   two--;
                }

                else if(three >= 1){
                   answer += '3';
                   three--;
                }
            }

        }

        cout << answer;
    }

    return 0;
}
