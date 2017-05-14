#include "ListADT.h"

ListADT::ListADT(int maxNumber):cursor(0),size(0)
{
	if (maxNumber <= defMaxListSize)
		dataItems = new DataType[maxNumber];
	else
		std::cout << "The list is overloaded" << std::endl;
}

ListADT::~ListADT()
{
	delete [] dataItems;
}

void ListADT::insert(const DataType & newDataItem)
{
	if (size + 1 <= maxSize) 
	{
		dataItems[size] = newDataItem;
		size++;
	}
}

void ListADT::remove()
{
	if (size - 1 >= 0)
		cursor--;
}

void ListADT::replace(const DataType & newDataItem)
{
	if (size + 1 <= maxSize)
	{
		dataItems[cursor] = newDataItem;
		cursor++;
	}
}

bool ListADT::isEmpty() const
{
	if (size <= 0)
		return true;
	else
		return false;
}

bool ListADT::isFull() const
{
	if (size == defMaxListSize)
		return true;
	else
		return false;
}

void ListADT::gotoBeginning()
{
	cursor = 0;
}

void ListADT::gotoEnd()
{
	cursor = size;
}

bool ListADT::gotoNext()
{
	if (cursor < size-1)
	{
		cursor++;
		return true;
	}
	return false;
}

bool ListADT::gotoPrior()
{
	if (!isEmpty() && cursor != 1)
	{
		cursor--;
		return true;
	}
	else return false;
}

DataType ListADT::getCursor()
{
	if (!isEmpty())
	{
		return dataItems[cursor];
	}
	else
	{
		std::cout << "Empty list" << std::endl;
	}
}
