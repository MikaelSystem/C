#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int MI=0,HI=0,MF=0,HF=0,DH=0,DM=0;
    cin >> HI >> MI >> HF >> MF;

    for (int i=0;MI!=MF;i++){
        MI++;
        DM++;

        if (DM>59) DM-=60;

        if (MI>59) MI-=60;
        
    }

    if (HI==HF){
        for (int i=0;i<24;i++){
            HI++;
            DH++;
            if (HI>23) HI-=24;
        }
    }else{
        for (int i=0;HI!=HF;i++){
            if (HI!=HF && MI==MF){
                HI++;
                DH++;
            }
            

            if (HI>23) HI-=24;
        }
    }

    cout << "O JOGO DUROU " << DH << " HORA(S) E " << DM << " MINUTO(S)";

    return 0;
}
