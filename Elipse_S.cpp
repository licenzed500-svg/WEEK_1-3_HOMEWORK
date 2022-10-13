//2j

#include <iostream>
#include <cmath>

#define M_pi 3.14

float elipseS(float rad, float axleShaft_a, float axleshaft_b)
{
    float result = M_pi * axleShaft_a * axleshaft_b;
    return result;
}

void data_out(float result)
{
    std::cout << "result is:" << result;
    std::cout << "\n";
}
void __program()
{
    float rad = 0;
    float axleShaft_a = 0;
    float axleShaft_b = 0;
    float result = 0;
    std::cout << "enter radius:";
    std::cin >> rad;
    std::cout << "\n";
    std::cout << "enter axle shaft a:";
    std::cin >> axleShaft_a;
    std::cout << "\n";
    std::cout << "enter axle shaft b:";
    std::cin >> axleShaft_b;
    std::cout << "\n";
    result = elipseS(rad, axleShaft_a, axleShaft_b);
    data_out(result);
}
int main()
{
    __program();
}

