#include <iostream>

using namespace std;
///Crear una función que reciba un string y cualquier cantidad de parámetros adicionales que quieras y debe de
///retornar el string inicial invertido

string invert(string word, int index, string result);
string invert2(string word);

int main()
{
    string word;
    cin >> word;

    int index = word.length();
    string result = "";

    cout << invert(word, index, result) << "\n";
    cout << invert2(word);

    return 0;
}

string invert2(string word){
    if(word == ""){ ///word = goop >> goo >> go >> g >> ""
        return "";
    }

    char last = word[word.length()-1];  ///last = d >> o >> o >> g
    word.pop_back();    ///word = goo (3) >> go(2) >> g(1) >> (0)
    return last+invert2(word);  /// d+invert2(goo) >> o+invert2(go) >> o+invert2(g) >> g+invert2()
}

string invert(string word, int index, string result){
    index--;
    if(index == -1){
        return result;
    }

    result += word[index];

    /*cout << "index: " << index << endl;
    cout << "result: " << result << endl;*/

    return invert(word, index, result);
}
