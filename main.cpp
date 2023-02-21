#include <iostream>
#include <string>
using namespace std;

int main() {

    int tentativas = 1;
    int questao1;
    int questao2;

    string quiz[10];

    quiz[0] = "Qual dessas revoltas do periodo colonial aconteceu no Maranhao? \n1) Revolta de backman \n2) Conjuracao Baiana \n3) Inconfidencia Mineira \n4) Revolta dos Emboabas";
    quiz[1] = "Qual das alternativas representa o principal material exportado no periodo pré colonial? \n1) Ouro \n2) Cana de Açucar \n3)Café \n4)Pau-Brasil)";
    cout << quiz[0];
    cout << "\nSeletor: ";
    cin >> questao1;

    while (questao1 != 1) {

        cout << "Questao incorreta, tente novamente!\n";
        cout << quiz[0];
        cout << "\nSeletor: ";
        cin >> questao1;

        tentativas++;
    }

    cout << "Alternativa correta, você acertou em " + tentativas;

    cout << quiz[1];
    cin >> questao2;

    while (questao2 != 4) {

        cout << quiz[1];
        cin >> questao2;

    }

    return 0;

}

