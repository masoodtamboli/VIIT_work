//A C++ program to implement array of structures in C++ 

#include<iostream>
using namespace std;
struct add_{
    char houseNo[20];
    char city[50];
    char state[50];
};

struct student{
    int rollNo;
    char name[50];
    int mobNum;
    char email[50];
    add_ address;
};

int main(){
    student s1;
    int i;
    
    cout<<"Roll Number :";
    cin>>s1.rollNo;
    
    cout<<"Name :";
    cin>>s1.name;
    
    cout<<"Mobile Number :";
    cin>>s1.mobNum;
    
    cout<<"Email :";
    cin>>s1.email;
    
    cout<<"House Number :";
    cin>>s1.address.houseNo;
    
    cout<<"City :";
    cin>>s1.address.city;
    
    cout<<"State :";
    cin>>s1.address.state;
    
    cout<<"\n";
    
    cout<<"Students Info:"<<endl;
    
    cout<<"Roll No. : "<<s1.rollNo<<endl;
    cout<<"Name : "<<s1.name<<endl;
    cout<<"Mobile Number : "<<s1.mobNum<<endl;
    cout<<"Email : "<<s1.email<<endl;
    cout<<"Address : "<<s1.address.houseNo<<","<<s1.address.city<<","<<s1.address.state;

    return 0;
    
}







