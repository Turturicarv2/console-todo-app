#ifndef TODOLIST_H
#define TODOLIST_H

#include "common.h"

class ToDoList {
    vector<Task> tasks;
    vector<Observer*> observers;
    SortStrategy* sorter;

public:
    ToDoList();
    void addObserver(Observer* obs);
    void notify(const std::string& msg);
    void addTask(const std::string& taskName);
    void completeTask(int index);
    void setSortStrategy(SortStrategy* newSorter);
    void showTasks();
};

#endif