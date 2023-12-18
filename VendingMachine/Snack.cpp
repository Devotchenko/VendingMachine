#include "Snack.h"

Snack::Snack(std::string name, int initialCount) : name(name), count(initialCount) {}

std::string Snack::getName() const { return name; }

int Snack::getCount() const { return count; }

void Snack::addCount(int amount) { count += amount; }

bool Snack::takeOne() {
    if (count > 0) {
        --count;
        return true;
    }
    return false;
}
