#include <iostream>
#include "Afin.h"
#include <string>
#include "PlayFair.h"

using namespace std;

int main()
{
    Affine afin;
    PlayFair playfair;

    string text, text2;
    int a, b;

    cout << "Introducir mensaje: \n";
    getline(cin, text);

    cout << "Introducir a: "; cin >> a;
    cout << "Introducir b: "; cin >> b;
    cout << afin.cifrar(a, b, text);

    cout << "Introducir mensaje: \n";
    getline(cin, text2);
    playfair.printMat();
    cout << endl;
    cout<<playfair.process(text);
}
