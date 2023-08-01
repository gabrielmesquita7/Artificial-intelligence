#include <iostream>
#include <random>
#include <unordered_map>

using namespace std;

class Agente
{
public:
    char pos;
    Agente()
    {
        score = 0;
        state = {{'A', ""}, {'B', ""}};
    }

    void Movement(unordered_map<char, string> &localStatus)
    {
        while (state['A'] != "limpo" || state['B'] != "limpo")
        {
            if (pos == 'A')
            {
                cout << "--> A" << endl;
                if (localStatus['A'] == "sujo")
                {
                    cout << "--> Limpando..." << endl;
                    localStatus['A'] = "limpo";
                    state['A'] = "limpo";
                    score += 5;
                }
                else
                {
                    cout << "--> Limpo, Movendo..." << endl;
                    pos = 'B';
                    state['A'] = "limpo";
                    score -= 1;
                }
            }
            else if (pos == 'B')
            {
                cout << "--> B" << endl;

                if (localStatus['B'] == "sujo")
                {
                    cout << "--> Limpando..." << endl;
                    localStatus['B'] = "limpo";
                    state['B'] = "limpo";
                    score += 5;
                }
                else
                {
                    cout << "--> Limpo, Movendo..." << endl;
                    pos = 'A';
                    state['B'] = "limpo";
                    score -= 1;
                }
            }
        }
        cout << "Score: " << score << endl;
        // reset
        state = {{'A', ""}, {'B', ""}};
        score = 0;
    }

private:
    int score;
    unordered_map<char, string> state;
};

void ambiente()
{
    vector<string> status = {"sujo", "limpo"};
    unordered_map<char, string> localStatus = {{'A', ""}, {'B', ""}};
    Agente Agente;
    // sujo, sujo
    localStatus['A'] = status[0];
    localStatus['B'] = status[0];
    cout << "---Ambiente 1---"
         << "{" << localStatus['A'] << "," << localStatus['B'] << "}" << endl;
    Agente.pos = 'A';
    Agente.Movement(localStatus);
    localStatus['A'] = status[0];
    localStatus['B'] = status[0];
    cout << "---Ambiente 2---"
         << "{" << localStatus['A'] << "," << localStatus['B'] << "}" << endl;
    Agente.pos = 'B';
    Agente.Movement(localStatus);
    // sujo, limpo
    localStatus['A'] = status[0];
    localStatus['B'] = status[1];
    cout << "---Ambiente 3---"
         << "{" << localStatus['A'] << "," << localStatus['B'] << "}" << endl;
    Agente.pos = 'A';
    Agente.Movement(localStatus);
    localStatus['A'] = status[0];
    localStatus['B'] = status[1];
    cout << "---Ambiente 4---"
         << "{" << localStatus['A'] << "," << localStatus['B'] << "}" << endl;
    Agente.pos = 'B';
    Agente.Movement(localStatus);
    // limpo, sujo
    localStatus['A'] = status[1];
    localStatus['B'] = status[0];
    cout << "---Ambiente 5---"
         << "{" << localStatus['A'] << "," << localStatus['B'] << "}" << endl;
    Agente.pos = 'A';
    Agente.Movement(localStatus);
    localStatus['A'] = status[1];
    localStatus['B'] = status[0];
    cout << "---Ambiente 6---"
         << "{" << localStatus['A'] << "," << localStatus['B'] << "}" << endl;
    Agente.pos = 'B';
    Agente.Movement(localStatus);
    // limpo, limpo
    localStatus['A'] = status[1];
    localStatus['B'] = status[1];
    cout << "---Ambiente 7---"
         << "{" << localStatus['A'] << "," << localStatus['B'] << "}" << endl;
    Agente.pos = 'A';
    localStatus['A'] = status[1];
    localStatus['B'] = status[1];
    Agente.Movement(localStatus);
    cout << "---Ambiente 8---"
         << "{" << localStatus['A'] << "," << localStatus['B'] << "}" << endl;
    Agente.pos = 'B';
    Agente.Movement(localStatus);
}

int main()
{
    ambiente();
    return 0;
}