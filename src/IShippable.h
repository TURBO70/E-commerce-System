#ifndef ISHIPPABLE_H
#define ISHIPPABLE_H

#include <string>
using namespace std;

class IShippable {
public:
    virtual ~IShippable() = default;
    virtual string get_name() const = 0;
    virtual double get_weight() const = 0;
};

#endif


