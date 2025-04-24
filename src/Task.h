#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
    public:
        std::string name;
        bool completed;
    
        Task(std::string n) : name(n), completed(false) {}
};

#endif