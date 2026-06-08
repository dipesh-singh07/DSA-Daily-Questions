#include<bits/stdc++.h>
using namespace std;

class Node{
public :
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    LinkedList(){
        head = nullptr;
    }

    void insert(int val){
        Node* newVal = new Node(val);
        if(head == nullptr){
            head = newVal;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newVal;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
};

int main(){
    LinkedList l1;
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);

    l1.display();
}