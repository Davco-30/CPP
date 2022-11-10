#include<iostream>
using namespace std;

///Delicious_Bubble_Tea - Kattis

int main()
{
    int n, m; //Teas amount  //toppings amount
    int buy = 1000000000; //What should i buy?

    cin >> n;
    int teas[n];

    ///Teas
    for(int i = 0; i < n; i++){
        cin >> teas[i];
    }

    cin >> m;
    int tops[m];

    ///Toppings
    for(int i = 0; i < m; i++){
        cin >> tops[i];
    }

    ///Toppings for each tea
    for(int i = 0; i < n; i++){
        int cheap = 1000000000;
        int num;
        cin >> num;

        for(int k = 0; k < num; k++){
            int top;
            cin >> top;

            if(top < cheap){
                cheap = top;
            }
        }

        cout << "\ncheapest top of the tea "<< teas[i] << " : " << cheap << ".\n";
        cout << "cheapest combination: " << cheap + teas[i] << ".\n";

        if( (cheap + teas[i]) < buy){
            buy = cheap + teas[i];
        }

        cout << "buy: " << buy << ".\n";
    }

    int money;
    cin >> money;

    money /= buy;
    cout << (money - 1);

    return 0;
}
