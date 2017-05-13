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
	delete dataItems;
}

void ListADT::insert(const DataType & newDataItem)
{
	if (size + 1 <= maxSize) 
	{
	
		dataItems[cursor] = newDataItem;
		size++;
		cursor++;
	}

}

void ListADT::remove()
{
	if (size - 1 >= 0)
		cursor--;
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
		//std::cout << "C: " << cursor << std::endl; //правильный результат
	//cursor++;
		return dataItems[cursor]; // возвращает мусор
	}
	else
	{
		std::cout << "Empty list" << std::endl;
	}
}
