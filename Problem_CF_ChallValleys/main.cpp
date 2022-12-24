#include <iostream>
using namespace std;
///Challenging Valleys- Codeforces

int main()
{
    int t;  ///cases
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        int list1[n];

        for(int j = 0; j < n; j++){
            int num;
            cin >> num;
            list1[j] = num;
        }

        //long long int prev, mid, next, points;
        int mark1 = 0;
        int points = 0;

        for(int j = 0; j < n-1; j++){
            if(list1[j] < list1[j+1]){
                mark1 = 1;
            }

            if(list1[j] > list1[j+1]){
                if(mark1 == 1){
                    points++;
                    mark1 = 0;
                }
            }
        }

        if(points == 0){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
