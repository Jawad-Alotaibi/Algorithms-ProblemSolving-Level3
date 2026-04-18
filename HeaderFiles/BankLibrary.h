#pragma once

#include <iostream>
#include "MyInputLibrary.h"
#include "StringLibrary.h"
#include "FileLibrary.h"
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
using namespace StringLibrary;

namespace BankLibrary
{

    struct stClient
    {
        string accountNumber;
        string pinCode;
        string name;
        string phone;
        double accountBalance;
    };

    stClient readNewClient()
    {
        stClient client;

        cout << "Enter Account Number? ";
        getline(cin >> ws, client.accountNumber);

        cout << "Enter PinCode? ";
        getline(cin, client.pinCode);

        cout << "Enter Name? ";
        getline(cin, client.name);

        cout << "Enter Phone? ";
        getline(cin, client.phone);

        cout << "Enter Account Balance? ";
        cin >> client.accountBalance;

        return client;
    }

    string convertRecordToLine(stClient clientData, string delm = "#//#")
    {
        // string s1 = "";
        // s1 += clientData.accountNumber + delm;
        // s1 += clientData.pinCode + delm;
        // s1 += clientData.name + delm;
        // s1 += clientData.phone;
        // s1 += to_string(clientData.accountBalance);

        return (string)clientData.accountNumber + delm + clientData.pinCode + delm +
               clientData.name + delm + clientData.phone + delm + to_string(clientData.accountBalance);
        ;
    }

    stClient convertLineToRecord(string line, string delm = "#//#")
    {
        stClient client; // declare a structure

        vector<string> vClientData = splitString(line, delm);

        client.accountNumber = vClientData[0];
        client.pinCode = vClientData[1];
        client.name = vClientData[2];
        client.phone = vClientData[3];
        client.accountBalance = stod(vClientData[4]); // string to double conversion function in c++ called stod

        return client;
    }

    void printClientData(stClient client)
    {
        int width = 18; // Adjust this number based on your longest label

        cout << left << setw(width) << "Account Number:" << client.accountNumber << endl;
        cout << left << setw(width) << "Pin Code:" << client.pinCode << endl;
        cout << left << setw(width) << "Name:" << client.name << endl;
        cout << left << setw(width) << "Phone:" << client.phone << endl;
        cout << left << setw(width) << "Account Balance:" << client.accountBalance << endl;
    }

    void addClientToFile(stClient client)
    {
        fstream file;
        file.open(FILENAME, ios::out | ios::app);

        string line = convertRecordToLine(client);
        if (file.is_open())
        {
            file << line << endl;
        }
    }

    void addNewClient()
    {
        char wannaAddUser = 'y';
        stClient client;

        while (wannaAddUser == 'y' || wannaAddUser == 'Y')
        {
            cout << "Adding New Client" << endl
                 << endl;

            client = readNewClient();
            addClientToFile(client);

            cout << "Client Added Successfully, do you want to add more clients?";
            cin >> wannaAddUser;

            if (! (wannaAddUser == 'y' || wannaAddUser == 'Y'))
            {
                break;
            }
        }
    }
}