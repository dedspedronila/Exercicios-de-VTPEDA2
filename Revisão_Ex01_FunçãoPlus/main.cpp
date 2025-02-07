#include <iostream>
#include <cstdlib>
#define TAM 10
using namespace std;

void obterNumeros(int *vetor);
void exibirOrdemNormal(int *vetor);
void exbirOrdemInversa(int *vetor);
void verificaNumeros(int *vetor);
int main(int argc, char** argv) 
{
    int vetor[TAM];
    obterNumeros(vetor);
    verificaNumeros(vetor);
    exibirOrdemNormal(vetor);
    exbirOrdemInversa(vetor);
    return 0;
}

void obterNumeros(int *vetor){
    cout << "Informe agora, 10 números positivos, que serão armazenados em um vetor e exibidos em sua ordem normal e em inversa!" <<endl;
    for(int i = 0; i < TAM;){
      cout << "Digite o " << i+1 << " número:" <<endl;
      cin >> vetor[i];
      if(vetor[i] < 0){
          cout << "Número inválido, por favor digite o número novamente!" <<endl;
      }
      else{
          i++;
      }
    }
}

void exibirOrdemNormal(int *vetor){
for(int i = 0; i < TAM; i++){
        cout << "O " <<i+1 <<" º número, é: " << vetor[i] <<endl;
    }
cout <<endl;
}

void exbirOrdemInversa(int *vetor){
    cout <<endl;
for(int i = TAM-1; i >= 0; i--){
        cout << "O " <<i+1 <<" º número, é: " << vetor[i] <<endl;
    }
    
}

void verificaNumeros(int *vetor){
    for(int i = 0; i < TAM; i++){
        if(vetor[0] > vetor[1]){
        int aux;
        aux = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = aux;
        }
        else if(vetor[1] > vetor[2]){
           
        int aux = vetor[1];
        vetor[1] = vetor[2];
        vetor[2] = aux;
        }
    
    }
}
