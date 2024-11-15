#include<iostream>
using namespace std;
void spiralMatrix(int matrix[][4],int n, int m){
    int srow = 0;
    int scol = 0;
    int erow = n-1;
    int ecol = m-1;
    while (srow <= erow && scol <= ecol)
    {
        //Top
        for(int i = scol;i<=ecol;i++){
            cout<<matrix[srow][i]<<" ";
        }
        //Right
        for(int j = srow+1;j<=erow;j++){
            cout<<matrix[j][ecol]<<" ";
        }
        //Bottom
        for(int i = ecol-1;i>=scol;i--){
            if(srow == erow){//Corner Case - If we don't execute this condition while running the main condition it will repeate the middle element twice
                break;
            }
            cout<<matrix[erow][i]<<" ";
        }
        //Left
        for(int j = erow-1;j>=srow+1;j--){
            if(scol == ecol){ //Corner Case - If we don't execute this condition while running the main condition it will repeate the middle element twice
                break;
            }
            cout<<matrix[j][scol]<<" ";
        }

        srow++;
        scol++;
        ecol--;
        erow--;
    }
    
   
}
int main(){
    int matrix[5][4] = {{21,22,23,24},
                        {25,26,27,28},
                        {29,30,31,32},
                        {33,34,35,36},
                        {37,38,39,40}};
    spiralMatrix(matrix,5,4);
    return 0;
}