#include <iostream>
#include <string>

using namespace std;

int main(){

    string NomeHeroi;
    string Nivel;
    int XP;
    char continuar;

    do {
        cout << "Insira o nome do seu Heroi: ";
        getline(cin, NomeHeroi);

        cout << "Insira a quantidade de XP do Heroi: ";
        cin >> XP;

        if (XP < 1000) {
            Nivel = "Ferro";
        }
        else if (XP >= 1001 && XP <= 2000) {
            Nivel = "Bronze";
        }
        else if (XP >= 2001 && XP <= 5000) {
            Nivel = "Prata";
        }
        else if (XP >= 5001 && XP <= 7000) {
            Nivel = "Ouro";
        }
        else if (XP >= 7001 && XP <= 8000) {
            Nivel = "Platina";
        }
        else if (XP >= 8001 && XP <= 9000) {
            Nivel = "Ascendente";
        }
        else if (XP >= 9001 && XP <= 10000) {
            Nivel = "Imortal";
        }
        else {
            Nivel = "Radiante";
        }

        cout << "O Heroi de nome " << NomeHeroi
             << " esta no nivel " << Nivel << endl;

        cout << "\nDeseja classificar outro heroi? (s/n): ";
        cin >> continuar;
        cin.ignore(); // limpa o buffer para o próximo getline

        cout << endl;

    } while (continuar == 's' || continuar == 'S');

    cout << "Programa finalizado." << endl;

    return 0;
}
