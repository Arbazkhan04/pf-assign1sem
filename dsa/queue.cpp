#include<iostream>
using namespace std;
int head=-1;
int tail=-1;
const int mazSize=10;
int arr[mazSize];
void Enqueue(int);
bool checkIsQueueFull();
int dequeue();
bool checkQueueIsEmpty();
int elementAfterDequeue();
int main()
{
Enqueue(1);
Enqueue(2);
cout<<"dequeu elelment"<<dequeue()<<endl;
cout<<"element That is left after the dequeue "<<elementAfterDequeue()<<endl;
Enqueue(10);
Enqueue(11);
cout<<"dequeu elelment"<<dequeue()<<endl;
cout<<"element That is left after the dequeue "<<elementAfterDequeue()<<endl;

}
void Enqueue(int x)//push into the queue
{
  if(checkIsQueueFull())
  {
    cout<<"queue is overFlow ";
  }
  arr[++tail]=x;
}
bool checkIsQueueFull()
{
    if(tail==mazSize-1)
    {
        return true;
    }
    return false;

}

int dequeue()
{
  if(checkQueueIsEmpty())
  {
    cout<<"queueu is underFlow";
  }
  return arr[++head];
}
bool checkQueueIsEmpty()
{
    if(head==tail)
    {
        return true;
    }
    return false;
}
int elementAfterDequeue()
{
    if(checkQueueIsEmpty())
    {
        cout<<"No element is left";
    }
    return arr[head+1];
}