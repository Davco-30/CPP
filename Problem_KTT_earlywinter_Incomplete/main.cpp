#include <iostream>

using namespace std;
///Kattis - earlywinter

int main()
{
    int n, m;
    cin >> n >> m;

    int grade = n+1, pos = 0;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        if(num <= m && num < grade){
            grade = num;
            pos = i;
        }
    }

    if(grade <= m){
        cout << "It hadn't snowed this early in " << pos << " years!";
    }

    else{
        cout << "It had never snowed this early!";
    }

    return 0;
}
