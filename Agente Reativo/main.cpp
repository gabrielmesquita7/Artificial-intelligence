#include <iostream>

using namespace std;

int agente(char location, bool status)
{
    if (status == true)
    {
        return 0;
    }
    else
    {
        if (location == 'A')
        {
            return 1;
        }
        if (location == 'B')
        {
            return 2;
        }
    }
    return 4;
}
// agente retorna: 0 = Limpar :: 1 = Direita :: 2 = Esquerda
// false = sujo :: true = limpo
int ambiente(char pos, bool statusA, bool statusB)
{
    int count = 0; // 5 ciclos até o aspirador desligar
    int pontuacao = 0;
    int action = 0;
    while (count != 5)
    {
        if (pos == 'A')
        {
            action = agente(pos, statusA);
            if (action == 0)
            {
                cout << "Limpar (+5)" << endl;
                statusA = false;
                action = agente(pos, statusA);
                pontuacao += 5;
            }
            else if (action == 1)
            {
                cout << "Movendo Direita (-1)" << endl;
                pos = 'B';
                pontuacao -= 1;
            }
        }
        else if (pos == 'B')
        {
            action = agente(pos, statusB);
            if (action == 0)
            {
                cout << "Limpar (+5)" << endl;
                statusB = false;
                action = agente(pos, statusB);
                pontuacao += 5;
            }
            else if (action == 2)
            {
                cout << "Movendo Esquerda (-1)" << endl;
                pos = 'A';
                pontuacao -= 1;
            }
        }
        count++;
    }
    return pontuacao;
}

int main()
{
    // false = sujo :: true = limpo
    int pontuacao = 0;
    cout << "-> Ambiente 1" << endl;
    pontuacao = ambiente('A', true, true);
    cout << "Pontuacao do ambiente: " << pontuacao << endl;
    cout << endl;
    cout << "-> Ambiente 2" << endl;
    pontuacao = ambiente('B', true, true);
    cout << "Pontuacao do ambiente: " << pontuacao << endl;
    cout << endl;
    cout << "-> Ambiente 3" << endl;
    pontuacao = ambiente('A', true, false);
    cout << "Pontuacao do ambiente: " << pontuacao << endl;
    cout << endl;
    cout << "-> Ambiente 4" << endl;
    pontuacao = ambiente('B', true, false);
    cout << "Pontuacao do ambiente: " << pontuacao << endl;
    cout << endl;
    cout << "-> Ambiente 5" << endl;
    pontuacao = ambiente('A', false, true);
    cout << "Pontuacao do ambiente: " << pontuacao << endl;
    cout << endl;
    cout << "-> Ambiente 6" << endl;
    pontuacao = ambiente('B', false, true);
    cout << "Pontuacao do ambiente: " << pontuacao << endl;
    cout << endl;
    cout << "-> Ambiente 7" << endl;
    pontuacao = ambiente('A', false, false);
    cout << "Pontuacao do ambiente: " << pontuacao << endl;
    cout << endl;
    cout << "-> Ambiente 8" << endl;
    pontuacao = ambiente('B', false, false);
    cout << "Pontuacao do ambiente: " << pontuacao << endl;
    cout << endl;
    return 0;
}