#include <iostream>

using namespace std;
///12279 - Emoogle Balance

int main()
{
    int cases = 1;

    while(true){
        int n;
        cin >> n;

        if(n == 0){
            break;
        }

        else{
            int reasons = 0, times = 0;
            for(int i = 1; i <= n; i++){
                int num;
                cin >> num;

                if(num >= 1 && num <= 99){
                    reasons++;
                }

                else{
                    times++;
                }

            }

            reasons -= times;
            cout << "Case " << cases << ": " << reasons << "\n";
            cases++;
        }

    }

    return 0;
}
