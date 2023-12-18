#ifndef SNACKSLOT_H
#define SNACKSLOT_H

#include "Snack.h"

class SnackSlot {
private:
    Snack* snack;
    int capacity;

public:
    SnackSlot(int capacity);
    void addSnack(Snack* snack);
    Snack* getSnack() const;
    bool isEmpty() const;
};

#endif // SNACKSLOT_H
