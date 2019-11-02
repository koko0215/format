#include <string>
#include <tuple>
#include <algorithm>
#include <vector>
#include <iostream>
namespace koko
{
template <typename Arg, typename... Args>
auto format(std::string str, Arg arg, Args... args)
{
    auto result = str.find("{}");
    str.insert(result, arg);
    if (result == std::string::npos)
    {
        return str;
    }
    format(str, args);
}
}; // namespace koko