#include <iostream>

using namespace std;

void imprimirNum();

int main(int argc, char const *argv[])
{
    imprimirNum();
    return 0;
}

void imprimirNum(){
    for(int i = 90; i>=80; i--){
        cout << i << endl;
    }
}
