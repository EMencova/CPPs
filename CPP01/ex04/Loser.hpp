//header

#ifndef LOSER_HPP
# define LOSER_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>

class Loser
{
    private:
        std::string input;
        std::string output;

    public:
        Loser(std::string file);
         ~Loser();
        
        void replace(std::string str1, std::string str2);
};

#endif