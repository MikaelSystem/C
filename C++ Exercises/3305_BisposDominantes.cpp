#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int bispos=0, X=0 ,Y=0;
    int casasbrancas=0, casaspretas=0;

    map<pair<int,int>,int> tabuleiro;

    cin >> bispos;

    for (int i=1;i<=bispos;i++){
        if (cin >> X >> Y){
            tabuleiro[{X,Y}] = 1;
        }
    }

    for (auto [casa, valor] : tabuleiro){
        X = casa.first;
        Y = casa.second;
   
        if (X==Y && valor == 1) casasbrancas++;
        else if (X!=Y && valor == 1) casaspretas++;
    }

    if (casasbrancas > 1) casasbrancas=0;
    if (casaspretas > 1) casaspretas=0;

    if (casasbrancas == 1 && casaspretas == 1){
        cout << casasbrancas + casaspretas << "\n";
    }
    else if (casasbrancas == 1 && casaspretas == 0) cout << casasbrancas << "\n";
    else if (casasbrancas == 0 && casaspretas == 1) cout << casaspretas << "\n";
    else cout << casasbrancas + casaspretas << "\n";

    return 0;
}
