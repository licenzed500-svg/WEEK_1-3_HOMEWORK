
//ВАРИАНТ 14 Типы данных и формулы

#include <iostream>
#include <string.h>

struct date
{
    short day = 0;
    short month = 0;
    int year = 0;
};

struct film_description
{
    std::string name;
    std::string genre;
    float finance;
    date film_date;
};

void data_out(film_description some_film)
{
    system("cls");
    std::cout << "name is:\t" << some_film.name << "\n";
    std::cout << "genre is:\t" << some_film.genre << "\n";
    std::cout << "finance is:\t" << some_film.finance << "\n";
    std::cout << "date of production:\t" << some_film.film_date.day << "." << some_film.film_date.month << "." << some_film.film_date.year  << "\n";
}

date get_date(date film_date)
{
    std::cout << "enter day:";
    std::cin >> film_date.day;
    std::cout << "\n";
    std::cout << "enter month:";
    std::cin >> film_date.month;
    std::cout << "\n";
    std::cout << "enter year:";
    std::cin >> film_date.year;
    std::cout << "\n";
    return film_date;
}

film_description get_data(film_description some_film)
{
    std::cout << "enter name:";
    std::cin >> some_film.name;
    std::cout << "\n";
    std::cout << "enter genre:";
    std::cin >> some_film.genre;
    std::cout << "\n";
    std::cout << "finance:";
    std::cin >> some_film.finance;
    std::cout << "\n";
    some_film.film_date = get_date(some_film.film_date);
    return some_film;
}

int main()
{
    film_description new_film;
    new_film = get_data(new_film);
    data_out(new_film);
    
}


