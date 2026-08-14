#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int MI=0,HI=0,MF=0,HF=0,DH=0,DM=0;
    cin >> HI >> MI >> HF >> MF;

    if (HI==HF && MI==MF){
        for (int i=0;i<24;i++){
            HI++;
            DH++;
            if (HI>23) HI-=24;
        }
    }else if (HI!=HF && MI==MF){ 
        for (int i=0;HI!=HF;i++){
            HI++;
            DH++;
            if (HI>23) HI-=24;
        }
    }else if (HI!=HF && MI<MF){
        for (int i=0;HI!=HF;i++){
            HI++;
            DH++;
            if (HI>23) HI-=24;
        }
    }else if (HI==HF && MI>MF){
        for (int i=0;MI!=MF;i++){ 
            MI++;
            DM++;
            if (MI>59) MI-=60;
            if (DM>59) DM-=60;
            
        }
        for (int i=0;i<23;i++){
                HI++;
                DH++;
                if (HI>23) HI-=24;
            }
    }else {
        for (int i=0;MI!=MF;i++){ 
            MI++;
            DM++;
            if (MI>59) {
                MI-=60;
                HI++;
            }
            if (DM>59) DM-=60;
            
        }

        for (int i=0;HI!=HF;i++){ 
            HI++;
            DH++;
            if (HI>23) HI-=24;
        }
    }

    if (MI!=MF){
        for (int i=0;MI!=MF;i++){
            MI++;
            DM++;

            if (DM>59) DM-=60;
            if (MI>59) MI-=60; 
        }
    }

    cout << "O JOGO DUROU " << DH << " HORA(S) E " << DM << " MINUTO(S)\n";

    return 0;
}
