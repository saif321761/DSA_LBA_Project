#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void enqueu(int element) {
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      rear++;
      queue[rear] = element;
      cout<<"inserted element in queue is : "<<element<<endl;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   enqueu(5);
   enqueu(3);
   enqueu(4);
   
   return 0;
}
