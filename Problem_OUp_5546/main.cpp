#include <iostream>

using namespace std;
///OmegaUp - 5546. Logias

int main()
{
    long long int num, gps;
    cin >> num >> gps;

    long long int kmax = 0;
    long long int g = num - (gps-1);
    kmax = ( (g*g) - g)/(2);

    long long int kmin = 0;
    long long int gp_max = (num%gps);
    long long int gp_min = gps-(num%gps);

    long long int h = (num) / (gps);

    long long int pair1 = ( (h*h) - h) / (2);
    kmin += pair1*gp_min;

    h++;
    long long int pair2 = ( (h*h) - h) / (2);
    kmin += pair2*(gp_max);

    cout << kmin << " " << kmax;

    return 0;
}
