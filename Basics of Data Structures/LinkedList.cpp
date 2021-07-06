#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*head, *tail, *temp, *current;

class LinkedList{
public:
    int count = 0;
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
    
    void deleteMyKey(int key){
        if(isEmpty()){
            cout<<"LinkedList is empty"<<endl;
        }else if(head->data == key){
            temp = head;
            head = head->next;
            delete(temp);
        }else{
            temp = head;
            while(temp != nullptr){
                if(temp == tail){
                    break;
                }
                if(temp->next->data == key){
                    temp->next = temp->next->next;
                }else{
                    temp = temp->next;
                }
                
            }
        }
    }

    void deleteStart(){
        if(isEmpty()){
            cout<<"LinkedList is Empty"<<endl;
        }else{
            head = head->next;
        }
    }

    int search(int key){
        if(isEmpty()){
            cout<<"LinkedList is Empty"<<endl;
        }else{
            temp = head;
            while(temp != nullptr){
                if(temp->data == key){
                    return 1;
                }
                temp  = temp->next;
                count++;
            }
        }
        return 0;
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
    (L.search(255) == 0) ? cout <<endl<< "Search item is not available in LinkedList"<<endl :
                            cout <<endl<< "Search item is available in LinkedList at "<<L.count<<endl;
    L.deleteMyKey(30);
    L.deleteStart();
    L.display();
}