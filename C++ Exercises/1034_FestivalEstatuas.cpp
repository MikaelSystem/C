#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i=0,T=0,TB=0,MF=0,CC=0;
    
    vector<int> MDS;
    
    cin >> T;
    
    for (int i=0; i<T; i++){
        cin >> TB >> MF;
        
        for (int j=0; j<TB; j++){
            cin >> CC;
            MDS.push_back(CC);
        }
    }

    return 0;
}
