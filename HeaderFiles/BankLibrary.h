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
using namespace FileLibrary;

const string FILENAME = "clients.txt";

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
        getline(cin >> ws, client.accountNumber); // cleans leftover '\n', then reads, then consumes '\n'  → buffer clean

        cout << "Enter PinCode? ";
        getline(cin, client.pinCode); // reads, then consumes '\n' → buffer clean

        cout << "Enter Name? ";
        getline(cin, client.name); // reads, then consumes '\n' → buffer clean

        cout << "Enter Phone? ";
        getline(cin, client.phone); // reads, then consumes '\n' → buffer clean

        cout << "Enter Account Balance? ";
        cin >> client.accountBalance; // reads value, leaves '\n' ⚠️

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

        // Validate that we have all required fields
        if (vClientData.size() < 5)
        {
            // Return empty client if line is malformed
            client.accountNumber = "";
            client.pinCode = "";
            client.name = "";
            client.phone = "";
            client.accountBalance = 0;
            return client;
        }

        client.accountNumber = vClientData[0];
        client.pinCode = vClientData[1];
        client.name = vClientData[2];
        client.phone = vClientData[3];
        
        try {
            client.accountBalance = stod(vClientData[4]); // string to double conversion function in c++ called stod
        } catch (const invalid_argument& e) {
            client.accountBalance = 0;
        }

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

    void addClientToFile(stClient client, string line)
    {
        fstream file;
        file.open(FILENAME, ios::out | ios::app);

        if (file.is_open())
        {
            file << line << endl;
        }
        file.close();
    }

    void addNewClient()
    {
        stClient client;
        client = readNewClient();
        addClientToFile(client, convertRecordToLine(client));
    }
    void addClients()
    {
        char wannaAddUser = 'y';

        do
        {
            addNewClient();
            cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";
            cin >> wannaAddUser;
        } while (toupper(wannaAddUser) == 'Y');
    }

    void printAllClientsHeader(int clientsNumber)
    {
        cout << "________________________________________________________________________" << endl;
        cout << "\t\tClients list (" << clientsNumber << ") Client(s)." << endl;
        cout << "________________________________________________________________________" << endl;
    }

    void printClientsDetails(vector<stClient> clients)
    {

        cout << "| Account Number " ;
        cout << " | Pin Code ";
        cout  << " | Client Name ";
        cout << " | Phone ";
        cout << " | Balance ";
        cout << endl << "________________________________________________________________________" << endl;

        for (stClient &client : clients)
        {
            cout << "| " << left << setw(10) << client.accountNumber;
            cout << "| " << left << setw(10) << client.pinCode;
            cout << "| " << left << setw(20) << client.name;
            cout << "| " << left<< setw(10) << client.phone;
            cout << "| " << left << setw(10) << client.accountBalance << right << setw(1) << "|";

            cout << endl;
        }
    }

    void printAllClients(vector<stClient> clients)
    {
        printAllClientsHeader(clients.size());
        printClientsDetails(clients);
    }

    void showAllClients()
    {
        vector<string> lines;
        vector<stClient> clients;

        // stClient client;
        loadDataFromFileToVector(FILENAME, lines);

        for (short i = 0; i < lines.size(); i++)
        {
            clients.push_back(convertLineToRecord(lines[i]));
        }

        printAllClients(clients);
    }

}