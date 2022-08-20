#ifndef DATA_H
#define DATA_H
#include "bits/stdc++.h"
using namespace std;
struct Data
{
    string name;
    string content;
    time_t creationTime;
};

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);
#endif