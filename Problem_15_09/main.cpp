#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int g;
        cin >> g;

        int gnomes[g];

        for(int j = 0; j < g; j++){
            int num;
            cin >> num;

            gnomes[j] = num;
        }

        int number = 0;

        for(int j = 0; j < g-1; j++){
            if(gnomes[j+1] != (gnomes[j] + 1)){
                int king = j+2;
                number++;

                if(number == 1){
                    cout << king << "\n";
                }
            }
        }

    }

    return 0;
}
