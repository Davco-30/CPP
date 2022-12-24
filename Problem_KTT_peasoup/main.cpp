#include <iostream>

using namespace std;
///peasoup - Kattis

int main()
{
    int rest;
    cin >> rest;

    for(int i = 0; i < rest; i++){
        int soup = 0, pancake = 0;
        int n;
        string name;

        cin >> n;
        getline(cin,name);
        getline(cin,name);

        for(int i = 0; i < n; i++){
            string dish;
            getline(cin, dish);

            if(dish == "pea soup"){
                soup = 1;
            }

            else if(dish == "pancakes"){
                pancake = 1;
            }
        }

        if(soup == 1 && pancake == 1){
            cout << name;
            return 0;
        }
    }

    cout << "Anywhere is fine I guess";

    return 0;
}
