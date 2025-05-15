#include<iostream>
using namespace std;

int Front= 0, Rear= 3, N= 5;
int Queue[]= {1, 2, 3, 6};

void Enqueue(int x)
{
    if(Rear== N-1)
    {
        cout<<"Overflow"<<endl;
    }
    else if(Front==-1 && Rear==-1)
    {
        Front=0;
        Rear=0;
        Queue[Rear]= x;
    }
    else
    {
        Rear++;
        Queue[Rear]=x;
    }
}
void Dequeue()
{
    if(Front==-1 && Rear == -1)
    {
        cout<<"Underflow"<<endl;
    }
    else if(Front== Rear)
    {
        Front= -1;
        Rear=-1;
    }
    else
    {
        Front++;
    }
}
void Peek()
{
    if(Front==-1 && Rear==-1)
    {
        cout<< "Empty"<<endl;
    }
    else
    {
        cout<< Queue[Front]<<" ";;
    }
}
void Display()
{
    if(Front==-1 && Rear==-1)
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        for(int i=Front; i<= Rear; i++)
        {
            cout<< Queue[i]<<" ";
        }
    }
}
int main()
{
    cout<< "Display Queue: " <<endl;
    Display();
    cout<<endl;
    Enqueue(154);
    cout<< "Enqueue: " <<endl;
    Display();
    cout<<endl;
    Dequeue();
    cout<< "Dequeue: " <<endl;
    Display();
    cout<<endl;
    cout<< "Peek: " <<endl;
    Peek();
    return 0;

}

