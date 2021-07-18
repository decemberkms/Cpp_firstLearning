#include <iostream>
#include <cstdio>

int main()
{
    using namespace std;
    int x = 1024;
    double p = 3.141592;


    //std::cout << "I love this lecture!\n";   // almost the same but not exactly
    //std::cout << "x is " << x << std::endl;
    cout << "I love this lecture!\n";   // almost the same but not exactly
    cout << "x is " << x << std::endl;

    std::cout << p << std::endl;
    std::cout << "abc" << "\t" << "def" << std::endl;
    std::cout << "ab" << "\t" << "cdef" << std::endl;  // line alignment!

    cout << "\a";   // audio output!!

    //std::cin >> 
    int y;
    cin >> y;

    cout << "Your input is " << y << endl;



    return 0;
}