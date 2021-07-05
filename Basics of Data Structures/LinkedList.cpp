#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*head, *tail, *temp, *current;

class LinkedList{
public:
    LinkedList(){
        head = nullptr;
        tail = nullptr;
    }

    bool isEmpty(){
        if(head == nullptr){
            return true;
        }else{
            return false;
        }
    }
    void addNode(int val){
        temp = new Node;
        temp->data = val;
        temp->next = nullptr;
        if(head == nullptr){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    void addNodeBegin(int val){
        temp = new Node;
        temp->data = val;
        temp->next = nullptr;
        if(isEmpty()){
            head = temp;
            tail = temp;
        }else{
            temp->next = head;
            head = temp;
        }
    }

    void addNodeMid(int val, int after){
        temp = new Node;
        temp->data = val;
        temp->next = nullptr;
        if(isEmpty()){
            head = temp;
            tail = temp;
        }else{
            current = head;
            while(current != nullptr){
                if(current->data == after){
                    temp->next = current->next;
                    current->next = temp;    
                }
                current = current->next;
            }
        }
    }

    void display(){
        if(isEmpty()){
            cout<<"LinkedList is Empty"<<endl;
        }else{
            temp = head;
            while(temp != nullptr){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"null";
        }
    }

};



int main(){
    LinkedList L;
    L.addNode(10);
    L.addNode(20);
    L.addNode(30);
    L.addNode(40);
    L.addNode(50);
    L.addNodeBegin(9);
    L.addNodeBegin(8);
    L.addNodeMid(21,20);
    L.addNodeMid(22,21);
    L.display();
}