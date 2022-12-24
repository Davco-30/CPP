#include <iostream>

using namespace std;
/// Aaah! - Kattis

int main()
{
    string word, doc;
    cin >> word >> doc;

    if(doc.length() > word.length()){
        cout << "no";
    }

    else{
        cout << "go";
    }

    return 0;
}
