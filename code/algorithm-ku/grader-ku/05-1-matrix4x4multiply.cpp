#include <iostream>
using namespace std;

int main() {
    int matrix1[4][4];
    int matrix2[4][4];
    int matrix3[4][4];
    int i,j,k;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin>>matrix1[i][j];
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin>>matrix2[i][j];
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            matrix3[i][j]=0;
            for(k=0;k<4;k++){
                matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}