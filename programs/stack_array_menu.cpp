#include<iostream>
#define size 10
using namespace std;
int stack[size];
int top=-1;
void push(int x);
void pop();
void display();
int main()
{
    int x,ch;
    do{
            cout<<"\nEnter you choice: \nPress 1 for push \nPress 2 for pop \nPress 3 for display";
            cout<<"\nPress 4 for total number of elements \nPress 5 for peek \nPress 6 for exit\n";
            cin>>ch;
            switch(ch)
            {
            case 1:
                {
                cout<<"Enter the value to be pushed: "<<endl;
                cin>>x;
                push(x);
                break;
                }
            case 2:
                {
                pop();
                break;
                }
            case 3:
                {
                display();
                break;
                }

            case 4:
                exit(0);
            default:
                {
                cout<<"Wrong Choice.";
                break;
                }
            }
    }while(ch!=4);
    return 0;
}
void push(int x)
{
    if(top==size-1)
    cout<<"Stack Overflow\n";
    else{
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top=-1)
    cout<<"Stack Underflow\n";
    else
    {
        cout<<"The popped element is "<< stack[top]<<endl;
        top--;
    }
}
void display()
{
    if(top>=0)
        {
      cout<<"Stack elements are:";
      for(int i=top;i>0;i--)
      cout<<stack[i]<<" "<<endl;
        }
    else{
        cout<<"Stack is empty";
    }
}
