#include <iostream>
#include <set>

using namespace std;
///OmegaUp - 7025. Solución y Venganza

int main()
{
    set<long long int> myset;

    long long int n;
    long long int counter = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        long long int num;
        cin >> num;
        myset.insert(num);
    }

    long long int r;
    cin >> r;

    for(int i = 0; i < r; i++){
        long long int func, x;
        cin >> func >> x;

        set<long long int>::iterator next = myset.find(x);

        cout << "counter: " << counter << endl;

        if(func == 1){
            next++;
            //cout << "value: " << *next << "\n" << endl;
            counter += *(next) - x;
        }

        else if(func == 2){
            next--;
            //cout << "value: " << *next << "\n" << endl;
            counter += x - *(next);
        }

        myset.erase(x);
    }

    cout << counter;

    return 0;
}
