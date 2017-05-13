#include <iostream>
#include "ListADT.h"

void main()
{
	ListADT samples;
	int newSample=0;
	int total = 0;

	//Read in a set of samples from the keyboard.
	std::cout << "Enter list of samples (end with eof): ";
	
	
	while(std::cin >> newSample)
		samples.insert(newSample);
	
	//Sum the samples and output the result.

		if (!samples.isEmpty())
		{
			samples.gotoBeginning();
			
			do {
				total += samples.getCursor();
			}
			while (samples.gotoNext());
		}
		std::cout << "Sum is " << total << std::endl;
		system("pause");
}