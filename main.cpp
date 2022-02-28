#include <iostream>
#include "Linear.h"
 

using namespace std;

int main()
{
	try
	{
		Demo::RunLinearRegression();
		//Demo::RunResNet();
		//Demo::RunMobileNet();
	}
	catch (const exception& e)
	{
		cout << e.what() << "\n";
	}
}