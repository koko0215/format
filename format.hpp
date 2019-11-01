#include<string>
#include<tuple>
#include<algorithm>
#include<vector>
class Koko{
    public:
        template <typename... Args>
        auto format(Args... args)
            -> std::tuple<Args...>
            {
                return {args...};
            }
};