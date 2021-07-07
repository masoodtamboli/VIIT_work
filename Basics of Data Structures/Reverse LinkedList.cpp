#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*head, *temp, *previous, *further, *current, *tail;

class LinkedList{

public:
    LinkedList(){
        head = NULL;
        tail = NULL;
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

    void ReverseLL(){
        if(isEmpty()){
            cout<<"LinkedList is Empty"<<endl;
        }else{
            current = head;
            previous = nullptr;
            further = nullptr;
            while(current != nullptr){
                further = current->next;
                current->next = previous;
                previous = current;
                current = further;
            }   
            head = previous;
        }
    }

    void display(){
        if (isEmpty()){
            cout<<"LinkedList is Empty"<<endl;
        }else{
            temp = head;
            while(temp != nullptr){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }   
        
    }
};

int main(){
    LinkedList L;
    cout<<"Linked List after adding 10, 20, 30, 40"<<endl;
    L.addNode(10);
    L.addNode(20);
    L.addNode(30);
    L.addNode(40);
    L.display();

    cout<<"Linked List after Reverse"<<endl;
    L.ReverseLL();
    L.display();
}