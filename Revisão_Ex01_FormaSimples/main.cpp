#include <iostream>
#include <cstdlib>
#define TAM 10
using namespace std;


int main(int argc, char** argv) 
{
    int vetor[TAM], i;
    
    cout << "Informe agora, 10 números positivos, que serão armazenados em um vetor e exibidos em sua ordem normal e em inversa!" <<endl;
    for(i = 0; i < TAM;){
      cout << "Digite o " << i+1 << " número:" <<endl;
      cin >> vetor[i];
      if(vetor[i] < 0){
          cout << "Número inválido, por favor digite o número novamente!" <<endl;
      }
      else{
          i++;
      }
    }
    cout << "Agora será exibido, os números que foram armazenados no vetor!, em sua ordem normal! " <<endl;
    
    for(i = 0; i < TAM; i++){
        cout << "O " <<i+1 <<" º número, é: " << vetor[i] <<endl;
    }
    cout <<endl <<endl;
    cout << "Agora será exibido, os números que foram armazenados no vetor!, em sua ordem inversa! " <<endl;
    for(i = TAM-1; i >= 0; i--){
        cout << "O " <<i+1 <<" º número, é: " << vetor[i] <<endl;
    }
    
    return 0;
}

