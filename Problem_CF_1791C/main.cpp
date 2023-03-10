#include <iostream>

using namespace std;
///C. Prepend and Append - Codeforces

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        int flag = 0, times = 0, result = 0, length = 0;
        string number;
        cin >> n >> number;

        int digitA, digitB;

        if(n % 2 == 0){
            digitA = (n/2)-1;
            digitB = (n/2);
        }

        else{
            digitA = ((n-1)/2)-1;
            digitB = ((n-1)/2)+1;
            result += 1;
        }

        while(digitB < n){
            length += 2;
            if(number[digitA] == number[digitB]){
                flag = 1;
            }

            if(flag == 1){
                result += length;
                length = 0;
                flag = 0;
            }

            digitA--;
            digitB++;
        }

        cout << result <<endl;
    }
    return 0;
}
