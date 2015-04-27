#include <iostream>
#include <fstream>
#include "ToDoList.h"

using namespace std;

int main()
{
    List toDoList;
    int command = 0;
    while(command != 11)
    {
        string title, Stime, Sindex;

        cout << "======\tMain Menu\t======" << endl
        << "1.\tInsert Task At End" << endl
        << "2.\tInsert Task At Position" << endl
        << "3.\tPrint List" << endl
        << "4.\tPrint Longest Task" << endl
        << "5.\tPrint Shortest Task" << endl
        << "6.\tDelete At Index" << endl
        << "7.\tDelete All Instances" << endl
        << "8.\tReverse List" << endl
        << "9.\tSort Short to Long" << endl
        << "10.\tSort Long to Short" << endl
        << "11.\tQuit" << endl;
        cin >> command;

        if (command == 1)
        {
            cout << "\tPlease enter task title\n\t";
            getline(cin, title);
            getline(cin, title);
            cout << "\tPlease enter time to complete(min)\n\t";
            cin >> Stime;
            cout << endl;
            toDoList.pushBack(title,stoi(Stime));
        }
        if (command == 2)
        {
            cout << "\tPlease enter task title\n\t";
            getline(cin, title);
            getline(cin, title);
            cout << "\tPlease enter time to complete(min)\n\t";
            cin >> Stime;
            cout << "\tPlease enter index\n\t";
            cin >> Sindex;
            cout << endl;
            toDoList.insertAtIndex(title, stoi(Stime), stoi(Sindex));
        }
        if (command == 3)
        {
            toDoList.printAll();
        }
        if (command == 4)
        {
            toDoList.longestTime();
        }
        if (command == 5)
        {
            toDoList.shortestTime();
        }
        if (command == 6)
        {
            cout << "\tPlease enter index\n\t";
            cin >> Sindex;
            cout << endl;
            toDoList.deleteAtIndex(stoi(Sindex));
        }
        if (command == 7)
        {
            cout << "\tPlease enter title to erase\n\t";
            getline(cin, title);
            getline(cin, title);
            cout << endl;
            toDoList.deleteAllInstance(title);
        }
        if (command == 8)
        {
            toDoList.reverseList();
        }
        if (command == 9)
        {
            toDoList.sortShortestToLongest();
        }
        if (command == 10)
        {
            toDoList.sortLongestToShortest();
        }
    }
    return 0;
}
