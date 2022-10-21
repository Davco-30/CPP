#include <iostream>

using namespace std;

int main()
{
    int cases;
    cin >> cases;

    for(int i = 1; i <= cases; i++){
        int tall = 0, shot = 0;
        int walls;
        cin >> walls;

        int list1[walls];

        for(int j = 0; j < walls; j++){
            int num;
            cin >> num;

            list1[j] = num;
        }

        for(int j = 0; j < walls-1; j++){
            if(list1[j+1] > list1[j]){
                tall++;
            }

            else if(list1[j+1] < list1[j]){
                shot++;
            }
        }

        cout << "Case " << i << ": " << tall << " " << shot << "\n";
    }
    return 0;
}
