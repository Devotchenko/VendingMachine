#ifndef SNACK_H
#define SNACK_H

#include <string>

class Snack {
private:
    std::string name;
    int count;

public:
    Snack(std::string name, int initialCount = 0);
    std::string getName() const;
    int getCount() const;
    void addCount(int amount);
    bool takeOne();
};

#endif // SNACK_H
