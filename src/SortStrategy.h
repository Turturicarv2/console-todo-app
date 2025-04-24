#ifndef SORTSTRATEGY_H
#define SORTSTRATEGY_H

#include <vector>
#include "Task.h"

class SortStrategy {
    public:
        virtual void sort(std::vector<Task>& tasks) = 0;
};

#endif