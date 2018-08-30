#include<iostream>
using namespace std;
int m,i,n;
int top=-1;
class stack
{
    int s[50];
    public:
    void push();
    void pop();
    void display();
};
void stack::push()
{
    int x;
    if(top==(m-1))
        cout<<"Stack is full";
    else
    {
        cout<<"enter data:";
        cin>>x;
        top++;
        s[top]=x;
    }
}
void stack::pop()
{
    if(top==-1)
        cout<<"stack  is empty";
else
    s[top--]='\0';
}
void stack::display()
{
    if(top==-1)
        cout<<"stack is empty"<<"\n";
    else
    {
        for(i=0;i<=top;i++)
        cout<<s[i]<<"\t";
        cout<<"\n";
}
}
int main()
{
    stack sa;
    cout<<"MAXVALUE of stack:";
    cin>>m;
    cout<<"1=push"<<endl;
    cout<<"2=pop"<<endl;
    cout<<"3=display"<<endl;
while(1)
{

cin>>n;
switch(n)
{
    case 1:
        sa.push();
        break;
    case 2:
        sa.pop();
        break;
    case 3:
        sa.display();
        break;
    default:
    cout<<"Invalid option";
}
}
}
