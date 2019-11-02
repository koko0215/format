#include <iostream>
#include <string>
#include "format.hpp"
#include <tuple>
using namespace std;
int main()
{

    string output = koko::format("ho{}ge", 10);
    cout << output << endl;
}