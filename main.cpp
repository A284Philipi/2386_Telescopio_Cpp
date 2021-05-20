#include <iostream>

using namespace std;

int main()
{
    int estrelas, cont = 0, visiveis = 0;
    long long int estrela, telescopio;
    cin >> telescopio;
    cin >> estrelas;
    while (cont < estrelas){
        cin >> estrela;
        estrela = estrela * telescopio;
        if (estrela >= 40000000){
            visiveis++;
        }
        cont++;
    }
    cout << visiveis <<endl;
    return 0;
}
