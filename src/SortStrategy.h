#ifndef SORTSTRATEGY_H
#define SORTSTRATEGY_H

#include "common.h"
#include "Task.h"

class SortStrategy {
    public:
        virtual void sort(vector<Task>& tasks) = 0;
};

#endif