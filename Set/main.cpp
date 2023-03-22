#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> myset;

    myset.insert(8);
    myset.insert(8);
    myset.insert(74);
    myset.insert(90);
    myset.insert(8);
    myset.insert(9);
    myset.insert(10);
    myset.insert(18);

    for(set<int>::iterator i = myset.begin(); i != myset.end(); i++){
        cout << *i << endl;
    }

    cout << *myset.end() << endl;

    cout << *myset.find(8) << endl;

    if(myset.find(63) != myset.end()){
        cout << "Si estaba.";
    }

    else{
        cout << "No estaba";
    }

    return 0;
}
