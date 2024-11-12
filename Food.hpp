#ifndef FOOD_HPP
#define FOOD_HPP

#include <iostream>
#include <sstream>

class Food {

    private:

        std::string name;
        float sugars;
        float carbohydrates;
        float fiber;
        float fats;
        float calories;
        float proteins;
        std::string amount;

    public:

        Food();

        void setName(const std::string&);
        void setSugars(const float&);
        void setCarbohydrates(const float&);
        void setFiber(const float&);
        void setFats(const float&);
        void setCalories(const float&);
        void setAmount(const std::string&);
        void setProteins(const float&);

        std::string getName() const;
        float getSugars() const;
        float getCarbohydrates() const;
        float getFiber() const;
        float getFats() const;
        float getCalories() const;
        std::string getAmount() const;
        float getProteins() const;

        std::string toString() const;

};

#endif // FOOD_HPP
