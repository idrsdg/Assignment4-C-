#include "QueImp.h"

int main()
{
	QueType myQue;
	int i=0;
	bool premium;
	string item;
	EnqueueHelper(premium,item);//enque
	myQue.Enqueue(item,premium);//enque
	EnqueueHelper(premium,item);
	myQue.Enqueue(item,premium);
	EnqueueHelper(premium,item);
	myQue.Enqueue(item,premium);
	EnqueueHelper(premium,item);
	myQue.Enqueue(item,premium);
	DequeueHelper(myQue.Dequeue());//deque
	DequeueHelper(myQue.Dequeue());
	EnqueueHelper(premium,item);
	myQue.Enqueue(item,premium);
	DequeueHelper(myQue.Dequeue());
	DequeueHelper(myQue.Dequeue());
	EnqueueHelper(premium,item);
	myQue.Enqueue(item,premium);
	DequeueHelper(myQue.Dequeue());
	EnqueueHelper(premium,item);
	myQue.Enqueue(item,premium);
	EnqueueHelper(premium,item);
	myQue.Enqueue(item,premium);
	EnqueueHelper(premium,item);
	myQue.Enqueue(item,premium);
	EnqueueHelper(premium,item);
	myQue.Enqueue(item,premium);
	DequeueHelper(myQue.Dequeue());
	DequeueHelper(myQue.Dequeue());
	DequeueHelper(myQue.Dequeue());
	DequeueHelper(myQue.Dequeue());
    DequeueHelper(myQue.Dequeue());
}





