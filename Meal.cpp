#include "Meal.hpp"

using namespace std;

Meal::Meal() : foodList(), day(0) {

}

void Meal::setFoodList(const List<Food, 50>& l) {

    foodList = l;
}

void Meal::setDay(const int& d){

    day = d;
}

void Meal::setMeal(const string& m){

    meal = m;
}

List<Food, 50> Meal::getFoodList() const {

    return foodList;
}

int Meal::getDay() const {

    return day;
}

string Meal::getMeal() const {

    return meal;
}

string Meal::toString() const {

    stringstream writtenMeal;

    switch (day){
    case 1:
        writtenMeal << "\n" << meal << " del lunes:" << endl << endl;
    break;
    case 2:
        writtenMeal << "\n" << meal << " del martes:" << endl << endl;
    break;
    case 3:
        writtenMeal << "\n" << meal << " del miercoles:" << endl << endl;
    break;
    case 4:
        writtenMeal << "\n" << meal << " del jueves:" << endl << endl;
    break;
    case 5:
        writtenMeal << "\n" << meal << " del viernes:" << endl << endl;
    break;
    }

    writtenMeal << foodList.toString();

    return writtenMeal.str();
}
