#include <iostream>

using namespace std;
///Hanging out - Kattis

int main()
{
    int limit, events;
    int total = 0;
    int groups = 0;
    cin >> limit >> events;

    for(int i = 0; i < events; i++){
        int people;
        string moment;

        cin >> moment >> people;

        if(moment == "enter"){
            total += people;
            if(total > limit){
                groups++;
                total -= people;
            }
        }

        else{
            total -= people;
        }

    }

    cout << groups;

    return 0;
}
