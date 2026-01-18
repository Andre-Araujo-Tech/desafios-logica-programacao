#include <iostream>
#include <string>

using namespace std;

// Classe que representa um herói
class Heroi {
public:
    string nome;
    int idade;
    string tipo;

    // Método atacar
    void atacar() {
        string ataque;

        if (tipo == "mago") {
            ataque = "magia";
        }
        else if (tipo == "guerreiro") {
            ataque = "espada";
        }
        else if (tipo == "monge") {
            ataque = "artes marciais";
        }
        else if (tipo == "ninja") {
            ataque = "shuriken";
        }
        else {
            ataque = "um ataque desconhecido";
        }

        cout << "O " << tipo << " atacou usando " << ataque << endl;
    }
};

int main() {

    Heroi heroi;
    char continuar;

    do {
        cout << "Digite o nome do heroi: ";
        getline(cin, heroi.nome);

        cout << "Digite a idade do heroi: ";
        cin >> heroi.idade;
        cin.ignore();

        cout << "Digite o tipo do heroi (mago, guerreiro, monge, ninja): ";
        getline(cin, heroi.tipo);

        cout << endl;
        heroi.atacar();

        cout << "\nDeseja criar outro heroi? (s/n): ";
        cin >> continuar;
        cin.ignore();

        cout << endl;

    } while (continuar == 's' || continuar == 'S');

    cout << "Programa finalizado." << endl;

    return 0;
}
