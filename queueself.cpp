#include<iostream>
#define SIZE 5
using namespace std;
class queue1{
int a[SIZE],front,rear;
public:
    queue(){
    front=-1;
    rear=-1;
    }
bool isfull();
bool isempty();
int enqueue(int x);
int dequeue();
void display();
};
bool queue1::isfull(){
if(front==0&&rear==SIZE-1){
            return true;
}
return false;
}
bool queue1::isempty(){
if(front==-1){
    cout<<"queue is empty";
    return  true;
}
return false;
}
int queue1::enqueue(int x){
if(isfull()){
    cout<<"queue is full";
}
else{
    if(front==-1)
        front=0;
    rear++;
    a[rear]=x;
    cout<<x<<" inserted"<<endl;
}
}
int queue1::dequeue(){
int element;
if(isempty()){
    cout<<"queue is empty"<<endl;
    return(-1);
}
else{
    element=a[front];
    if(front>=rear){
        rear=-1;
        front=-1;
    }
    else{
        front++;
    }
    cout<<"deleted element "<<element<<endl;
    return(element);
}
}
void queue1::display(){
if(isempty()) {
            cout << endl << "Empty Queue" << endl;
        }
else{
for(int i=front;i<=rear;i++){
cout<<a[i]<<"\t";
}
}
}
int main(){
queue1 q1;
q1.dequeue();
q1.enqueue(1);
q1.enqueue(2);
q1.enqueue(3);
q1.enqueue(4);
q1.enqueue(5);
q1.enqueue(5);
cout<<"BEFORE DEQUE"<<endl;
q1.display();
q1.dequeue();
cout<<"AFTER DEQUE"<<endl;
q1.display();
return 0;
}
