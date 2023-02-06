#include <iostream>

using namespace std;
///Kattis - Missing Numbers

int main()
{
    int n;
    cin >> n;

    int arr1[n];

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int j = 1, index = 0, mark = 0;

    while(j <= arr1[n-1]){
        //cout << "j: " << j << endl;
        if(j != arr1[index]){
            mark = 1;
            cout << j << endl;
            j++;
        }

        else{
            index++;
            j++;
        }
    }

    if(mark == 0){
        cout << "good job";
    }

    return 0;
}
