#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int bispos=0, tabuleiro, X=0 ,Y=0;

    map<pair<int,int>int> tabuleiro;

    cin >> bispos;

    for (int i=1;i<=bispos;i++){
        if (cin >> X >> Y){
            tabuleiro[{X,Y}] = 1
        }
    }

    for (auto [coordenada, valor]:tabuleiro){
        int X=casa.first;
        int Y=casa.second;

        if (X==0){
            if (Y%2==0 && valor == 1) casasbrancas++;
            else casaspretas++;
        }
    }
        

    return 0;
}
