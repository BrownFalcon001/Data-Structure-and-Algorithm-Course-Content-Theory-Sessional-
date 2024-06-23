/*
 *   author: brownFalcon
 */
#include<iostream>
using namespace std;

struct Node {
  int val;
  Node *next;
};
Node *front = nullptr, *rear = nullptr;

bool enqueue(int val) {
  
}
bool isEmpty() {
  
}
int peek() {
  
}
int dequeue() {
  
}
bool isFull() {
  
}
void clear() {
  
}

int main() {
  
  while(1) {
    cout<<"Select an option: "<<endl;
    cout<<"1. Enqueue"<<endl;
    cout<<"2. IsEmpty"<<endl;
    cout<<"3. Peek"<<endl;
    cout<<"4. Dequeue"<<endl;
    cout<<"5. IsFull"<<endl;
    cout<<"6. Clear"<<endl;
    cout<<"7. Exit"<<endl;

    int x;cin>>x;
    if(x == 1) {
      cout<<"Enter the value: ";
      int val;cin>>val;
      if(enqueue(val)) {
        cout<<"The value has been successfully inserted into the queue."<<endl;
      }
      else {
        cout<<"Queue is Full!!"<<endl;
      }  
    }
    else if(x == 2) {
      if(isEmpty()) cout<<"The queue is empty!!!"<<endl;
      else cout<<"The queue is not empty!!!"<<endl;
    }
    else if(x == 3) {
      if(isEmpty()) cout<<"The queue is empty!!!"<<endl;
      else {
        int val = peek();
        cout<<"The first element of the queue is: "<<val<<endl;
      }
    }
    else if(x == 4) {
      if(isEmpty()) cout<<"The queue is empty!!!"<<endl;
      else {
        int val = dequeue();
        cout<<"The first element of the queue is: "<<val<<" and its successfully deleted."<<endl;
      }
    }
    else if(x == 5) {
      if(isFull()) cout<<"The queue is full!!!"<<endl;
      else cout<<"The queue is not full!!!"<<endl;
    }
    else if(x == 6) {
      clear();
      cout<<"The queue has been cleared!!!"<<endl;
    }
    else if(x == 7) break;
    else cout<<"Invalid option!!!"<<endl;
  }

  return 0;
  
}