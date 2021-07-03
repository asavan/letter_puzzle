#include <chrono> 
#include <iostream> 

void measure(void f())
{
    auto start = std::chrono::high_resolution_clock::now();
    f();
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = duration_cast<std::chrono::milliseconds>(stop - start);
    std::cout << "overall time in ms " << duration.count() << std::endl;
}
