#include <iostream>
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
        cin >> num; ///Topping per tea

        for(int k = 0; k < num; k++){
            int top;
            cin >> top;

            if(tops[top-1] < cheap){
                cheap = tops[top-1];
            }
        }

        //cout << "\ncheapest top of the tea "<< teas[i] << " : " << cheap << ".\n";
        //cout << "cheapest combination: " << cheap + teas[i] << ".\n";

        if( (cheap + teas[i]) < buy){
            buy = cheap + teas[i];
        }

        //cout << "buy: " << buy << ".\n";
    }

    int money;
    cin >> money;

    money /= buy;

    money--;

    if(money <= 0){
        cout << 0;
    }

    else{
        cout << money;
    }

    return 0;
}
