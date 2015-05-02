#include <iostream>
#include "ToDoList.h"

using namespace std;

List::List()
{
    start = new Task;
    timeToComplete = 0;
    length = 0;
};
List::~List(){};

void List::pushBack(string in_title, int in_time)
{
    Task *newtask = new Task;
    newtask->title = in_title;
    newtask->time = in_time;
    length++;
    timeToComplete = timeToComplete+in_time;

    if (start->title == "not defined task")
    {
        start = newtask;
        return;
    }

    Task *temp = start;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newtask;
};
void List::insertAtIndex(string in_title, int in_time, int index)
{
    if(start->title == "not defined task")
    {cout << "No Tasks in list" << endl;return;}
    Task *newtask = new Task;
    newtask->title = in_title;
    newtask->time = in_time;
    length++;
    timeToComplete = timeToComplete+in_time;

    Task *temp = start;
    if (index > length)
    {
        cout << "Todo list is not that long... Appending to end of list..." << endl;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newtask;
        return;
    }

    for(int i = 2 ; i < index ; i++)
    {
        temp = temp->next;
    }
    newtask->next = temp->next;
    temp->next = newtask;
};
void List::printAll()
{
    if(start->title == "not defined task")
    {cout << "No Tasks in list" << endl;return;}
    Task *temp = start;
    cout << "Tasks to do:\n";
    int i = 1;
    while (temp != NULL)
    {
        cout << "\t" << i++ << ". " << temp->title << endl;
        temp = temp->next;
    }
    cout << "Total time to complete is : " << timeToComplete / 60 << " hour(s) " << timeToComplete % 60 << " minute(s)\n";
};
void List::longestTime()
{
    if(start->title == "not defined task")
    {cout << "No Tasks in list" << endl;return;}

    cout << "The most time consuming task is: ";
    Task *Max = start;
    Task *temp = start;
    while(temp != NULL)
    {
        if(temp->time > Max->time)
        {
            Max = temp;
        }
        temp = temp->next;
    }
    cout << Max->title << endl;
};
void List::shortestTime()
{
    if(start->title == "not defined task")
    {cout << "No Tasks in list" << endl;return;}

    cout << "The least time consuming task is: ";
    Task *Min = start;
    Task *temp = start;
    while(temp != NULL)
    {
        if(temp->time < Min->time)
        {
            Min = temp;
        }
        temp = temp->next;
    }
    cout << Min->title << endl;
};

void List::deleteAtIndex(int index)
{
    if(start->title == "not defined task")
    {cout << "No Tasks in list" << endl;return;}
    if(length < index)
    {
        cout << "No Task at position...\nenter another position: ";
        string input;
        cin >> input;
        deleteAtIndex(stoi(input));
        return;
    }

    Task *todelete = start;
    if (index == 1)
    {
        start = start->next;
    }
    else
    {
        Task *temp = start;
        for (int i = 2 ; i < index ; i++)
        {
            temp = temp->next;

        }
        todelete = temp->next;
        temp->next = todelete->next;
    }
    length--;
    timeToComplete = timeToComplete - todelete->time;
    delete todelete;
    cout << "Entry removed.\n";
};
void List::deleteAllInstance(string in_title)
{
    Task *temp = start;
    Task *prev;
    int i = 0;
    while (temp != NULL)
    {
        while (temp->title == in_title)
        {
            i++;
            timeToComplete = timeToComplete - temp->time;
            if (temp->next == NULL)//deals with the last case
            {
                prev->next = NULL;
                break;
            }
            else
            {
                *temp = *(temp->next);
            }
        }
        if (temp != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
    }
    length = length - i;
    cout << "Removed " << i << " Instances\n";

};
void List::reverseList()
{
    Task *findtail = start;
    while(findtail->next != NULL)
    {
        findtail = findtail->next;
    }
    tail = findtail->next;

    Task *temp = start;
    Task *x = NULL;
    Task *x2 = NULL;
    Task *tail = start;
    x = start->next;

    while (x != NULL) {
        x2 = x;
        x = x->next;
        x2->next = temp;
        temp = x2;
    }
    start = temp;
    tail->next = NULL;
};
void List::sortShortestToLongest()
{
    Task *temp;
    Task *prev;
    for (int i = 0 ; i < length ; i++)
    {

        temp = start;
        while(temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
            cout << i << prev->title <<endl
            << i << temp->title <<  endl
            << i << temp->next->title << endl;
            if (temp->time <
            prev->time)
            {
                Task storage(temp->title, temp->time);
                temp->title = prev->title;
                temp->time = prev->time;
                prev->title = storage.title;
                prev->time = storage.time;

            }
        }
    }
};
void List::sortLongestToShortest()
{
    sortShortestToLongest();
    reverseList();
}
*/double getNum(void)
{
  double num;
  while (!(cin >> num))
  {
    cin.clear();
    cin.ignore(80, '\n');
    cout << "Sorry, not a number: ";
  }
  cin.ignore(80, '\n');
  return num;
}

int getInt(void)
{
  double num = getNum();
  while (C++ notation for not an integer)
  return num;
}
*/
