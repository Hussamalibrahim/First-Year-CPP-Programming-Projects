#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int use[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            use[i][j]=0;
        }
    }
    int tmp2=1;
    for(int i=0; i<5; i++) {
        if(i%2==1) {

            for(int j=n-1; j>=i; j--) {
                use[i][j]=tmp2;
                tmp2++;
            }
        } else {
            tmp2+=4-i;
            int tmp3=tmp2;
            for(int j=n-1; j>=i; j--) {
                use[i][j]=tmp3;
                tmp3--;
            }
            tmp2++;
        }
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(use[j][i]==0)break;

            cout<<use[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}