//header

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
    std::cout << "Debug messages contain contextual information."
              <<"They are mostly used for problem diagnosis.\n"
              << "Harl: I love to have a dessert after my meal." << std::endl;
}

void Harl::info()
{
    std::cout << "These messages contain extensive information. They are "
            << "helpful for tracing program execution in a production environment.\n"
            << "Harl: Cant believe they are so expensive." << std::endl;
}

void Harl::warning()
{
    std::cout << "Warning messages indicate a potential issue in the system."
            << "However, it can be handled or ignored.\n"
            << "Harl: I deserve a discount or free desserts." << std::endl;
}

void Harl::error()
{
    std::cout << "These messages indicate an unrecoverable error has occurred."
            << "This is usually a critical issue that requires manual intervention.\n"
            << "Harl: This is horrible, I wont come back here." <<std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[4])();
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;

    std::string levels[4];
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
            (this->*functions[i])();
    }

}