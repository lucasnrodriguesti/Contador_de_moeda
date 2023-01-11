#include <iostream>

using namespace std;

int main()
{
    cout << "--------------------------------------------------------------------------";
    cout << "\n|                            CONTAGEM DE MOEDAS                          |";
    cout << "\n--------------------------------------------------------------------------";

    const float cinco = 0.05, dez = 0.10, vinte_e_cinco = 0.25, cinquenta = 0.50, um_real = 1.00;

    float quantidade1, quantidade2, quantidade3, quantidade4, quantidade5, total1, total2, total3, total4, total5, total6;


    setlocale(LC_ALL, "Portuguese");

    cout << "\nQuantas moedas de R$0,05 centavos você têm? ";
    cin >> quantidade1;

    cout << "\nQuantas moedas de R$0,10 centavos você têm? ";
    cin >> quantidade2;

    cout << "\nQuantas moedas de R$0,25 centavos você têm? ";
    cin >> quantidade3;

    cout << "\nQuantas moedas de R$0,50 centavos você têm? ";
    cin >> quantidade4;

    cout << "\nQuantas moedas de R$1,00 real você têm? ";
    cin >> quantidade5;

    cout << "\n";
    system("pause");

    cout << "\nAguarde um momento, estamos realizando sua conta...\n";
    system("pause");

    cout << "\nProcesso finalizado, confira o resultado logo abaixo.\n";
    system("pause");

    //R$0,05

    cout << "\nO total de suas moedas de R$0,05 são: R$" << quantidade1 * cinco;

    //R$0,10

    cout << "\nO total de suas moedas de R$0,10 são: R$" << quantidade2 * dez;

    //R$0,25

    cout << "\nO total de suas moedas de R$0,25 são: R$" << quantidade3 * vinte_e_cinco;

    //R$0,50

    cout << "\nO total de suas moedas de R$0,50 são: R$" << quantidade4 * cinquenta;

    //R$1,00

    cout << "\nO total de suas moedas de R$1,00 são: R$" << quantidade5 * um_real;

    //Soma total

    total1 = quantidade1 * cinco;
    total2 = quantidade2 * dez;
    total3 = quantidade3 * vinte_e_cinco;
    total4 = quantidade4 * cinquenta;
    total5 = quantidade5 * um_real;
    total6 = total1 + total2 + total3 + total4 + total5;
    cout << "\nA soma total de todas as suas moedas são: R$"<<total6;

    cout << "\n";
    system("pause");
    return 0;
}
