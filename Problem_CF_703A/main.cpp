#include <iostream>

using namespace std;
///Codeforces - A. Mishka and Game

int main()
{
    int n;
    cin >> n;

    int mish = 0, chris = 0;

    for(int i = 0; i < n; i++){
        int dice_m, dice_c;
        cin >> dice_m >> dice_c;

        if(dice_m > dice_c){
            mish++;
        }

        else if(dice_m < dice_c){
            chris++;
        }
    }

    if(mish > chris){
        cout << "Mishka";
    }

    else if(mish < chris){
        cout << "Chris";
    }

    else{
        cout << "Friendship is magic!^^";
    }

    return 0;
}
