#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class Observer {
    public:
        virtual void onTaskUpdated(const std::string& msg) = 0;
};

#endif