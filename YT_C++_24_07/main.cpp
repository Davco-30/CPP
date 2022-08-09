#include <iostream>

using namespace std;

int main()
{
    /*
    double num_1 = 5.49;
    cout << num_1;
    cin >> num_1;
    cout << num_1;

    cout << "\n";

    float num_2 = 4.8;
    cout << num_2;
    cin >> num_2;
    cout << num_2;
    */

    string word = "Good Bad plot";
    cout << word[14];
    word[4] = 'B';
    cout << "\n" << word << "\n";

    cout << word.find("Bad", 0);

    return 0;
}
