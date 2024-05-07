/* Imprimir los numeros pares hasta 300*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;

    while(i <=300)
    {
        i++;
        if (i %2 ==0)
        cout << "Num: " << i << endl;
    }
    return 0;
}
