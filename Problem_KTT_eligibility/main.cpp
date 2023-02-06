#include <iostream>

using namespace std;
///Kattis - eligibility

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string name, date1, date2;
        int courses, year1 = 0, year2 = 0, mult = 1000;

        cin >> name >> date1 >> date2 >> courses;

        for(int j = 0; j < 4; j++){
            int digit = date1[j];
            digit -= '0';
            digit *= mult;

            year1 += digit;
            mult /= 10;
        }

        mult = 1000;

        for(int j = 0; j < 4; j++){
            int digit = date2[j];
            digit -= '0';
            digit *= mult;

            year2 += digit;
            mult /= 10;
        }

        if(year1 >= 2010 || year2 >= 1991){
            cout << name << " eligible" << endl;
            continue;
        }

        if(year1 < 2010 && year2 < 1991 && courses >= 41){
            cout << name << " ineligible" << endl;
            continue;
        }

        cout << name << " coach petitions" << endl;
    }

    return 0;
}
