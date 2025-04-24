#ifndef TODOLIST_H
#define TODOLIST_H

#include <vector>
#include "Task.h"
#include "SortStrategy.h"
#include "Observer.h"
#include "SortByStatus.h"
#include "SortByName.h"

class ToDoList {
    std::vector<Task> tasks;
    std::vector<Observer*> observers;
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