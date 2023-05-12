#include <iostream>

using namespace std;

class nodo{
    public:
        int valor;
        nodo *siguiente;
};

nodo *inicio = NULL;
///Insertamos un nuevo nodo en la lista
void insertnum(int n);
///Imprimimos los valores que hay en la lista
void check();
///Cómo crear una función de eliminar el primer elemento?
void delete_first();
///Función find que recibe un parámetro (int x) que regresa verdadero si x está en la lista y falso si no.
bool find_x(int x);
///Insertar un elemento al final de la lista
void insert_end(int n);

int main()
{
    insertnum(8);
    insertnum(78);
    insertnum(4);
    insertnum(32);
    delete_first();
    delete_first();
    check();
    cout << find_x(8) << endl;
    cout << find_x(4) << "\n" << endl;
    insert_end(5);
    check();
    return 0;
}

void insert_end(int n){
    nodo *insert_num = inicio;

    while( (insert_num->siguiente) != NULL ){
        insert_num = insert_num->siguiente;
    }

    nodo *nuevo = new nodo();
    nuevo->valor = n;
    nuevo->siguiente = NULL;
    insert_num->siguiente= nuevo;
}

bool find_x(int x){
    nodo *finder = inicio;

    while(finder != NULL){
        if( (finder->valor) == x){
            return true;
        }

        finder = finder->siguiente;
    }

    return false;
}

void delete_first(){
    inicio = inicio->siguiente;
}

void check(){
    nodo *checker = inicio;

    while(checker != NULL){
        cout << (checker->valor) << endl;
        checker = checker->siguiente;
    }

}

void insertnum(int n){
    if(inicio == NULL){
        nodo *nuevo = new nodo();
        nuevo->valor = n;
        nuevo->siguiente = NULL;
        inicio = nuevo;
    }

    else{
        nodo *nuevo = new nodo();
        nuevo->valor = n;
        nuevo->siguiente = inicio;
        inicio = nuevo;
    }
}
