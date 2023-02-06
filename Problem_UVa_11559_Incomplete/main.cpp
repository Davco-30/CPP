#include <iostream>

using namespace std;
///Online Judge - 11559

int main()
{
    while(true){
        int people,budget, hotels, weeks;
        cin >> people >> budget >> hotels >> weeks;

        int minimum = budget + 1;

        for(int i = 0; i < hotels; i++){
            int price;
            cin >> price;

            for(int j = 0; j < weeks; j++){
                int beds;
                cin >> beds;

                if(beds >= people && (price*people) < minimum){
                    minimum = price*people;
                }
            }
        }

        if(minimum == budget+1){
            cout << "stay home" << endl;
        }

        else{
            cout << minimum << endl;
        }
    }

    return 0;
}
