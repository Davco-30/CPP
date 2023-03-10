#include <iostream>

using namespace std;

int main()
{
    int t;    //Number of words/testcases
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, num_distintos = 0;
        string word; //Length of a word
        cin >> n >> word;

        int arr1[26] = {0};

        ///2
        for(int j = 0; j < n; j++){
            arr1[word[j]-'A']++;
        }

        for(int j = 0; j <=25; j++){
            if(arr1[j] > 0){
                num_distintos++;
            }
        }

        cout << num_distintos+n << endl;

        ///1
        /*
        for(int j = 0; j < n; j++){
            char letter = word[j];
            int cantidad = 0;

            for(int k = j; k < n; k++){ ///ELEMENTO
                if(word[k] == letter){  ///31211111
                    cantidad++;
                }
            }

            if(cantidad == 1){
                num_distintos++;
            }
        }

        cout << n + num_distintos << endl;
        */
    }

    return 0;
}
