#include<iostream>
using namespace std;
#define maxsize 10
class queue
{
public:
    int front=0,rear=-1,arr[maxsize],value;
    void enqueue()
    {
        if (rear==(maxsize)-1)
        {
            cout<<"Queue is full";
        }
        else

        {
            rear=rear+1;
            cout<<" Enter a value: ";
            cin>>value;
            arr[rear]=value;
        }
    }
    void dequeue()
    {

        if (front>rear)
            cout<<"Queue is empty";
        else
        {
            value=arr[front];
            cout<<"The value is: "<<arr[front]<<endl;
            front=front+1;
        }
    }
    void displayAll()
    {
        if (front>rear)
        cout<<"Queue is empty";
        else
            {

        cout<<"Displaying all queue elements..."<<endl;
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<endl;
        }
            }
    }
    void displayFront()
    {

        cout<<"The front element is: "<<arr[front]<<endl;
    }
};
int main()
{

    queue q;
    cout<<" Enter 1 for 'enqueue' \n Enter 2 for 'dequeue' \n Enter 3 for displaying all queue elements \n Enter 4 for displaying the front element"<<endl;
    int choice;
    while (choice!=5)
    {

        cout<<"\n Enter choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            q.enqueue();
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.displayAll();
            break;
        case 4:
            q.displayFront();
            break;
        }
    }
    return 0;
}
