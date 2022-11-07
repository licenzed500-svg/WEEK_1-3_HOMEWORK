//Вариант 1 Пример

#include <iostream>
#include <cmath>

#define M_PI 3.14
#define M_E 2.718


struct data
{
	float y = 0;
	float z = 0;
	float b = 0;
	float a = 0;
};



data calculate_z(data user_data)
{
	user_data.z = abs(user_data.b - 15.1);
	return user_data;
}

data calculate_y(data user_data)
{
	user_data.y = (exp(user_data.a*(-1))) + ((user_data.z + pow(10, 3)))) / (sin(user_data.z))) / cos(M_PI) * user_data.z + log(user_data.b);
	return user_data;
}

data get_data(data user_data)
{
	std::cout << "enter b:";
	std::cin >> user_data.b;
	std::cout << "\n";
	std::cout << "enter a:";
	std::cin >> user_data.a;
	std::cout << "\n";
	return user_data;
}

void data_out(data user_data)
{
	std::cout << "z is:\t" << user_data.z << "\n";
	std::cout << "y is:\t" << user_data.y << "\n";
}

int main()
{
	data some_data;
	some_data = get_data(some_data);
	some_data = calculate_z(some_data);
	some_data = calculate_y(some_data);
	system("cls");
	data_out(some_data);
}
