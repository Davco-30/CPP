#include <iostream>

using namespace std;
///OmegaUp - 11494. Una recurrencia y la altura de su árbol recursivo

int recursion(int num, int height);

int main()
{
    int n;
    cin >> n;

    int result = 0, height = 0;

    if(n <= 5){
        cout << result << " " << height;
    }

    else{
        recursion(n, height);
    }

    return 0;
}

int recursion(int num, int  result, int height){
    if(num > 5){
        recursion( (num-5), height+1);
    }
}
