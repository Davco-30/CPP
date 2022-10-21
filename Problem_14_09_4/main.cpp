#include <iostream>

using namespace std;

int main()
{
    int n; //QALY
    float points;
    cin >> n;

    for(int i = 0; i < n; i++){
        float num_q, num_y;

        cin >> num_q >> num_y;

        points += num_q*num_y;
    }

    cout << points;

    return 0;
}
