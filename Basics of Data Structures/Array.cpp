//C++ program to declare array , add elements to it and display the array

#include<iostream>
using namespace std;

int main(){
    int num[5];
    
    cout << "Enter 5 Numbers" << endl;
    
    for(int i=0; i<5; i++){
        cin >> num[i];
    }
    
    cout << "Inserted Numbers are:" << endl;
    
    for(int n=0; n<5; n++){
        cout << num[n] << " ";
    }
    
   return 0; 
}
