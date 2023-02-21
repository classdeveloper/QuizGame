#include <iostream>
#include <string>
using namespace std;

int main() {

    int tentativas = 1;
    int questao1;
    int questao2;
    int questao3;

    string quiz[10];

    // QUESTÕES
    quiz[0] = "Qual dessas revoltas do periodo colonial aconteceu no Maranhao? \n1) Revolta de backman \n2) Conjuracao Baiana \n3) Inconfidencia Mineira \n4) Revolta dos Emboabas";
    quiz[1] = "Qual das alternativas representa o principal material exportado no periodo pre colonial? \n1) Ouro \n2) Cana de Acucar \n3)Cafe \n4)Pau-Brasil";
    quiz[2] = "Qual foi o primeiro governador geral do Brasil? \n1) Mem de Sá \n2) Tome de Sousa \n3) Duarte da Costa z\n4) Pedro Alvares Cabral";
    quiz[4] = "Qual das capitanias hereditarias seguintes foram as unicas a da certo? \n1) São Vicente e Pernambuco \n2) Bahia de Todos os Santos e Ilheus \n3) Ceara e Santana \n4) Itamaraca e Porto Seguro";


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

    cout << "Alternativa correta\n";

    cout << quiz[1];
    cout << "\nSeletor: ";
    cin >> questao2;

    while (questao2 != 4) {

        cout << quiz[1];
        cin >> questao2;

    }

    return 0;

}

