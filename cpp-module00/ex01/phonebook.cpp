#include <iostream>
#include <algorithm> 
#include <string>  
#include <vector>
#include <sstream>
#include<limits>
using namespace std;

class Contact
{
public:
    Contact(string, string, string, string, string);
    string f_name;
    string l_name;
    string n_name;
    string secret;
    string number;
};

Contact::Contact(string fname, string lname, string nname, string secret, string number)
: f_name(fname), l_name(lname), n_name(nname), secret(secret), number(number)
{}

class Phonebook
{
public:
    void ADD(Contact);
    void SEARCH();
    vector<Contact> contacts;
};

void Phonebook::ADD(Contact contact)
{
    contacts.push_back(contact);
    if (contacts.size() == 8)
        contacts.erase(contacts.begin());
}

void format_print(string str)
{
    cout << '|';
    for (int i = 0; i < min((int)str.size(), 9); i++)
        cout << str[i];
    if (str.size() > 10)
        cout << '.';
    else
        cout << str[min((int)str.size(), 9)];
    for (int i = 0; i < 10 - (int)str.size(); i++)
        cout << ' '; 
}

void Phonebook::SEARCH()
{
    int i = 0;
    if (contacts.size() < 1) 
        {cout << "No contact to search for\n";
        return ;}
    for (; i < (int)contacts.size(); i++)
    {
        format_print(static_cast< ostringstream & >((ostringstream() << std::dec << i ) ).str());
        format_print(contacts[i].f_name);
        format_print(contacts[i].l_name);
        format_print(contacts[i].n_name);
        cout << "|\n";
    }
    i = -1;
    cout << "contact idx : ";
    while(!(cin >> i) || i > (int)contacts.size() - 1 || i < 0){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.  Try again: ";
    }
    cin.ignore();
    cout << "first name     : " << contacts[i].f_name << '\n';
    cout << "last name      : " << contacts[i].l_name << '\n';
    cout << "nickname       : " << contacts[i].n_name << '\n';
    cout << "darkest secret : " << contacts[i].secret << '\n';
    cout << "phone number   : " << contacts[i].number << endl;
}

int main()
{
    Phonebook pb;
    string cmd;
    string info[5];
    
    while (1)
    {
        cmd = "";
        while (cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT") {
            cout << "You may input the following commands : [ADD] [SEARCH] [EXIT]\n"; getline(cin, cmd);}
        if (cmd == "ADD")
        {
            cout << "first name :\n";           getline(cin, info[0]);
            cout << "last name :" << '\n';      getline(cin, info[1]);
            cout << "nickname :" << '\n';       getline(cin, info[2]);
            cout << "darkest secret :" << '\n'; getline(cin, info[3]);
            cout << "phone number :" << '\n';   getline(cin, info[4]);
            pb.ADD(Contact(info[0],info[1],info[2],info[3],info[4]));
        }
        else if (cmd == "SEARCH")
            pb.SEARCH();
        else if (cmd == "EXIT")
            break;
    }
    cout << "byebye" << endl;
    return(0);
}