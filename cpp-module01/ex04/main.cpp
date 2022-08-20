#include <cstring>  
#include <fstream>
#include <iostream>
#include <ostream>

using namespace std;

int main(int ac, char **av)
{

    if (ac != 4) 
        cout << "three agruments required [filename] [s1] [s2]" << endl;
    else
    {
        //params
        const char *file_path = av[1];
        string s1(av[2]);
        string s2(av[3]);
        //c++ bby
        ifstream file_stream;
        file_stream.open(file_path);
        if (!file_stream) {cout << "could not open input file" << endl;
            return 1;}
        string file((istreambuf_iterator<char>(file_stream)), istreambuf_iterator<char>());
        file_stream.close();
        //file.replace(s1, s2);
        string::size_type start = 0;
        while ((start = file.find(s1, start)) != string::npos) {
            file.insert(start, s2);
            file.erase(start + s2.length(), s1.length());
            start += s2.length();
        }
        //whole new file cuz why not
        ofstream new_file;
        new_file.open((string(file_path) + ".replace").data());
        new_file << file;
    }
    
    return (0);
}