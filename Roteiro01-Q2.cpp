#include <iostream>
#include <stdlib.h> //srand, rand
#include <time.h>   //seed time
using namespace std;

int main(void)
{
    int aleatorio;
    int chute;

    srand(time(NULL));

    aleatorio = rand() % 100 + 1;
    
    do
    {
        cout << "Adivinhe o numero entre 1 e 100" << endl;
        cin >> chute;
        if(chute < aleatorio)
            cout << "Muito baixo. Tente novamente" << endl;
        else if(chute > aleatorio)
            cout << "Muito alto. Tente novamente" << endl;
        
    } while (chute != aleatorio);
    
    cout << "Parabens. Voce adivinhou o numero!" << endl;
    return 0;
}