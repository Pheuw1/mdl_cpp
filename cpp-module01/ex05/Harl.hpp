#ifndef HARL_H
#define HARL_H
#include <iostream>
#include <algorithm> 
#include <string>  
#include <vector>
#include <map>
using namespace std;

class Harl
{

public:
    Harl();
    void allow_above_levels(string);
    void print_all(void);
    void init(void);
    void complain( std::string);
    map<string, void (*)()> code;
    
private:
    static void debug( void );
    static void info( void );
    static void warning( void );
    static void error( void );

};
#endif