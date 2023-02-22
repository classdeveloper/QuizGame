#include <iostream>
#include <string>
using namespace std;

int main() {

    int seletor;
    char questao1;
    char questao2;
    char questao3;
    char questao4;
    char questao5;
    char questao6;
    char questao7;
    char questao8;
    char questao9;
    char questao10;
    char questao11;
    char questao12;

    string quiz[15];

    // QUESTÕES:
    // HISTORIA
    quiz[1] = "Qual dessas revoltas do periodo colonial aconteceu no Maranhao? \na) Revolta de backman \nb) Conjuracao Baiana \nc) Inconfidencia Mineira \nd) Revolta dos Emboabas";
    quiz[2] = "Qual das alternativas representa o principal material exportado no periodo pre colonial? \na) Ouro \nb) Cana de Acucar \nc)Cafe \nd)Pau-Brasil";
    quiz[3] = "Qual foi o primeiro governador geral do Brasil? \na) Mem de Sa \nb) Tome de Sousa \nc) Duarte da Costa z\nd) Pedro Alvares Cabral";
    quiz[4] = "Qual das capitanias hereditarias seguintes foram as unicas a da certo? \na) Sao Vicente e Pernambuco \nb) Bahia de Todos os Santos e Ilheus \nc) Ceara e Santana \nd) Itamaraca e Porto Seguro";
    quiz[5] = "Qual das revoltas a seguir do periodo imperial aconteceu no Rio Grande do Sul? \na) Guerra do Paraguai \nb) Guerra dos Farrapos \nc) Revolta dos Males \nd) Sabinada \ne) Cabanagem";

    // LITERATURA
    quiz[6] = "O Quinhentismo e uma manifestacao literaria que teve inicio no século XVI no Brasil e reuniu diversos textos de carater: \na) amoroso, religioso e pedagógico \nb) pedagógico, religioso e informativo \nc) informativo, religioso e amoroso \nd) nacionalista, religioso e místico \ne) místico, nacionalista e amoroso\n";
    quiz[7] = "Enquanto surgia a literatura brasileira no Brasil, na Europa outro movimento baseado no humanismo, racionalismo e cientificismo se consolidava. Esse movimento foi o: \na) Barroco \nb) Arcadismo \nc) Realismo \nd) Romantismo \n e) Classicismo";

    // PORTUGUÊS
    quiz[8] = "Na frase “O lugar onde se vende carne chama-se ______.” A palavra que preenche a lacuna corretamente e: \na) açogue \nb) assogue \nc) açouge \nd) asougue \ne) açougue)";
    quiz[9] = "“A professora pediu que abrissem os cadernos e escrevessem o ______.” A escrita correta da palavra e: \na) cabeçário \nb) cabeçalho \nc) cabessalho \nd) cabezalio \ne) cabeçalo\n";



    cout << quiz[1];
    cout << "\nSeletor: ";
    cin >> questao1;

    while (questao1 != 'a') {

        cout << "Questao incorreta, tente novamente!\n";
        cout << quiz[1];
        cout << "\nSeletor: ";
        cin >> questao1;

    }

    cout << "Alternativa correta\n";

    cout << quiz[2];
    cout << "\nSeletor: ";
    cin >> questao2;

    while (questao2 != 'd') {

        cout << "Questao incorreta, tente novammente!\n";
        cout << quiz[2];
        cin >> questao2;

    }

    cout << "Alternativa correta\n";

    cout << quiz[3];
    cout << "\nSeletor: ";
    cin >> questao3;

    while (questao3 != 'b') {

        cout << "Questao incorreta, tente novamente!\n";
        cout << quiz[3];
        cout << "Seletor: ";
        cin >> questao3;

    }

    cout << "Alternativa correta\n";

    cout << quiz[4];
    cout << "\nSeletor: ";
    cin >> questao4;

    while (questao4 != 'a') {

        cout << "Questao incorreta, tente novamente!\n";
        cout << quiz[4];
        cout << "\nSeletor: ";
        cin >> questao4;

    }

    cout << "Alternativa correta\n";

    cout << quiz[5];
    cout << "\nSeletor: ";
    cin >> questao5;

    while (questao5 != 'b') {

        cout << "Questao incorreta, tente novamente!\n";
        cout << quiz[5];
        cout << "\nSeletor: ";
        cin >> questao5;

    }

    cout << "Alternativa correta\n";

    cout << quiz[6];
    cout << "\nSeletor: ";
    cin >> questao6;

    while (questao6 != 'b') {

        cout << "Questao incorreta, tente novamente!\n";
        cout << quiz[6];
        cout << "\nSeletor: ";
        cin >> questao6;

    }

    cout << "Alternativa correta!\n";

    cout << quiz[7];
    cout << "\nSeletor: ";
    cin >> questao7;

    while (questao7 != 'e') {

        cout << "Questao incorreta, tente novamente!\n";
        cout << quiz[7];
        cout << "\nSeletor: ";
        cin >> questao7;

    }

    cout << "Alternativa correta!\n";

    cout << quiz[8];
    cout << "\nSeletor: ";
    cin >> questao8;

    while (questao8 != 'e') {

        cout << "Questao incorreta, tente novamente!\n";
        cout << quiz[8];
        cout <<  "\nSeletor: ";
        cin >> questao8;

    }

    cout << "Alternativa correta!\n";

    cout << quiz[9];
    cout << "\nSeletor: ";
    cin >> questao9;

    while (questao9 != 'b') {

        cout << "Questao incorreta, tente novamente!\n";
        cout << quiz[9];
        cout << "\nSeletor: ";
        cin >> questao9;

    }

    cout << "Alternativa correta!\n";

    return 0;

}

