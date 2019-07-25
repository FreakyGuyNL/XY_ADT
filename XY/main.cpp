#include "XY.hpp"


int main()
{
    XY coordinateOne(5, 2);
    XY coordinateTwo(7, 1);
    std::cout << coordinateOne;     // Output: X: 5
                                    //         Y: 2
    coordinateOne += coordinateTwo;
    std::cout << coordinateOne;     // Output: X: 12
                                    //         Y: 3
}