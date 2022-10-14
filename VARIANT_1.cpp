//Вариант 1 Типы данных и формулы

#include <iostream>
#include <string>


struct date
{
	short day;
	short month;
	int year;
};


struct person_data
{
	std::string surname;
	short room_number;
	int price;
	date date_of_arrive;
};


date get_date(date arrive_date)
{
	std::cout << "enter arrive day: ";
	std::cin >> arrive_date.day;
	std::cout << "\n";
	std::cout << "enter arrive month: ";
	std::cin >> arrive_date.month;
	std::cout << "\n";
	std::cout << "enter arrive year: ";
	std::cin >> arrive_date.year;
	std::cout << "\n";
	return arrive_date;
}

person_data person_in(person_data person)
{
	std::cout << "enter surname: ";
	std::cin >> person.surname;
	std::cout << "\n";
	std::cout << "enter room number: ";
	std::cin >> person.room_number;
	std::cout << "\n";
	std::cout << "enter price: ";
	std::cin >> person.price;
	std::cout << "\n";
	std::cout << "enter date of arrive";
	person.date_of_arrive = get_date(person.date_of_arrive);
	system("cls");
	return person;
}

void data_out(person_data person)
{
	std::cout << "surname is:\t" << person.surname << "\n";
	std::cout << "room number is:\t" << person.room_number << "\n";
	std::cout << "price is:\t" << person.price << "\n";
	std::cout << "date of arrive is:\t" << person.date_of_arrive.day << "." << person.date_of_arrive.month << "." << person.date_of_arrive.year;
}

int main()
{
	person_data some_person;
	some_person = person_in(some_person);
	data_out(some_person);
}
