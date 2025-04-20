#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

using namespace std;

class Observer {
    public:
        virtual void onTaskUpdated(const string& msg) = 0;
};

#endif