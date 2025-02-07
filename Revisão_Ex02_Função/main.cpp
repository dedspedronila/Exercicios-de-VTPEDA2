#include <iostream>
#include <cstdlib>
#define TAM 6
using namespace std;

void obterCaracteres(char *vetor);
void exibirCaracteres(char *vetor);
void trocaCaracteres(char *vetor);

int main(int argc, char** argv) {
    char vetor[TAM];
    obterCaracteres(vetor);
    exibirCaracteres(vetor);
    trocaCaracteres(vetor);
    exibirCaracteres(vetor);
    return 0;
}

void obterCaracteres(char *vetor){
    cout << "Informe 6 caracteres, que serão armazenados, exibidos, e após isso trocaremos o elemento da primeira com a da segunda opção!" <<endl;
    cout <<endl;
    for(int i = 0; i < TAM; i++){
        cout << "Informe o " << i+1 << " caracter: " ;
        cin >> vetor[i];
    }
    cout <<endl;
}
void exibirCaracteres(char *vetor){
cout << "Agora será exibidos os caracteres!" <<endl;
    for(int i = 0; i < TAM; i++){
        cout << "O " <<i+1 <<" º caracter, é: " << vetor[i] <<endl;
    }
cout <<endl;
}
void trocaCaracteres(char *vetor){
    char aux;
    aux = vetor[0];
    vetor[0] = vetor[1];
    vetor[1] = aux;
}