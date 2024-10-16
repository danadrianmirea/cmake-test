#include <cstdint>
#include <iostream>
#include <vector>

void printVec(std::vector<int> &v)
{
    std::cout << std::endl;
    for (auto e : v)
    {
        std::cout << "Value is: " << e << std::endl;
    }
    std::cout << std::endl;
}

int32_t main()
{
    std::vector<int> v = {3, 4, 8, 2};

    printVec(v);
    v.push_back(18);
    printVec(v);

    return 0;
}