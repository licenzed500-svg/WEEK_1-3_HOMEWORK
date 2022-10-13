// 7

#include <iostream>
#include <cmath>

float __user_number()
{
    float number = 0;
    std::cout << "enter nember:";
    std::cin >> number;
    std::cout << "\n";
    return number;
}
bool enter_action()
{
    short action = 0;
    std::cout << "^2 or ^3 ?  (enter 1 or 2):";
    std::cin >> action;
    if (action == 1)
    {
        return true;
    }
    else if (action == 2)
    {
        return false;
    }
    else
    {
        std::cout << "wrong action!";
        system("cls");
        enter_action();
    }
}
float calculate(float user_number , bool action)
{
    if (action == true)
    {
        user_number = pow(user_number, 2);
        return user_number;
    }
    else
    {
        user_number = pow(user_number, 3);
        return user_number;
    }
}
void data_out(float user_number)
{
    std::cout << "\n";
    std::cout << "your answer:" << user_number << "\n";
}
void __program()
{
    float user_number = __user_number();
    bool action = enter_action();
    user_number = calculate(user_number, action);
    data_out(user_number);
    std::cout << "\n";

}
int main()
{
    __program();
}

