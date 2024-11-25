#include<iostream>

using namespace std;

int main(){

    int A[2][3]={{3,4,5},{3,4,5}};
    int B[2][3]={{3,4,3},{3,4,5}};
    int C[2][3];
    int i,j;

    for(i=0;i<2;i++){

        for(j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}