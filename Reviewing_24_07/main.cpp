#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    ///1
    /*
    cout << "Type a number.\n";
    float num_1;
    cin >> num_1;

    cout << "\nThe number you just typed is " << num_1 << ".\n";

    cout << "Now type another number.\n";
    float num_2;
    cin >> num_2;

    int addition = num_1 + num_2;
    cout << "\nThe sum of " << num_1 << " and " << num_2 << " is: " << addition << ".\n";

    int substraction = num_1 - num_2;
    cout << "The substraction between " << num_1 << " and " << num_2 << " is: " << substraction << ".\n";

    int multiplication = num_1 * num_2;
    cout << "The product of " << num_1 << " and " << num_2 << " is: " << multiplication << ".\n";

    float division = num_1 / num_2;
    cout << "The quotient of " << num_1 << " and " << num_2 << " is: " << division << ".\n";

    float root_1 = sqrt(num_1);
    cout << "The root of " << num_1 << " is: " << root_1 << ".\n";

    float root_2 = sqrt(num_2);
    cout << "The root of " << num_2 << " is: " << root_2 << ".\n";
    */

    ///2
    float a, b;
    float formula = 0;

    cout << "Type a number.\n";
    cin >> a;

    cout << "\nThe number you just typed is " << a << ".\n";

    cout << "Now type another number.\n";
    cin >> b;

    formula = sqrt((a/b)/2);

    cout.presicion(2);
    cout << "The result is: " << formula << ".\n";

    return 0;
}
