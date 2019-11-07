#include <iostream>
#include <stdlib.h> //srand, rand
#include <time.h>   //seed time

using namespace std;

int main(void)
{
    int lancamento;
    float vetor_porcentagem[6] = {0};
    int i;
    int dado;
    
    cout << "Digite o numero de lancamentos" << endl;
    cin >> lancamento;

    srand(time(NULL)); //inicializando o rand

    for(i = 0; i < lancamento; i++)
    {
        dado = rand() % 6;
        switch (dado)
        {
            case 0:
                vetor_porcentagem[dado]++;
                break;
            case 1:
                vetor_porcentagem[dado]++;
                break;
            case 2:
                vetor_porcentagem[dado]++;
                break;
            case 3:
                vetor_porcentagem[dado]++;
                break;
            case 4:
                vetor_porcentagem[dado]++;
                break;
            case 5:
                vetor_porcentagem[dado]++;
                break;
        }
    }
    //for-each
    i = 1;
    for(float j : vetor_porcentagem)
    {
        cout << j/lancamento * 100 << "% de surgimento do lado " << i << endl;
        i ++;
    }
    
    
    return 0;
}