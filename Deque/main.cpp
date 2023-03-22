#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> mydeque;

    mydeque.empty();

    mydeque.push_back(8);
    mydeque.push_back(28);
    mydeque.push_front(7);
    mydeque.push_back(14);
    mydeque.push_front(3);
    mydeque.push_front(4);

    cout << mydeque.front() << endl;
    cout << mydeque.back() << endl;

    mydeque.pop_back();
    mydeque.pop_front();
    cout << mydeque.back() << endl;
    cout << mydeque.front() << endl;

    return 0;
}
