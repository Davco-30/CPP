#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int colors[n];

    for(int i = 0; i < n; i++){
        cin >> colors[i];
    }

    int flag = 0;
    int pos = 0;

    while(true){
        if(pos > 0){
            flag = 1;
        }

        if(pos == 0){
            flag = 0;
        }

        if(colors[pos] > colors[pos+1] && flag == 0){
            int num = color[pos+1];
            colors[pos+1] = colors[pos];
            colors[pos] = num;
        }

        else if(colors[pos] < colors[pos-1] && flag == 1){
            int num = color[pos-1];
            colors[pos-1] = colors[pos];
            colors[pos] = num;
        }
    }

    return 0;
}
