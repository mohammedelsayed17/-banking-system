#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include "Account.cpp"
using namespace std;
class Client
{
private:
    string name;
    string nationID;
    string address;
    string phone;
    Account account;

public:
    // Account account;
    Client(string N, string NID, string add, string pho, Account acc) : name(N), phone(pho), nationID(NID), address(add), account(acc) {}
    void set_name(string N)
    {
        name = N;
    }
    void set_nationid(string NID)
    {
        nationID = NID;
    }
    void set_address(string add)
    {
        address = add;
    }
    void set_phone(string pho)
    {
        phone = pho;
    }
    void set_Accont(Account acc)
    {
        account = acc;
    }
    string get_name()
    {
        return name;
    }
    string get_nationid()
    {
        return nationID;
    }
    string get_add()
    {
        return address;
    }
    string get_phone()
    {
        return phone;
    }
    Account get_Acc()
    {
        return account;
    }
    virtual void display()
    {
        cout << "Client Name: " << name << "\nNational ID: " << nationID
             << "\nAddress: " << address << "\nPhone: " << phone
             << "\nAccount Balance: " << account.getBalance() << " LE\n";
    }
};
class CommercialClient : public Client
{
private:
    string commercialID;

public:
    CommercialClient(string N, string add, string pho, Account acc, string comid) : Client(N, "0000000000000", add, pho, acc), commercialID(comid) {}
    void set_commid(string comid)
    {
        commercialID = comid;
    }
    string get_commid()
    {
        return commercialID;
    }
    void diplay()
    {
        Client::display();
        cout << "commercialid: " << commercialID << endl;
    }
};
#endif
