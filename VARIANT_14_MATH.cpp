
//Вариант 14 пример

#include <iostream>
#include <cmath>

#define M_PI 3.14
#define M_E 2.718

struct data
{
	float a = 0;
	float b = 0;
	float x = 0;
	float y = 0;
};

data calculate_b(data my_data)
{
	my_data.b = (2 * cos(my_data.x - (M_PI / 6))) / (1 / my_data.x + pow(sin(my_data.y), 2));
	return my_data;
}

data calculate_a(data my_data)
{
	my_data.a = pow(M_E, my_data.b - 1) + pow(tan(my_data.x), 2);
	return my_data;
}

data get_data(data my_data)
{
	std::cout << "enter x:";
	std::cin >> my_data.x;
	std::cout << "\n";
	std::cout << "enter y:";
	std::cin >> my_data.y;
	std::cout << "\n";
	return my_data;
}

void data_out(data my_data)
{
	std::cout << "a is:" << my_data.a << "\n";
	std::cout << "b is:" << my_data.b << "\n";
}

int main()
{
	data my_data;
	my_data = get_data(my_data);
	my_data = calculate_b(my_data);
	my_data = calculate_a(my_data);
	data_out(my_data);
}
