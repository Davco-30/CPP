#include <iostream>

using namespace std;
///Codeforces - B. Blank Space

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int length;
        int total = 0, counter = 0;
        cin >> length;

        int array_1[length];

        for(int j = 0; j < length; j++){
            cin >> array_1[j];

            if(array_1[j] == 0){
                //cout << "YES\n";
                counter++;

                if(counter > total){
                    total = counter;
                }
            }

            else{
                counter = 0;
            }
        }

        cout << total << endl;
    }
    return 0;
}
