#include "functions.h"
#include <chrono> 
#include <iostream> 
using namespace std::chrono;
using namespace std;

int main()
{
	auto start = high_resolution_clock::now();
	abc();
	abc_fast();
	abba();
	lesok();	
	naumova_fast();
	naumova();
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop - start);
	cout << duration.count() << endl;
	return 0;
}
