#ifndef TODOLIST_H
#define TODOLIST_H

struct Task{
    std::string title;
    int time;
    Task *next;

    Task(){
        title = "not defined task";
        time = 0;
        next = NULL;};

    Task(std::string in_title, int in_time)
    {
        title = in_title;
        time = in_time;
        next = NULL;
    }

};

class List
{
    public:
        List();
        ~List();

        void pushBack(std::string in_title, int in_time); //done
        void insertAtIndex(std::string in_title, int in_time, int index); //done
        void printAll(); //done
        void longestTime(); //done
        void shortestTime(); //done

        void deleteAtIndex(int index); //done
        void deleteAllInstance(std::string in_title);

        void reverseList();
        void sortShortestToLongest();
        void sortLongestToShortest();

    protected:
    private:
        Task *start;
        Task *tail;
        int timeToComplete;
        int length;


};

#endif // TODOLIST_H
