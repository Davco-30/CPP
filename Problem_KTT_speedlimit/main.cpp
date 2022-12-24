#include <iostream>

using namespace std;
/// Kattis - Speed Limit

int main()
{
    while(true){
        int n;
        cin >> n;

        if(n == -1){
            break;
        }

        int total = 0, prev = 0;

        for(int i = 0; i < n; i++){
            int miles, time;
            cin >> miles >> time;

            int time2 = time;

            time -= prev;
            prev = time2;
            total += (miles*time);
        }

        cout << total << " miles" << endl;
    }

    return 0;
}
