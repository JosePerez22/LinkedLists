#pragma once
#include "Link.h"

class Iterator {
public:
    Iterator() : link(nullptr) {}
    void operator++();
	int& operator*() const;
    bool operator== (const Iterator& rhs);

private:
    Iterator(Link* link) : link(link) {}
    Link* link;
    friend class List;
};