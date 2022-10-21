#include <iostream>

using namespace std;

bool question(int valor){
    cout << "Tu número es mayor a " << valor << "?.\n";
    string answer;
    cin >> answer;

    if(answer == "si"){
        return true;
    }

    return false;
}

void search_bin(){
    int left = 1;
    int right = 100;

    while(left + 1 < right){
        int mid = (left + right)/(2);
        if(question(mid)){
            left = mid + 1;
        }

        else{
            right = mid;
        }
    }

    cout << "Tú número es " << left << "?\n";

    string answer;
    cin >> answer;

    if(answer == "si"){
        cout << "El número secreto es " << left;
    }

    else{
        cout << "El número secreto es " << right;

    }

}

int main()
{
    search_bin();
    return 0;
}
