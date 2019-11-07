#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main(void)
{
    int jogadores[24] = {0};
    int voto, i, maior ;
    float porcentagem;
    int total_votos = 0;

    cout << "Enquete, quem foi o melhor jogador?\n" << endl;

    while(jogadores[0] == 0) //se alguem votar no 0 o while para
    {
        cout << "Vote no melhor jogador, ou digite 0 para sair:";
        cin >> voto;
        

        if(voto >= 24)
            cout << "Numero invalido, tente novamente." << endl;
        else
        {
            jogadores[voto]++;
            total_votos++;//contagem de votos
        }
    }
    
    total_votos--;// pois ele conta o voto no 0

    i = 0;// vou usar pra pular a primeira rodada do for
    for(int cont : jogadores)
    {
        if(i == 0)
        {
            cout << "Resultado da votacao:\n" << endl;
            cout << "Foram computados " << total_votos << " votos." << endl;
            cout << "Jogador\tVotos\tPorcentagem" << endl;
            i++;
            maior = i;
            continue;
        }
        else
        {
           if(cont != 0)
           {
                porcentagem = (float) cont/total_votos * 100.0;
                cout << setprecision(3) << i << "\t" << cont << "\t" << porcentagem << endl;
                if(cont > jogadores[maior])
                    maior = i;
           } 
        }
        i++;
    }
    porcentagem = (float) jogadores[maior]/total_votos * 100.0;
    cout << "\nO melhor jogador foi o numero " << maior << ", com " << jogadores[maior];
    cout << setprecision(3) <<" votos.\nCorrespondendo a " << porcentagem << "% do total de votos." << endl;
    return 0;
}