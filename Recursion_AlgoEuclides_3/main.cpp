#include <iostream>

using namespace std;
///Algoritmo de Euclides
///27  36
///27  9
///18  9
///9   9 = MCD

int divisor(long long int num1, long long int num2);
int divisor2(long long int num1, long long int num2);

int main()
{
    long long int num1, num2;
    cin >> num1 >> num2;

    cout << divisor(num1, num2);
    return 0;
}
///100000000000000000 1
///72 18

///1er método - Modulo
int divisor(long long int num1, long long int num2){
    if(num1 == 0){
        return num2;
    }

    else if(num2 == 0){
        return num1;
    }

    if(num1 > num2){
        return divisor(num1%num2,num2);
    }

    else if(num1 < num2){
        return divisor(num1,num2%num1);
    }
}

///2do método - División
int divisor2(long long int num1, long long int num2){
    if(num1 == num2){
        return num1;
    }

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    if(num1 > num2){
        if((num1/num2) == 1){
            return divisor(num1-((num1/num2))*num2,num2);
        }

        else{
            return divisor(num1-((num1/num2)-1)*num2,num2);
        }
    }

    else if(num1 < num2){
        if((num2/num1) == 1){
            return divisor(num1,num2-((num2/num1))*num1);
        }

        else{
            return divisor(num1,num2-((num2/num1)-1)*num1);
        }
    }
}
