#include <iostream>
using namespace std;

class stack{

    public:

    int  *arr;
    int top;
    int size;

    //constructor called
    stack(int size)
    {
        arr=new int[size];
        top=-1;
        this->size=size;
    }
    void push(int data)
    {
        if(top==size-1)
        {
            cout<<"STACK OVERFLOW"<<endl;
            return;
        }
        top++;
        
        cout<<"inserting at index"<<top<<endl;
        arr[top]=data;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"STACK UNDERFLOW"<<endl;
            return;
        }
        top--;
    }
    int getSize()
    {
        return this->size;
    }

    int getnoelts()
    {
        return this->top+1;
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;

        }
    }

    int gettop()
    {
        return arr[top];
    }

};


int main()
{
    stack* st=new stack(5);
   //5 elts passed
   /*
    st->push(3);
    st->push(7);
    st->push(9);
    st->push(11);
    st->push(14);
    */

    //2 elts passed but size is 5
    //elts kitne h uske liye alg concept lgega
    
    /*
    st->push(3);
    st->push(7);
    */

  //what if more than 5 elements are present -> STACK OVERFLOW

    st->push(3);
    st->push(7);
    st->push(9);
    st->push(11);
    st->push(14);
    st->push(35);

    


    cout<<st->getSize()<<endl;
    cout<<st->getnoelts()<<endl;

    st->pop();
    st->pop();

    cout<<st->getSize()<<endl;
    cout<<st->getnoelts()<<endl;


}