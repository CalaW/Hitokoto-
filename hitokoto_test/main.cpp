#include <iostream>
#include <ctime>
#include "Hitokoto.h"

using std::cin;
using std::cout;

int main()
{
    Hitokoto::loadFromFile("hitokoto.txt");

    new Hitokoto(Time::now(), "currenttime", Hitokoto_type::thought);
    Hitokoto::saveToFile("hitokoto.txt");

    unsigned long year, mon, day, hour, min, sec;
    cin >> year >> mon >> day >> hour >> min >> sec;
    Time temptime(year, mon, day, hour, min, sec);
    Hitokoto_type type;
    cin >> type;
    new Hitokoto(temptime, "Hello world", type);
    Hitokoto::saveToFile("hitokoto.txt");

    Hitokoto(temptime, "wht", Hitokoto_type::word);
    // while (true) {
    //     string operation;
    //     cin >> operation;
    //     if (operation == "add") {
    //     }
    //     Hitokoto::saveToFile("operation.txt");
    // }

    Hitokoto::saveToFile("hitokoto.txt");
    return 0;
}