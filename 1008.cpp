#include<iostream>

int main(){
    int a, b;
    double c;
    std::cin >> a >> b;
    c = (double)a/(double)b;
    std::cout.precision(10);
    std::cout << c;

}