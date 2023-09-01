#include <iostream>

using namespace std;

int arr[10] = {7,2,6,3,9,10,2,5,11,1};

void quick_sort(int start, int finale);
void print_array(int length);

int main()
{
    cout << "Arreglo dado:\n";
    print_array(10);
    cout << "\n" << endl;

    quick_sort(0, 9);

    cout << "Arreglo sorteado:\n";
    print_array(10);
    return 0;
}

void quick_sort(int start, int finale){
    if(start == finale){
        return;
    }

    int middle = (start+finale)/2;

    if( (arr[start] > arr[middle] && arr[start] < arr[finale]) || (arr[start] < arr[middle] && arr[start] > arr[finale]) ){
        int num = arr[start];
        arr[start] = arr[finale];
        arr[finale] = num;
    }

    else if( (arr[middle] > arr[start] && arr[middle] < arr[finale]) || (arr[middle] < arr[start] && arr[middle] > arr[finale]) ){
        int num = arr[middle];
        arr[middle] = arr[finale];
        arr[finale] = num;
    }

    int pivot = arr[finale];

//    cout << "Pivot: " << pivot << endl;

    int left_check = start;
    int right_check = finale-1;

//    cout << "+ Original:" << endl;
//    print_array(10);
    while(left_check < right_check){

        while(left_check < right_check && arr[left_check] < pivot){
            left_check++;
        }

        while(right_check > left_check && arr[right_check] > pivot){
            right_check--;
        }

        if(arr[left_check] > pivot && arr[right_check] < pivot){
            int num = arr[left_check];
            arr[left_check] = arr[right_check];
            arr[right_check] = num;
        }
    }

    int value = pivot;
    arr[finale] = arr[left_check];
    arr[left_check] = value;

    right_check--;
    left_check++;

//    cout << "* Sorteado: " << endl;
//    print_array(10);
//    cout << endl;

//    cout << "Right_ch: " << arr[right_check] << "\tLeft_ch: " << arr[left_check] << endl;

    if(left_check <= finale){
        quick_sort(left_check, finale);
    }

    if(right_check >= start){
        quick_sort(start, right_check);
    }

}

void print_array(int length){
    cout << "Arreglo:\t";
    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}
