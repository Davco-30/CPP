#include <iostream>

using namespace std;
///Kattis - Stand on Zanzibar

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int turtles = 0;
        int num_1;
        cin >> num_1;
        while(true){
            int num;
            cin >> num;

            if(num > (num_1*2)){
                turtles += (num)-(num_1*2);
            }

            else if(num == 0){
                break;
            }

            num_1 = num;

        }

        cout << turtles << "\n";
    }
    return 0;
}
