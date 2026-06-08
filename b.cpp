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
public :
    Node* head;
    LinkedList(){
        head = NULL;
    }

    //instert at beginning
    void push_front(int val){
        Node* newNode = new Node(val);
        
        if(head == NULL){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    //Insert at End
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            return;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    //delete from beginning
    void pop_front(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    //delete from end
    void pop_back(){
        if(head==NULL)return;
        if(head->next == NULL){
            delete head;
            head = NULL;
            return;
        }
        Node* prev = NULL;
        Node* curr = head;
        while(curr->next != NULL){
            prev = curr;
            curr = curr->next;
        }
        delete curr;
        prev->next = NULL;
    }

    //reverse
    void reverse(){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    //print
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<endl;
    }

};

int main(){
    LinkedList l1;
    
    //push_front
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    //push_back
    l1.push_back(4);
    l1.push_back(5);
    l1.push_back(6);

    //reverse
    l1.reverse();

    l1.display();

    l1.reverse();

    //pop_front
    l1.pop_front();

    //pop_back
    l1.pop_back();

    l1.display();
}