//A C++ program to print value in variable & contents of array using pointers

#include<iostream>
using namespace std;

int main(){
    
    //Program to Print value of Data
    int data = 10;
    int *p;
    
    p = &data;
    
    cout<<"Value of data is: "<<data<<endl;
    cout<<"Address of data is: "<<p<<endl;
    cout<<"Value of data stored in pointer is: "<<*p<<endl;
    
    cout<<"---------------------------------"<<endl;
    
    //Program to Print value of array
    int my[3] = {10,20,30};
    int *ptr[3];
    
    for(int i=0; i<3; i++){
        ptr[i] = &my[i];
    }
    
    for(int j=0; j<3; j++){
        cout<<"Values of array 'my' using pointer are: "<<*ptr[j]<<endl;
    }
    return 0;
}


