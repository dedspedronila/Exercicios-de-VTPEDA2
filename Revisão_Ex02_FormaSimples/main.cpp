#include <iostream>
#include <cstdlib>
#define TAM 6
using namespace std;


int main(int argc, char** argv) 
{
    char vetor[TAM], aux;
    int i;
    
    cout << "Informe 6 caracteres, que serão armazenados, exibidos, e após isso trocaremos o elemento da primeira com a da segunda opção!" <<endl;
    cout <<endl;
    for(i = 0; i < TAM; i++){
        cout << "Informe o " << i+1 << " caracter: " ;
        cin >> vetor[i];
    }
    cout <<endl;
    cout << "Agora será exibidos os caracteres!" <<endl;
    for(i = 0; i < TAM; i++){
        cout << "O " <<i+1 <<" º caracter, é: " << vetor[i] <<endl;
    }
    cout <<endl <<endl;
    aux = vetor[0];
    vetor[0] = vetor[1];
    vetor[1] = aux;
    
    
    cout <<endl;
    cout << "Agora será exibidos os caracteres tocados!" <<endl;
    for(i = 0; i < TAM; i++){
        cout << "O " <<i+1 <<" º caracter, é: " << vetor[i] <<endl;
    }
    
    return 0;
}

