#include "VendingMachine.h"
#include <iostream>

VendingMachine::VendingMachine(int slotCount) {
    slots.resize(slotCount, nullptr);
}

VendingMachine::~VendingMachine() {
    for (auto slot : slots) {
        delete slot;
    }
}

void VendingMachine::addSlot(SnackSlot* slot) {
    for (auto& existingSlot : slots) {
        if (existingSlot == nullptr) {
            existingSlot = slot;
            return;
        }
    }
}

int VendingMachine::getEmptySlotsCount() const {
    int count = 0;
    for (auto slot : slots) {
        if (slot == nullptr || slot->isEmpty()) {
            ++count;
        }
    }
    return count;
}

void VendingMachine::displayMenu() {
    std::cout << "Choose a snack:\n";
    for (int i = 0; i < slots.size(); ++i) {
        if (slots[i] != nullptr && !slots[i]->isEmpty()) {
            std::cout << i + 1 << ". " << slots[i]->getSnack()->getName() << " - " << slots[i]->getSnack()->getCount() << "\n";
        }
    }
    std::cout << slots.size() + 1 << ". Exit\n";
}

void VendingMachine::selectSnack(int choice) {
    if (choice > 0 && choice <= slots.size() && slots[choice - 1] != nullptr) {
        Snack* snack = slots[choice - 1]->getSnack();
        if (snack->takeOne()) {
            std::cout << "You choosed: " << snack->getName() << ". Left: " << snack->getCount() << "\n";
        }
        else {
            std::cout << "Sorry, this snack is out of stock.\n";
        }
    }
    else if (choice != slots.size() + 1) {
        std::cout << "Wrong choice.\n";
    }
}
