#include <string>
#include <tuple>
#include <algorithm>
#include <vector>
#include <iostream>
class Koko
{
public:
    template <typename Arg, typename... Args>
    auto format(std::string str, Arg arg, Args... args)
    {
        auto result = str.find("{}");
        std::cout << result << std::endl;
    }
};