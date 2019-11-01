#include<iostream>
#include"format.hpp"
#include<tuple>
int main(){
    Koko koko;
    std::tuple<std::string, int, double> hoge = koko.format("hoge",114,5.14);
    std::string tuple_1 = std::get<0>(hoge);
    std::cout << tuple_1 << std::endl;
}