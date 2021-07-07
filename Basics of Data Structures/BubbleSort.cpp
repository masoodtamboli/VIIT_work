/*
* Program: Bubble Sort
* author: Masood Ismail Tamboli
* Date: Jul 07,21
*/

#include<iostream>
using namespace std;

void printPass(int arr[], int n){
    cout<<"Pass -> ";
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl; 
}

void BubbleSort(int arr[], int n){
    int temp;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                printPass(arr,n);
            }
            
        }
    }
}



void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[1000];
    int n,i;

    cout<<"Enter number of elements you want enter"<<endl;
    cin>>n;

    cout<<"==========================================="<<endl;

    for(i=0; i<n; i++){
        cout<<"Enter "<<i<<" element ";
        cin>>arr[i];
    }

    cout<<"==========================================="<<endl;

    BubbleSort(arr,n);

    cout<<"==========================================="<<endl;

    cout<<"Sorted Array:"<<endl;
    printArray(arr,n);

    cout<<"==========================================="<<endl;
}