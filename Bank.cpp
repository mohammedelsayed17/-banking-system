#ifndef BANK_H
#define BANK_H
#include "Client.cpp"
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Bank
{
private:
    string name;
    string phone;
    string address;
    vector<Client> clients;
    vector<Account> accounts;

public:
    Bank(string N, string add, string pho) : name(N), address(add), phone(pho) {}
    void set_name(string N)
    {
        name = N;
    }
    void set_add(string add)
    {
        address = add;
    }
    void set_pho(string pho)
    {
        phone = pho;
    }
    string get_name()
    {
        return name;
    }
    string get_add()
    {
        return address;
    }
    string get_pho()
    {
        return phone;
    }
    void add_Clients(Client newclient, Account newaccount)
    {
        clients.push_back(newclient);
        accounts.push_back(newaccount);
        cout << "client and Account successifly added " << endl;
    }
    void display()
    {
        if (clients.empty())
        {
            cout << "no founded client " << endl;
            return;
        }
        for (size_t i = 0; i < clients.size(); i++)
        {
            clients[i].display();
        }
    }
};

#endif