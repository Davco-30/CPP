#include<iostream>
using namespace std;

///Delicious_Bubble_Tea - Kattis

int main()
{
    int n; //Teas amount
    int m; //toppings amount
    int total = INT_MAX;
    long long int money;

    cin >> n;

    int teas[n];

    ///Teas
    for(int i = 0; i < n; i++){
        int price;
        cin >> price;
        teas[i] = price;
    }

    cin >> m;

    int tops[m];

    ///Toppings
    for(int i = 0; i < m; i++){
        int price;
        cin >> price;

        tops[i] = price;
    }

    ///Kinds of toppings for each tea
    for(int i = 0; i < n; i++){
        int number;
        int cheap = INT_MAX;
        cin >> number;

        for(int j = 0; j < number; j++){
            int type;
            cin >> type;

            if(type < cheap){
                cheap = type;
            }
        }

        teas[i] += cheap;
    }

    cin >> money;

    for(int i = 0; i < n; i++){
        if(teas[i] < total){
            total = teas[i];
        }
    }

    money = money / total;
    money--;

    cout << money;

    return 0;
}
