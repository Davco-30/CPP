#include <iostream>
#include <math.h>
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
   /* float n; /// y in a certain point
    n = 6*/

    float step = 1; ///step size
    float init = 10;  ///y
    float start = 0; ///x

    for(int i = 1; i <= (6); i++){
        float derivative = 11 - (sqrt(13 +( 3*( (init)*(init) ) )));
        float form = init + ((step) * (derivative));

        init = form;
        start += step;

        cout << "y( " << start << "): " << init << "\n";
    }

    cout << "y(" << 6 << "): " << init;

    return 0;
}
