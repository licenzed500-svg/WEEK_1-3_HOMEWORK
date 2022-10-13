//9H


//В ПРОЦЕССЕ.....


#include <iostream>
#include <cmath>

void menu_out()
{
	std::cout << "-------------------------\n";
	std::cout << "1. Gcals to ccals\n";
	std::cout << "2. Cclas to gccals\n";
	std::cout << "3. Gccals to dzhoul\n";
	std::cout << "4. Dzhoul to gcals\n";
	std::cout << "5. Gcals to erg\n";
	std::cout << "6. Erg to gccals\n";
	std::cout << "-------------------------\n";
}

void __converts_from_gcal_to_dzh(short gcals)
{
	
}

short __action()
{
	short action = 0;
	menu_out();
	std::cout << "enter action:"; std::cin >> action; std::cout << "\n";
	return action;
}


void __program()
{
	struct converts_from_gcal_to_dzh
	{
		short gcal_per_minute = 1;
		float dzh_per_hour = 6.98 * pow(10,7);
	};
	struct converts_from_gcal_to_ccal
	{
		short gcal_per_minute = 1;
		long ccal_per_hour = 277000;
	};
	struct converts_from_gcal_to_erg
	{
		short gcal_per_minute = 1;
		long erg_per_second = 11630000000000;
	};

	converts_from_gcal_to_dzh gcal_to_dzh;
	converts_from_gcal_to_ccal gcal_to_ccal;
	converts_from_gcal_to_erg gcal_to_erg;
	
	short action = __action();

}

int main()
{
    __program();
}

