#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A1=0 ,A2=0, A3=0, andar1=0, andar2=0, andar3=0;
    cin >> A1 >> A2 >> A3;

    andar1 = ((A2*2)+(A3*4));
    andar2 = ((A1*2)+(A3*2));
    andar3 = ((A2*2)+(A1*4));

    int R = min({andar1,andar2,andar3});

    cout << R << "\n";
    
    return 0;
}
