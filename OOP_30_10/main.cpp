#include <iostream>

using namespace std;

class Person{
private:
    int age;
    string name;

public:
    void read();
    void correr();

    Person(int,string);
};

///:: Después de esos cuatro puntos, me indican el nombre de constructor. Antes de esos ::, se dice que pertenece a la clase Person

Person::Person(int _edad, string _nombre){
    age = _edad;
    name = _nombre;
}

void Person::read(){
    cout << "soy " << name << " estoy leyendo un libro " << "y tengo " << age << " anios " << endl;
}

void Person::correr(){
    cout << "soy " << name << ", tengo " << age << " y estoy corriendo una maratón." << endl;
}

int main()
{
    Person P1 = Person(18,"David");
    Person P2 = Person(16,"André");
    Person P3 = Person(20,"Zuriel");
    P1.read();
    P2.correr();
    P3.read();
    P3.correr();

    return 0;
}
