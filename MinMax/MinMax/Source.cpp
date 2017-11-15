#include <iostream>
using namespace std;

#include "MinMax.h"

void main()
{
	cout << minMax(1, 2, 3, CopmCreter("Min")) << endl;
	cout << minMax(1, 3, 2, CopmCreter("Max")) << endl;
	cout << minMax(2, 1, 3, CopmCreter("Min")) << endl;
	cout << minMax(2, 3, 1, CopmCreter("Max")) << endl;
	cout << minMax(3, 1, 2, CopmCreter("Min")) << endl;
	cout << minMax(3, 2, 1, CopmCreter("Max")) << endl;
}


//#include "MinMax2.h"
//
//void main()
//{
//	cout << minMax(1, 2, 3,"Min") << endl;
//	cout << minMax(1, 3, 2,"Max") << endl;
//	cout << minMax(2, 1, 3,"Min") << endl;
//	cout << minMax(2, 3, 1,"Max") << endl;
//	cout << minMax(3, 1, 2,"Min") << endl;
//	cout << minMax(3, 2, 1,"Max") << endl;
//}
