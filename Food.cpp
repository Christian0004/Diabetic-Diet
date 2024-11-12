#include "Food.hpp"

using namespace std;

Food::Food() : name(""), sugars(0), carbohydrates(0), fiber(0), fats(0), calories(0) , amount(""), proteins(0) { }

void Food::setName(const string& n) {

    name = n;
}

void Food::setSugars(const float& s) {

    sugars = s;
}

void Food::setCarbohydrates(const float& c) {

    carbohydrates = c;
}

void Food::setFiber(const float& f) {

    fiber = f;
}

void Food::setFats(const float& f) {

    fats = f;
}

void Food::setCalories(const float& c) {

    calories = c;
}

void Food::setAmount(const string& a) {

    amount = a;
}

void Food::setProteins(const float& p){

    proteins = p;
}




string Food::getName() const {

    return name;
}

float Food::getSugars() const {

    return sugars;
}

float Food::getCarbohydrates() const {

    return carbohydrates;
}

float Food::getFiber() const {

    return fiber;
}

float Food::getFats() const {

    return fats;
}

float Food::getCalories() const {

    return calories;
}

string Food::getAmount() const {

    return amount;
}

float Food::getProteins() const {

    return proteins;
}

string Food::toString() const {

    stringstream writtenFood;

    writtenFood << amount << " de " << name << endl;

    return writtenFood.str();
}
