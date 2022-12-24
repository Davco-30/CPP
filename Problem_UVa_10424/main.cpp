#include <iostream>
#include <bits/stdc++.h>

using namespace std;
///10424 - Love Calculator - UVA

int main()
{
    string name1;
    string name2;

    while(getline(cin, name1)){
        getline(cin, name2);
        //cout << name1 << " " << name2 << "\n";

        //Length of each name
        int n1 = name1.length();
        int n2 = name2.length();

        //cout << n1 << " " << n2 << "\n";

        //Result of the sum of each name
        int one = 0, two = 0;

        for(int i = 0; i < n1; i++){
            if(name1[i] >= 'a' && name1[i] <= 'z'){
                name1[i] -= 'a'-1;
                one += name1[i];
            }

            else if(name1[i] >= 'A' && name1[i] <= 'Z'){
                name1[i] -= 'A' - 1;
                one += name1[i];
            }
        }

        for(int i = 0; i < n2; i++){
            if(name2[i] >= 'a' && name2[i] <= 'z'){
                name2[i] -= 'a'-1;
                two += name2[i];
            }

            else if(name2[i] >= 'A' && name2[i] <= 'Z'){
                name2[i] -= 'A' - 1;
                two += name2[i];
            }
        }

        //cout << one << " " << two << "\n";

        ///Suma final de ambos nombres
        float sum1 = 0, sum2 = 0;

        while(one >= 1){
            sum1 += (one % 10);
            one /= 10;
            //cout << "sum1: " << sum1 << "\n";

            if(one == 0 && sum1 >= 10){
                one = sum1;
                sum1 = 0;
            }
        }

        while(two >= 1){
            sum2 += (two % 10);
            two /= 10;
            //cout << "sum2: " << sum2 << "\n";

            if(two == 0 && sum2 >= 10){
                two = sum2;
                sum2 = 0;
            }
        }

        //cout << sum1 << " " << sum2 << "\n";

        if(sum1 >= sum2){
            sum2 /= sum1;
            sum2 *= 100;
            cout << fixed << setprecision(2) << sum2 << " %\n";
        }

        else{
            sum1 /= sum2;
            sum1 *= 100;
            cout << fixed << setprecision(2) << sum1 << " %\n";
        }
    }

    return 0;
}
