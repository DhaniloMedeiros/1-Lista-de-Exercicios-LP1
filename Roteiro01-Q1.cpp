#include <iostream>

using namespace std;

int main(void){
    static int num, maior;
    
    while(true)
    {
        cout << "Digite um numero:";
        cin >> num;
        if(num > maior)
            maior = num;
        if(num == 0)
            break;
    }
    cout << "\nO maior numero digitado foi = " << maior << endl;
    
    return 0;
}