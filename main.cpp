#include "fileio.h"
#include "event.h"

int main() {
    // Schritt 1: Daten aus Datei lesen
    json data = readDataFromFile("events.json");

    // Schritt 2: Verfügbare Events und Attribute auflisten
    listEventsAndAttributes(data);

    // Schritt 3: Benutzereingabe - Event
    std::string event = getUserInputEvent();

    // Schritt 4: Benutzereingabe - Menge
    int quantity = getUserInputQuantity();

    // Schritt 5: Bestellübersicht drucken
    printOrderSummary(event, quantity);

    // Schritt 6: Event-Attribute aktualisieren
    updateEventAttributes(data, event, quantity);

    // Schritt 7: Daten in Datei schreiben
    writeDataToFile("events.json", data);

    return 0;
}
