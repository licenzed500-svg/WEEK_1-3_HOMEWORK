//8b


#include <iostream>
#include <cmath>

short calculate(short x)
{
    short result = 0;
    result = abs(x) + pow(x, 5);
    return result;
}


void data_out(short result)
{
    std::cout << "result is" << result << "\n";
}


void __program()
{
    const short x = -2;
    short result =  calculate(x);
    data_out(result);
}


int main()
{
    __program();
}

