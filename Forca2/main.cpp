#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    string palavra;
    int chances = 6;

    cout << "Escolha uma palavra: ";
    getline(cin,palavra);
    system("cls");

    int tamanho = palavra.size();

    string secreta;

    for(int i = 0; i < tamanho; i++){
        if(palavra[i] != ' '){
            secreta.push_back('-');
        }else{
            secreta.push_back(palavra[i]);
        }
    }

    while(chances > 0 && palavra != secreta){
        char escolha;
        bool acerto = false;
        cout << "numero de chances: " << chances << "\n\n";
        cout << secreta << "\n\n";
        cout << "escolha uma letra: ";
        cin >> escolha;

        for(int i = 0; i < tamanho; i++){
            if(palavra[i] == escolha){
                secreta[i] = escolha;
                acerto = true;
            }
        }

        if(!acerto){
            chances--;
        }

        system("cls");

    }
    if(palavra == secreta){
        cout << "PARABENS :)\n";
    }else{
        cout << "TENTE NOVAMENTE :(\n";
    }
}
