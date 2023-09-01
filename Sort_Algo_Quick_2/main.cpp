#include <iostream>

using namespace std;

void print_arr(int arr[], int length);
void quick_sort(int arr[], int start, int ending);

int main()
{
    int length;
    cin >> length;

    int arr[length];

    for(int i = 0 ; i < length; i++){
        arr[i] = rand()%50+1;
    }

    print_arr(arr, length);
    quick_sort(arr, 0, length-1);
    print_arr(arr, length);

    return 0;
}

void quick_sort(int arr[], int start, int ending){
    if(start == ending){
        return;
    }

    ///´Punto medio
    int mid_point = (start + ending)/2;

    ///Pivote
    if( (arr[start] > arr[mid_point] && arr[start] < arr[ending]) || (arr[start] < arr[mid_point] && arr[start] > arr[ending]) ){
        int num = arr[start];
        arr[start] = arr[ending];
        arr[ending] = num;
    }

    if( (arr[mid_point] > arr[start] && arr[mid_point] < arr[ending]) || (arr[mid_point] < arr[start] && arr[mid_point] > arr[ending]) ){
        int num = arr[mid_point];
        arr[mid_point] = arr[ending];
        arr[ending] = num;
    }

    int pivot = arr[ending];

    ///Comparación del arreglo con el pivote
    int greater_it = start;
    int lower_it = ending-1;

    while(greater_it < lower_it){
        while(arr[greater_it] < pivot && greater_it < lower_it){
            greater_it++;
        }

        while(arr[lower_it] > pivot && lower_it > greater_it){
            lower_it--;
        }

        if(arr[greater_it] > pivot && arr[lower_it] < pivot){
            int num = arr[greater_it];
            arr[greater_it] = arr[lower_it];
            arr[lower_it] = num;
        }
    }

    ///Acomodar pivote
    int num = arr[ending];
    arr[ending] = arr[greater_it];
    arr[greater_it] = num;

    ///Llamada recursiva para ambas mitades no sorteada.

    if(lower_it >= start){
        quick_sort(arr, start, lower_it-1);
    }

    if(greater_it <= ending){
        quick_sort(arr, greater_it+1, ending);
    }

}

void print_arr(int arr[], int length){
    cout << "* Array:\t";

    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
