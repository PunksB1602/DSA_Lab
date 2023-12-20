#include <iostream>
#define size 10
using namespace std;
int stack[size],top = -1;
void push(int x) {
   if(top ==size-1)
      cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top] = x;
   }
}
void pop() {
   if(top == -1)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>= 0) {
      cout<<"Stack elements are:";
      for(int i = top; i>= 0; i--)
         cout<<stack[i]<<" ";
      cout<<endl;
   } else
      cout<<"Stack is empty";
}
void total_no_of_elements(){}
int main() {
   int ch, x;
   cout<<" Press 1 for Push \n Press 2 for Pop \n Press 3 for Display \n Press 4 for Total number of elements in the stack \n Press 5 to exit"<<endl;
   do {
      cout<<"\nEnter choice:";
      cin>>ch;
      switch(ch) {
         case 1:
            cout<<"Enter value to be pushed:";
            cin>>x;
            push(x);
            break;
         case 2:
            pop();
            break;
         case 3:
            display();
            break;
         case 4:
         total_no_of_elements();
         cout<<"Total number of elements is: "<<top+1;
         break;
         case 5: {
            exit(0);
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(1);
   return 0;
}
