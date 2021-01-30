#include "puzzles/functions.h"
#include <chrono> 
#include <iostream> 
using namespace std::chrono;
using namespace std;

int main()
{
    auto start = high_resolution_clock::now();
    eng_math();
    putin();
    abc_fast();
    abc();
    lesok();
    abba();
    gnom();
    maiz();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "overall time in ms " << duration.count() << endl;
    return 0;
}
