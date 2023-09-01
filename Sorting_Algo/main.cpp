#include <iostream>

using namespace std;

int arr[10] = {19,2,15,6,12,10,8,3,5,11};

void swap_nums(int *num_1, int *num_2);
void quick_sort(int start, int finale);
///Dato: Quick_sort es utilizado por sort().

int main()
{
    /*
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = rand()%1000 + 1;
        cout << arr[i] << " ";
    }

    cout << endl;*/

    ///Quick sort

    quick_sort(0,9);

    ///[4,2,3,6,12,10,8,7,5]: 4 - 12 - 5 => 4 - 5 - 12, Pivote: 5. El pivote estará al final del arreglo y durante la búsqueda
    ///[4,2,3,5,12,10,8,7,6]
    ///Ve de izquierda a derecha hasta encontrar un elemento mayor que el pivote.
    ///Después, ve de izquierda a derecha para encontrar un elemento menor que el pivote
    ///Cuando encuentres ambos, verificas que el elemento mayor esté a la izquierda del elemento menor.
    ///Si se cumple, intercambia ambos elementos y sigue buscando. Si no, terminas el ciclo.

    ///Radix sort
    /*
    int bucket[1000] = {0};

    for(int i = 0; i < n; i++){
        bucket[arr[i]]++;
    }

    int i = 0, pos = 0;

    while(i < 1000){
        if(bucket[i] > 0){
            arr[pos] = i;
            bucket[i]--;
            pos++;
        }

        else{
            i++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }*/

    ///Bubble sort
    /*
    for(int i = 0; i < n; i++){         ///O(n^2)
        for(int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                swap_nums(&arr[j] , &arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    ///[1,4,5,3,2,10]

    ///[1,4,3,5,2,10]
    ///[1,4,3,2,5,10]

    ///[1,4,2,3,5,10]
    ///[1,3,2,4,5,10]
    ///[1,2,3,4,5,10]
*/


    return 0;
}

void quick_sort(int start, int finale){
    if(start == finale){
        return;
    }

    int middle = (start+finale)/2;

//    cout << arr[start] << "\t" << arr[middle] << "\t" << arr[finale] << endl;

    if( (arr[start] > arr[finale] && arr[start] < arr[middle]) || (arr[start] < arr[finale] && arr[start] > arr[middle]) ){
        int num = arr[start];
        arr[start] = arr[finale];
        arr[finale] = num;
    }

    else if( (arr[middle] > arr[finale] && arr[middle] < arr[start]) || (arr[middle] < arr[finale] && arr[middle] > arr[start]) ){
        int num = arr[middle];
        arr[middle] = arr[finale];
        arr[finale] = num;
    }

    int pivot = arr[finale];

    for(int i = 0; i <= finale; i++){
        cout << arr[i] << " ";
    }

    cout << "\nPivot: " << pivot << endl;

    int greater_it = start, lower_it = finale-1;

    while(greater_it < lower_it){

        while(greater_it <= lower_it && arr[greater_it] < pivot){
            greater_it++;
        }

        while(lower_it >= greater_it && arr[lower_it] > pivot){
            lower_it--;
        }

        if(greater_it < lower_it){
            int num = arr[greater_it];
            arr[greater_it] = arr[lower_it];
            arr[lower_it] = num;
        }

    }

    int num = arr[greater_it];
    arr[greater_it] = arr[finale];
    arr[finale] = num;

    if(greater_it+1 < finale){
        quick_sort(greater_it+1, finale);
    }

    if(lower_it > start){
        quick_sort(start, lower_it);
    }

    for(int i = 0; i <= finale; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

//    for(int i = 0; i < finale; i++){
//        if(arr[i] > pivot){
//            int big = i;
//
//            for(int j = i+1; j < finale; j++){
//                if(arr[j] < pivot){
//                    int num = arr[big];
//                    arr[big] = arr[j];
//                    arr[j] = num;
//
//                    break;
//                }
//            }
//        }
//    }
//
//    for(int i = 0; i <= finale; i++){
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//
//    for(int i = 0; i <= finale; i++){
//        if(arr[i] > arr[finale]){
//            int num = arr[i];
//            arr[i] = arr[finale];
//            arr[finale] = num;
//            break;
//        }
//    }
//
//    for(int i = 0; i <= finale; i++){
//        cout << arr[i] << " ";
//    }
}

void swap_nums(int *num_1, int *num_2){
    int rep = *num_1;
    *num_1 = *num_2;
    *num_2 = rep;
}
