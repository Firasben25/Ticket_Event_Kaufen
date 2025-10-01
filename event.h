#ifndef EVENT_H
#define EVENT_H

#include <string>
//#include <nlohmann/json.hpp>
#include "json.hpp"

using json = nlohmann::json;

void listEventsAndAttributes(const json& data);
std::string getUserInputEvent();
int getUserInputQuantity();
void printOrderSummary(const std::string& event, int quantity);
void updateEventAttributes(json& data, const std::string& event, int quantity);

#endif
