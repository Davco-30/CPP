#include <iostream>

using namespace std;
///C. Advantage - Codeforces

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num, diff = 0;
        int s = -1, s2 = -1;
        cin >> num;

        int list1[num];

        for(int j = 0; j < num; j++){
            int a;
            cin >> a;

            list1[j] = a;

            if(a > s){
                s = a;
            }
        }

        for(int j = 0; j < num - 1; j++){
            if(list1[j] != list1[j+1]){
                diff++;
            }

            if(list1[j] > s2 && list1[j] < s){
                s2 = list1[j];
            }
        }

        if(list1[num-1] > s2 && list1[num-1] < s){
            s2 = list1[num-1];
        }

        if(diff == 0){
            s2 = list1[0];
        }

        for(int j = 0; j < num; j++){
            if(list1[j] == s){
                cout << (list1[j]) - s2 << " ";
            }

            else if(list1[j] != s){
                cout << list1[j] - s << " ";
            }
        }

        cout << "\n";
    }
    return 0;
}
