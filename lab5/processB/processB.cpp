#include "stdafx.h"
#include <iostream>

int main(int argc, char* argv[])
{
	char myPid[100];
	sprintf(myPid, "%i", GetCurrentProcessId());

	std::cout << myPid << "\n";

	/*while (true)
	{
		printf("\nHello World! from ProcessB working forever... \n");
	}*/
	return 0;
}