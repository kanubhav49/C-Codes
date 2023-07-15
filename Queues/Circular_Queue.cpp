#include <iostream>
using namespace std;

class circularqueue{

public:

int front;
int rear;
int size;
int* arr;

circularqueue(int n)
{  
  arr=new int[n];
  size=n;
  rear=-1;
  front=-1; 
}

void enqueue(int element)
{
    //normal overflow && complex case overflow
    if( (rear==size-1 && front==0) || (rear==(front-1)%size))
    {
      cout<<"Overflow"<<endl;
      return;
    }

    else if(front==-1)
    {
        front=rear=0;
    }
    //circular insertion
    else if(rear==size-1&&front!=0)
    {
      rear=0;
    }
    //normal case
    else{
       rear++;
    }

    arr[rear]=element;
}

void dequeu()
{
    if(front==-1)
    {
        cout<<"Underflow"<<endl;
    }

    else if(front==rear)
    {
        front=rear=-1;
    }

   else if(front==size-1)
   {
      front=0;
   }
  
  else 
  {
    front++;
  }

}

bool IsEmpty()
{
    if(front==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int getfront()
{ 
    if(front==-1)
    {
        return -1;
    }
    else{
        return arr[front];
    }

}

};

int main()
{
circularqueue* q=new circularqueue(5);
q->enqueue(3);
q->enqueue(5);
q->enqueue(7);
q->enqueue(9);
q->enqueue(11);

cout<<"front element "<<q->getfront() <<endl;

q->dequeu();

cout<<"front element "<<q->getfront() <<endl;
}