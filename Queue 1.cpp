#include<iostream>
using namespace std;

class queue{


int*arr;
int front;
int back;

public:
    queue(int n)
    {
    arr=new int [n];
    front=-1;
    back=-1;
    }

};


int main()

{
int queueSize=10;
queue myQueue(queueSize);
return 0;


}
