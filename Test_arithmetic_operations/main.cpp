#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int b = 875;
    int c = 410;
    float d = 4.65;

    float q = d/b;
    float w = q*a + b;
    float e = q - w *d;
    float r = (w * w) / e;
    float s = w/8 + 789;
    float y = (423 /r) / (r*s);

    if(s < y){
        r = r*y + (3*s);
    }

    else{
        y = y + q - r;
    }

    for(int i = c; i < 415; i++){
        a = (a + r) - y;
    }

    return 0;
}
