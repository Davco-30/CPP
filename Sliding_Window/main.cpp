#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n;

    int arr1[n];

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    cin >> k;

    ///1st process
    int sum = 0, res = n;
    int left = 0, right = -1;

    while(right < n){
        /*cout << "izq: " << left << endl;
        cout << "der: " << right << endl;
        cout << "sum: " << sum << endl;
        cout << endl;*/

        if(sum < k){
            right++;
            sum += arr1[right];
        }

        else{
            if( (right-left+1) < res ){
                res = right-left+1;
            }

            sum -= arr1[left];
            left++;
        }
    }

    cout << res << endl;

    ///2nd process
    /*
    int length = n;

    for(int i = 0; i < n; i++){
        int sum = 0, sub_size = 0;

        for(int j = i; j < n; j++){
            sum += arr1[j];
            sub_size++;

            if(sum >= k){
                if(sub_size < length){
                    length = sub_size;
                }

                break;
            }
        }
    }

    cout << length << endl;
    */
    return 0;
}
