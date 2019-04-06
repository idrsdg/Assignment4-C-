#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstddef>
#include <new>

using namespace std;

class FullQueue{};

class EmptyQueue{};

struct NodeType
{
	string info;
	NodeType* next;
};
		
class QueType
{
	public:
		QueType();
		~QueType();
		void MakeEmpty();
		void Enqueue(string,bool);
		string Dequeue();
		bool IsEmpty();
		bool IsFull();
	private:
		
		NodeType* front;
		NodeType* rear;
		int counter=0;
};

void EnqueueHelper(bool&,string&);
void DequeueHelper(string);




