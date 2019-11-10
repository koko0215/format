#include <string>
#include <iostream>
#include <stdexcept>
namespace koko
{
auto format(std::string str)
{
    return str;
}
template <typename Arg, typename... Args>
auto format(std::string str, Arg arg, Args... args)
{
    auto result = str.find("{}");
    if (result == std::string::npos)
        throw std::invalid_argument("There is no '{}' in the first argument");
    str.erase(result, 2);
    str.insert(result, std::to_string(arg));
    return format(str, args...);
}
}; // namespace koko
