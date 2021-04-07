//program to accept a sparse matrix and convert it to Triplet form

#include<iostream>
using namespace std;

int main(){
    
    //To take input for Sparse Matrix
    int rows;
    int cols;
    cout<<"Enter Number of Rows and Columns"<<endl;
    cout<<"Rows: ";
    cin>>rows;
    cout<<"Colums: ";
    cin>>cols;
    
    int sparseMatrix[rows][cols];
    int size = 0;
    
    cout<<"Enter 2D Array"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            int temp;
            cout<<"Matrix ["<<i<<"]["<<j<<"] ";
            cin>>temp;
            sparseMatrix[i][j] = temp;
        }
    }
    
    //Count numbers of non-zero values
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            if(sparseMatrix[i][j] != 0){
                size++;
            }
        }
    }
    
    int tripletMatrix[3][size];
    int k = 0;
    
    //Creating a triplet Matrix or compact Matrix
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            if(sparseMatrix[i][j] != 0){
                tripletMatrix[0][k] = i;
                tripletMatrix[1][k] = j;
                tripletMatrix[2][k] = sparseMatrix[i][j];
                k++;
            }
        }
    }
    
    cout<<"Triplet Matrix is:"<<endl;
    //Displaying triplet Matrix 
    for(int i=0; i<3; i++){
        for(int j=0; j<size; j++){
            cout<<" "<<tripletMatrix[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}
