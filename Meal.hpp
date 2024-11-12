#ifndef MEAL_HPP
#define MEAL_HPP

#include <iostream>
#include <sstream>

#include "List.hpp"
#include "Food.hpp"

class Meal {

    private:

        List<Food, 50> foodList;
        int day;
        std::string meal;

    public:

        Meal();

        void setFoodList(const List<Food, 50>&);
        void setDay(const int&);
        void setMeal(const std::string&);

        List<Food, 50> getFoodList() const;
        int getDay() const;
        std::string getMeal() const;

        std::string toString() const;
};

#endif // MEAL_HPP
