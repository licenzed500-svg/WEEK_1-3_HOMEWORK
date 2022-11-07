//Вариант 2 Пример

#include <iostream>
#include <cmath>

#define M_PI 3.14
#define M_E 2.718

struct data
{
	float k = 0;
	float x = 0;
	float y = 0;
	float a = 0;
};

data calculate_k(data user_data)
{
	user_data.k = ((user_data.y + 11) / 2);
	return user_data;
}

data calculate_a(data user_data)
{
	user_data.a = (exp(M_PI*tan(user_data.k))) - log(abs(user_data.x)))/ user_data.k * user_data.x + pow(10, 5);
	return user_data;
}

data get_data(data user_data)
{
	std::cout << "enter x:";
	std::cin >> user_data.x;
	std::cout << "\n";
	std::cout << "enter y:";
	std::cin >> user_data.y;
	std::cout << "\n";
	return user_data;
}

void data_out(data user_data)
{
	std::cout << "k is:\t" << user_data.k << "\n";
	std::cout << "a is:\t" << user_data.a << "\n";
}
int main()
{
	data some_data;
	some_data = get_data(some_data);
	some_data = calculate_k(some_data);
	some_data = calculate_a(some_data);
	data_out(some_data);
}
