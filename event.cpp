#include "event.h"
#include <iostream>

void listEventsAndAttributes(const json& data) {
    std::cout << "Verfuegbare Events:" << std::endl;
    for (auto& event : data.items()) {
        std::cout << "Event: " << event.key() << std::endl;
        std::cout << "Attribute: " << event.value().dump(4) << std::endl;
    }
}

std::string getUserInputEvent() {
    std::string event;
    std::cout << "Bitte geben Sie das Event ein: ";
    std::cin >> event;
    return event;
}

int getUserInputQuantity() {
    int quantity;
    std::cout << "Bitte geben Sie die Menge ein: ";
    std::cin >> quantity;
    return quantity;
}

void printOrderSummary(const std::string& event, int quantity) {
    std::cout << "Bestelluebersicht:" << std::endl;
    std::cout << "Event: " << event << std::endl;
    std::cout << "Menge: " << quantity << std::endl;
}

void updateEventAttributes(json& data, const std::string& event, int quantity) {
    if (data.contains(event)) {
        data[event]["quantity"] = quantity;
    } else {
        std::cout << "Event nicht gefunden!" << std::endl;
    }
}
