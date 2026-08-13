#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A1,A2,A3,R;
    cin >> A1 >> A2 >> A3;

    if ((A1*2)+(A3*2) < (A2*4)){
        cout << (A1*2) + (A3*2);
    }

    return 0;
}
