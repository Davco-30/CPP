#include <iostream>

using namespace std;

class Rectangle{
private:
    float largo, ancho;

public:
    void perimeter();
    void area();

    Rectangle(float, float);
};

Rectangle::Rectangle(float _largo, float _ancho){
    largo = _largo;
    ancho = _ancho;
}

void Rectangle::perimeter(){
    float _perimeter;
    _perimeter = (2*largo) + (2*ancho);
    cout << "perímetro es: " << _perimeter << endl;
}

void Rectangle::area(){
    float _area;
    _area = largo * ancho;
    cout << "área es: " << _area << endl;
}

int main()
{
    Rectangle r1(11, 7);
    r1.perimeter();
    r1.area();

    return 0;
}
