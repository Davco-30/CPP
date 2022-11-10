#include <iostream>
using namespace std;
///Euler's Method

int main()
{
    ///Original Code
    /*float n; /// y in a certain point
    cin >> n;

    float step = 0.2; ///step size
    float init = 1;  ///y
    float start = 0; ///x

    for(int i = 1; i <= (n/step); i++){
        float derivative = ( ((start)*(start))*(init) - ((init)*(init))/(2) );
        float form = init + ((step) * (derivative));

        init = form;
        start += step;

        cout << "y: " << init << "\n";
    }

    cout << "y(" << n << "): " << init;*/

    ///Problem Situation: Phase 2
    ///R
    float n; /// y in a certain point
    cin >> n;

    float step = 0.01; ///step size
    float init = 2500;  ///y
    float start = 0; ///x

    for(int i = 1; i <= (n/step); i++){
        float derivative = (1/14)*(init);
        float form = init + ((step) * (derivative));

        init = form;
        start += step;

        cout << "y( " << start << "): " << init << "\n";
    }

    cout << "y(" << n << "): " << init;

    return 0;
}
