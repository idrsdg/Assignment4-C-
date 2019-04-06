#include "QueClass.h"

QueType::QueType()
{
	front=NULL;
	rear=NULL;
}

void QueType::MakeEmpty()
{
	NodeType* tempPtr;
	while(front!=NULL)
	{
		tempPtr=front;
		front=front->next;
		delete tempPtr;
	}
	rear=NULL;
}

QueType::~QueType()
{
	MakeEmpty();
}

bool QueType::IsFull()
{
	NodeType* location;
	try{
		location=new NodeType;
		delete location;
		return false;
	}
	catch(std::bad_alloc exception)
	{
		return true;
	}
}

bool QueType::IsEmpty()
{
	return(front==NULL);
}

void QueType::Enqueue(string newItem,bool premium)
{
	if(IsFull())
		throw FullQueue();
	else if(premium==0)
	{
		NodeType* newNode;
		newNode=new NodeType;
		newNode->info=newItem;
		newNode->next=NULL;
		if(rear==NULL)
			front=newNode;
		else
			rear->next=newNode;
		rear=newNode;
	}
	else if(premium==1)
	{
		if(counter==0)
		{
			NodeType* newNode;
			newNode=new NodeType;
			newNode->info=newItem;
			if(rear==NULL)
			{
				rear=newNode;
			}
			else
			{
				newNode->next=front;
			}
			front=newNode;
			counter++;
		}
		else
		{
			NodeType* newNode;
			NodeType* loc;
			NodeType* preLoc;
			newNode=new NodeType;
			newNode->info=newItem;
			loc=front;
			preLoc=NULL;
			for(int i=0;i<counter;i++)
			{
				preLoc=loc;
				loc=loc->next;
			}
			newNode->next=loc;
			preLoc->next=newNode;
			counter++;
		}

	}
}


string QueType::Dequeue()
{
	if(IsEmpty())
	{
		throw EmptyQueue();
	}
	else
	{
		string item;
		NodeType* tempPtr;
		tempPtr=front;
		item=front->info;
		front=front->next;

		if(front==NULL)
			rear=NULL;
		delete tempPtr;

		if(counter!=0)
		{
			counter--;
		}
		return item;
	}
}

void EnqueueHelper(bool &premium,string& item)
{
	string customer1[2];
	string customer2[3];
	string cus;
	cin >> cus;
	if(cus=="Customer")
	{
		for(int j=0;j<2;j++)
			cin >> customer1[j];
		item=customer1[0];
		premium=0;
	}
	else if(cus=="Premium")
	{
		for(int j=0;j<3;j++)
			cin >> customer2[j];
		item=customer2[1];
		premium=1;
	}
}

void DequeueHelper(string item)
{
	cout <<	"Operator answers : Customer " << item << " served" << endl;
}



