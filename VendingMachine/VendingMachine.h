#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H

#include <vector>
#include "SnackSlot.h"

class VendingMachine {
private:
    std::vector<SnackSlot*> slots;

public:
    VendingMachine(int slotCount);
    ~VendingMachine();
    void addSlot(SnackSlot* slot);
    int getEmptySlotsCount() const;
    void displayMenu();
    void selectSnack(int choice);
};

#endif // VENDINGMACHINE_H
