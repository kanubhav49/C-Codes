#include <iostream>
#include <stack>
using namespace std;

void PrintMiddle(stack<int> &st,int Totalsize)
{
    //Base case
    if((Totalsize/2) + 1 == st.size())
    {
        cout<<"Middle is : "<<st.top()<<endl;
        return;
    }

    // step-1->top element save krate ho

    int topElement=st.top();
    st.pop();

    //step-2->Recursive Call
    
    PrintMiddle(st,Totalsize);
    
    //step-3->Push back krdete ho
    st.push(topElement);

}

int main()
{
    

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    PrintMiddle(st,st.size());


}