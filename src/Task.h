#ifndef TASK_H
#define TASK_H

#include <string>

using namespace std;

class Task {
    public:
        string name;
        bool completed;
    
        Task(string n) : name(n), completed(false) {}
};

#endif