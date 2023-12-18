#include "VendingMachine.h"
#include <iostream>

int main() {
    Snack* snickers = new Snack("Snickers", 5);
    Snack* bounty = new Snack("Bounty", 5);
    Snack* nuts = new Snack("Nuts", 5);

    SnackSlot* slot1 = new SnackSlot(10);
    slot1->addSnack(snickers);

    SnackSlot* slot2 = new SnackSlot(10);
    slot2->addSnack(bounty);

    SnackSlot* slot3 = new SnackSlot(10);
    slot3->addSnack(nuts);

    VendingMachine* machine = new VendingMachine(3);
    machine->addSlot(slot1);
    machine->addSlot(slot2);
    machine->addSlot(slot3);

    int choice;
    do {
        machine->displayMenu();
        std::cin >> choice;
        machine->selectSnack(choice);
    } while (choice != 4);

    delete machine;
    delete snickers;
    delete bounty;
    delete nuts;

    return 0;
}
