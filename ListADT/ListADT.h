#pragma once
#include<iostream>

const int defMaxListSize = 10;
typedef int DataType;

class ListADT
{
private:
	//Data members
	int maxSize=11;
	int size;
	int cursor;

	DataType *dataItems=NULL;
public:
	//Constructor
	ListADT(int maxNumber = defMaxListSize);

	//Destructor
	~ListADT();

	//List manipulation operations
	void insert(const DataType &newDataItem);	//Insert after cursor
	void remove();								//Remove Data item
	void replace(const DataType &newDataItem);	//Replace data item


	//List status operations 
	bool isEmpty()const;						//List is empty
	bool isFull() const;						//List is full

	//List iteration operations
	void gotoBeginning() ;	//Go to beginning
	void gotoEnd();			//Go to end
	bool gotoNext();		//Go to next data item
	bool gotoPrior();		//Go to prior data item
	DataType getCursor();   //Return data item

	//Output the list structure -used in testinf/debugging
	//void showStructure()const;
};

