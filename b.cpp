#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
};

class Stack{
    public:
        Node* top;
        Stack(){
            top = NULL;
        }

        void push(int val){
            Node* newNode = new Node(val);
            newNode->next = top;
            top = newNode;
        }

        void pop(){
            if(top == NULL)return;
            Node* temp = top;
            top = top->next;
            delete temp;
        }

        int topEl(){
            if(top == NULL)return -1;
            return top->data;
        }

        bool empty(){
            return top = NULL;
        }

        void display(){
            Node* temp = top;
            while(temp != NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
        }
};

int main(){
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.display();
    cout<<endl<<st.topEl()<<endl;

    st.pop();
    st.display();
    cout<<endl;
    cout<<st.empty()<<endl;
}