#include "SnackSlot.h"

SnackSlot::SnackSlot(int capacity) : snack(nullptr), capacity(capacity) {}

void SnackSlot::addSnack(Snack* snack) {
    this->snack = snack;
}

Snack* SnackSlot::getSnack() const { return snack; }

bool SnackSlot::isEmpty() const { return snack == nullptr || snack->getCount() == 0; }
