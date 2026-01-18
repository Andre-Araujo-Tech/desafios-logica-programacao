#include <iostream>
#include <string>

using namespace std;

// Função que calcula o saldo de vitórias
int calcularSaldo(int vitorias, int derrotas) {
    return vitorias - derrotas;
}

// Função que define o nível com base nas vitórias
string definirNivel(int vitorias) {
    if (vitorias < 10) {
        return "Ferro";
    }
    else if (vitorias >= 11 && vitorias <= 20) {
        return "Bronze";
    }
    else if (vitorias >= 21 && vitorias <= 50) {
        return "Prata";
    }
    else if (vitorias >= 51 && vitorias <= 80) {
        return "Ouro";
    }
    else if (vitorias >= 81 && vitorias <= 90) {
        return "Diamante";
    }
    else if (vitorias >= 91 && vitorias <= 100) {
        return "Lendario";
    }
    else {
        return "Imortal";
    }
}

int main() {

    int vitorias, derrotas;
    char continuar;

    do {
        cout << "Informe a quantidade de vitorias: ";
        cin >> vitorias;

        cout << "Informe a quantidade de derrotas: ";
        cin >> derrotas;

        int saldoVitorias = calcularSaldo(vitorias, derrotas);
        string nivel = definirNivel(vitorias);

        cout << "\nO Heroi tem de saldo de "
             << saldoVitorias
             << " esta no nivel de "
             << nivel << endl;

        cout << "\nDeseja calcular novamente? (s/n): ";
        cin >> continuar;

        cout << endl;

    } while (continuar == 's' || continuar == 'S');

    cout << "Programa finalizado." << endl;

    return 0;
}
