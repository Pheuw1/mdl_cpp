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
    void init(void);
    Harl();
    void print_above_levels(string level);
    void print_all();
    void complain( std::string level );
    map<string, void (*)()> code;
    
private:
    static void debug( void );
    static void info( void );
    static void warning( void );
    static void error( void );


};
#endif