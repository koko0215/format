#include <iostream>
#include <string>
#include "format.hpp"
using namespace std;
int main()
{

    string output = koko::format("ho{}ge", 10);
    cout << output << endl;
}