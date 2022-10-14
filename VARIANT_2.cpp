//Вариант 2 Типы данных и формулы

#include <iostream>
#include <string>

struct date
{
	short day;
	short month;
	int year;
};


struct person
{
	std::string surname;
	std::string initials;
	std::string job_title;
	float salary = 0;
	date date_of_approve;
};

date get_date(date approve_date)
{
	std::cout << "enter approve day: ";
	std::cin >> approve_date.day;
	std::cout << "\n";
	std::cout << "enter approve month: ";
	std::cin >> approve_date.month;
	std::cout << "\n";
	std::cout << "enter approve year: ";
	std::cin >> approve_date.year;
	std::cout << "\n";
	return approve_date;
}

person person_in(person person_data)
{
	std::cout << "enter surname: ";
	std::cin >> person_data.surname;
	std::cout << "\n";
	std::cout << "enter initials: ";
	std::cin >> person_data.initials;
	std::cout << "\n";
	std::cout << "enter job title:";
	std::cin >> person_data.job_title;
	std::cout << "\n";
	std::cout << "enter salary:";
	std::cin >> person_data.salary;
	std::cout << "\n";
	std::cout << "enter date of arrive:";
	person_data.date_of_approve = get_date(person_data.date_of_approve);
	system("cls");
	return person_data;
}

void data_out(person person_data)
{
	std::cout << "surname is:\t" << person_data.surname << "\n";
	std::cout << "initials is:\t" << person_data.initials << "\n";
	std::cout << "job title is:\t" << person_data.job_title << "\n";
	std::cout << "date of arrive is:\t" << person_data.date_of_approve.day << "." << person_data.date_of_approve.month << "." << person_data.date_of_approve.year;
	std::cout << "salary is:\t" << person_data.salary << "\n";
}

int main()
{
	person some_person;
	some_person = person_in(some_person);
	data_out(some_person);
}
