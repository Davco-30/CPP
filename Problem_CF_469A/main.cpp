#include <iostream>

using namespace std;
///Codeforces - A. I Wanna Be the Guy

int main()
{
    int n;
    cin >> n;

    int arr[n], total = n;

    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }

    int p;
    cin >> p;

    for(int i = 0; i < p; i++){
        int num;
        cin >> num;

        if(num != 0){
            if(num == arr[num-1] && arr[num-1] != -1){
                total--;
                arr[num-1] = -1;
            }
        }
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++){
        int num;
        cin >> num;

        if(num != 0){
            if(num == arr[num-1] && arr[num-1] != -1){
                total--;
                arr[num-1] = -1;
            }
        }
    }

    if(total == 0){
        cout << "I become the guy.";
    }

    else{
        cout << "Oh, my keyboard!";
    }

    return 0;
}
