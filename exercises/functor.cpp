#include <iostream>

class Multiplier
{
    private: 
    int _factor;

    public:
    Multiplier(int factor):_factor(factor){}
    int operator()(int x) const 
    {
    return x * _factor;
    }

};

int main (){

    Multiplier multiplierByThree(3);
    int result = multiplierByThree(4);
    std::cout<<result<<std::endl;

    return 0;
}