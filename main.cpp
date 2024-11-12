#include <iostream>
#include <cstdlib>

#include "List.hpp"
#include "Meal.hpp"
#include "Food.hpp"

using namespace std;

int main() {

    List<Food, 50> fruitsList;
    List<Food, 50> vegetablesList;
    List<Food, 50> animalProductsList;
    List<Food, 50> cerealsList;
    List<Food, 50> dairyList;
    List<Food, 50> mealList;

    Meal auxiliarMeal;
    Food auxiliarFood;

    int age, activity, randomInt , i = 0, day = 1;
    float weight, height, tmb, totalCalories, actualCalories, totalBreakfastCalories, totalLunchCalories, totalDinnerCalories,
    actualBreakfastCalories, actualLunchCalories, actualDinnerCalories, actualCarbohydrates, actualProteins, actualFats, totalCarbohydrates,
    totalProteins, totalFats;
    char sex;

    // LLenado de la lista de frutas

    auxiliarFood.setName("Manzana");
    auxiliarFood.setSugars(18);
    auxiliarFood.setCarbohydrates(25.2);
    auxiliarFood.setFiber(4.32);
    auxiliarFood.setFats(0.36);
    auxiliarFood.setAmount("1 pieza");
    auxiliarFood.setCalories(93);
    fruitsList.insertData(0, auxiliarFood);

    auxiliarFood.setName("Platano");
    auxiliarFood.setSugars(16.8);
    auxiliarFood.setCarbohydrates(32.4);
    auxiliarFood.setFiber(3.72);
    auxiliarFood.setFats(0.36);
    auxiliarFood.setAmount("1 pieza");
    auxiliarFood.setCalories(106.8);
    fruitsList.insertData(1, auxiliarFood);

    auxiliarFood.setName("Naranja");
    auxiliarFood.setSugars(16.4);
    auxiliarFood.setCarbohydrates(16.6);
    auxiliarFood.setFiber(4.6);
    auxiliarFood.setFats(0.4);
    auxiliarFood.setAmount("1 pieza");
    auxiliarFood.setCalories(94);
    fruitsList.insertData(2, auxiliarFood);

    auxiliarFood.setName("Fresa");
    auxiliarFood.setSugars(4.9);
    auxiliarFood.setCarbohydrates(7.7);
    auxiliarFood.setFiber(2);
    auxiliarFood.setFats(0.3);
    auxiliarFood.setAmount("5 piezas");
    auxiliarFood.setCalories(33);
    fruitsList.insertData(3, auxiliarFood);

    auxiliarFood.setName("Kiwi");
    auxiliarFood.setSugars(11.57);
    auxiliarFood.setCarbohydrates(18.98);
    auxiliarFood.setFiber(3.9);
    auxiliarFood.setFats(0.65);
    auxiliarFood.setAmount("1 pieza");
    auxiliarFood.setCalories(79.3);
    fruitsList.insertData(4, auxiliarFood);

    auxiliarFood.setName("Uva");
    auxiliarFood.setSugars(12);
    auxiliarFood.setCarbohydrates(14.4);
    auxiliarFood.setFiber(0.72);
    auxiliarFood.setFats(0.16);
    auxiliarFood.setAmount("10 piezas");
    auxiliarFood.setCalories(53.6);
    fruitsList.insertData(5, auxiliarFood);

    auxiliarFood.setName("Pina");
    auxiliarFood.setSugars(8);
    auxiliarFood.setCarbohydrates(10.48);
    auxiliarFood.setFiber(1.12);
    auxiliarFood.setFats(0.08);
    auxiliarFood.setAmount("1 rebanada de 80 gr");
    auxiliarFood.setCalories(40);
    fruitsList.insertData(6, auxiliarFood);

    auxiliarFood.setName("Cereza");
    auxiliarFood.setSugars(6.8);
    auxiliarFood.setCarbohydrates(9.74);
    auxiliarFood.setFiber(1.68);
    auxiliarFood.setFats(0.16);
    auxiliarFood.setAmount("10 piezas");
    auxiliarFood.setCalories(40);
    fruitsList.insertData(7, auxiliarFood);

    auxiliarFood.setName("Sandia");
    auxiliarFood.setSugars(5);
    auxiliarFood.setCarbohydrates(6.4);
    auxiliarFood.setFiber(0.32);
    auxiliarFood.setFats(0.16);
    auxiliarFood.setAmount("1 rebanada de 80 gr");
    auxiliarFood.setCalories(24);
    fruitsList.insertData(8, auxiliarFood);

    //Llenado de la lista de vegetales

    auxiliarFood.setName("Espinaca");
    auxiliarFood.setSugars(0.2);
    auxiliarFood.setCarbohydrates(1.8);
    auxiliarFood.setFiber(1.1);
    auxiliarFood.setFats(0.2);
    auxiliarFood.setAmount("5 hojas");
    auxiliarFood.setCalories(11.5);
    auxiliarFood.setProteins(1.45);
    vegetablesList.insertData(0, auxiliarFood);

    auxiliarFood.setName("Zanahoria");
    auxiliarFood.setSugars(7);
    auxiliarFood.setCarbohydrates(14.4);
    auxiliarFood.setFiber(4.2);
    auxiliarFood.setFats(0.3);
    auxiliarFood.setAmount("1 pieza");
    auxiliarFood.setCalories(60);
    auxiliarFood.setProteins(1.35);
    vegetablesList.insertData(1, auxiliarFood);

    auxiliarFood.setName("Brocoli");
    auxiliarFood.setSugars(1.7);
    auxiliarFood.setCarbohydrates(6.6);
    auxiliarFood.setFiber(2.6);
    auxiliarFood.setFats(0.6);
    auxiliarFood.setAmount("100 gr");
    auxiliarFood.setCalories(28);
    auxiliarFood.setProteins(2.8);
    vegetablesList.insertData(2, auxiliarFood);

    auxiliarFood.setName("Pimiento Rojo");
    auxiliarFood.setSugars(6.3);
    auxiliarFood.setCarbohydrates(14.1);
    auxiliarFood.setFiber(3.15);
    auxiliarFood.setFats(0.45);
    auxiliarFood.setAmount("Mitad");
    auxiliarFood.setCalories(46.5);
    auxiliarFood.setProteins(1.95);
    vegetablesList.insertData(3, auxiliarFood);

    auxiliarFood.setName("Calabacin");
    auxiliarFood.setSugars(5);
    auxiliarFood.setCarbohydrates(6.2);
    auxiliarFood.setFiber(2);
    auxiliarFood.setFats(0.6);
    auxiliarFood.setAmount("1 pieza");
    auxiliarFood.setCalories(34);
    auxiliarFood.setProteins(2.4);
    vegetablesList.insertData(4, auxiliarFood);

    auxiliarFood.setName("Col Rizada");
    auxiliarFood.setSugars(2.6);
    auxiliarFood.setCarbohydrates(10.8);
    auxiliarFood.setFiber(4);
    auxiliarFood.setFats(1.8);
    auxiliarFood.setAmount("200 gr");
    auxiliarFood.setCalories(100);
    auxiliarFood.setProteins(8.6);
    vegetablesList.insertData(5, auxiliarFood);

    auxiliarFood.setName("Tomate");
    auxiliarFood.setSugars(5.2);
    auxiliarFood.setCarbohydrates(7.8);
    auxiliarFood.setFiber(6.8);
    auxiliarFood.setFats(0.4);
    auxiliarFood.setAmount("1 pieza");
    auxiliarFood.setCalories(40);
    auxiliarFood.setProteins(3.6);
    vegetablesList.insertData(6, auxiliarFood);

    auxiliarFood.setName("Ejotes");
    auxiliarFood.setSugars(2.7);
    auxiliarFood.setCarbohydrates(7.1);
    auxiliarFood.setFiber(3.4);
    auxiliarFood.setFats(0.2);
    auxiliarFood.setAmount("100 gr");
    auxiliarFood.setCalories(31);
    auxiliarFood.setProteins(1.8);
    vegetablesList.insertData(7, auxiliarFood);

    auxiliarFood.setName("Coliflor");
    auxiliarFood.setSugars(1.9);
    auxiliarFood.setCarbohydrates(5);
    auxiliarFood.setFiber(2);
    auxiliarFood.setFats(0.3);
    auxiliarFood.setAmount("100 gr");
    auxiliarFood.setCalories(25);
    auxiliarFood.setProteins(1.9);
    vegetablesList.insertData(8, auxiliarFood);

    auxiliarFood.setName("Cebolla");
    auxiliarFood.setSugars(2.4);
    auxiliarFood.setCarbohydrates(4.7);
    auxiliarFood.setFiber(0.85);
    auxiliarFood.setFats(0.05);
    auxiliarFood.setAmount("50 gr");
    auxiliarFood.setCalories(20);
    auxiliarFood.setProteins(0.55);
    vegetablesList.insertData(9, auxiliarFood);

    //Llenado de la lista de cereales

    auxiliarFood.setName("Avena Cruda");
    auxiliarFood.setSugars(1.35);
    auxiliarFood.setCarbohydrates(91);
    auxiliarFood.setFiber(15.9);
    auxiliarFood.setFats(12.9);
    auxiliarFood.setAmount("150 gr");
    auxiliarFood.setCalories(580);
    auxiliarFood.setProteins(25.35);
    cerealsList.insertData(0, auxiliarFood);

    auxiliarFood.setName("Quinoa cocida");
    auxiliarFood.setSugars(3.75);
    auxiliarFood.setCarbohydrates(53);
    auxiliarFood.setFiber(7);
    auxiliarFood.setFats(9);
    auxiliarFood.setAmount("250 gr");
    auxiliarFood.setCalories(358);
    auxiliarFood.setProteins(10.25);
    cerealsList.insertData(1, auxiliarFood);

    auxiliarFood.setName("Arroz Integral cocido");
    auxiliarFood.setSugars(1);
    auxiliarFood.setCarbohydrates(59);
    auxiliarFood.setFiber(4.5);
    auxiliarFood.setFats(4);
    auxiliarFood.setAmount("250 gr");
    auxiliarFood.setCalories(300);
    auxiliarFood.setProteins(6.5);
    cerealsList.insertData(2, auxiliarFood);

    auxiliarFood.setName("Tortilla");
    auxiliarFood.setSugars(0.66);
    auxiliarFood.setCarbohydrates(33.48);
    auxiliarFood.setFiber(4.72);
    auxiliarFood.setFats(2.14);
    auxiliarFood.setAmount("3 piezas");
    auxiliarFood.setCalories(163.5);
    auxiliarFood.setProteins(4.27);
    cerealsList.insertData(3, auxiliarFood);

    // Llenado de la lista de productos de origen animal

    auxiliarFood.setName("Pechuga de pollo");
    auxiliarFood.setFats(1.5);
    auxiliarFood.setAmount("150 gr");
    auxiliarFood.setCalories(180);
    auxiliarFood.setProteins(46.5);
    animalProductsList.insertData(0, auxiliarFood);

    auxiliarFood.setName("Salmon cocido");
    auxiliarFood.setFats(19.5);
    auxiliarFood.setAmount("150 gr");
    auxiliarFood.setCalories(276);
    auxiliarFood.setProteins(37.5);
    animalProductsList.insertData(1, auxiliarFood);

    auxiliarFood.setName("Pechuga de pavo");
    auxiliarFood.setFats(1.5);
    auxiliarFood.setAmount("150 gr");
    auxiliarFood.setCalories(156);
    auxiliarFood.setProteins(43.5);
    animalProductsList.insertData(2, auxiliarFood);

    auxiliarFood.setName("Jamon cocido");
    auxiliarFood.setFats(6.8);
    auxiliarFood.setAmount("200 gr");
    auxiliarFood.setCalories(240);
    auxiliarFood.setProteins(36);
    animalProductsList.insertData(3, auxiliarFood);

    auxiliarFood.setName("Atun enlatado en agua");
    auxiliarFood.setFats(0.75);
    auxiliarFood.setAmount("150 gr");
    auxiliarFood.setCalories(135);
    auxiliarFood.setProteins(39);
    animalProductsList.insertData(4, auxiliarFood);

    auxiliarFood.setName("Pescado blanco");
    auxiliarFood.setFats(1.5);
    auxiliarFood.setAmount("150 gr");
    auxiliarFood.setCalories(258);
    auxiliarFood.setProteins(33);
    animalProductsList.insertData(5, auxiliarFood);

    // Llenado de la lista de lácteos

    auxiliarFood.setName("Leche descremada");
    auxiliarFood.setSugars(13);
    auxiliarFood.setCarbohydrates(12.5);
    auxiliarFood.setFats(0.5);
    auxiliarFood.setAmount("250 ml");
    auxiliarFood.setCalories(180);
    auxiliarFood.setProteins(8.5);
    dairyList.insertData(0, auxiliarFood);

    auxiliarFood.setName("Queso Panela");
    auxiliarFood.setCarbohydrates(1.1);
    auxiliarFood.setFats(11.5);
    auxiliarFood.setAmount("50 gr");
    auxiliarFood.setCalories(140);
    auxiliarFood.setProteins(8.5);
    dairyList.insertData(1, auxiliarFood);

    auxiliarFood.setName("Yogur Griego Natural sin azucar anadido");
    auxiliarFood.setSugars(6);
    auxiliarFood.setCarbohydrates(5.4);
    auxiliarFood.setFats(15);
    auxiliarFood.setAmount("150 gr");
    auxiliarFood.setCalories(105);
    auxiliarFood.setProteins(15);
    dairyList.insertData(2, auxiliarFood);

    auxiliarFood.setName("Queso cottage");
    auxiliarFood.setSugars(1.10);
    auxiliarFood.setCarbohydrates(1.36);
    auxiliarFood.setFats(0.4);
    auxiliarFood.setAmount("40 gr");
    auxiliarFood.setCalories(39.2);
    auxiliarFood.setProteins(4.16);
    dairyList.insertData(3, auxiliarFood);

    // Ingreso de datos del usuario

    cout << "-------------------------------------------------------------------------------------------------------" << endl;
    cout << "\n\t\t\t\tPropuesta de dieta para una persona diabetica" << endl << endl;
    cout << "-------------------------------------------------------------------------------------------------------" << endl;
    cout << "\nIngrese su sexo (M/H): ";
    cin >> sex;
    fflush(stdin);
    sex = toupper(sex);
    if (sex != 'H' and sex != 'M'){
        cout << "\nPor favor, ingrese un sexo correcto" << endl;
        return 0;
    }
    cout << "\nIngrese su edad: ";
    cin >> age;
    fflush(stdin);
    cout << "\nIngrese su peso en kg: ";
    cin >> weight;
    fflush(stdin);
    cout << "\nIngrese su estatura en cm: ";
    cin >> height;
    fflush(stdin);
    cout << "\nSegun las siguientes opciones, ingrese la cantidad de actividad fisica que realiza: " << endl << endl;
    cout << "1. Sedentario (poco o ningun ejercicio)" << endl;
    cout << "2. Levemente activo (ejercicio ligero o deportes 1-3 dias a la semana)" << endl;
    cout << "3. Moderadamente activo (ejercicio moderado o deportes 3-5 dias a la semana)" << endl;
    cout << "4. Muy activo (ejercicio intenso o deportes 3-5 dias a la semana" << endl;
    cout << "5. Extremadamente activo (ejercicio muy intenso y trabajo fisico diario o deportes 2 veces al dia)" << endl << endl;
    cout << "Seleccione una opcion: ";
    cin >> activity;

    if (activity < 1 or activity > 5){
        cout << "\nPor favor, ingrese una opcion correcta" << endl;
        return 0;
    }

    if (sex == 'H'){
        tmb = 88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age);
    } else if (sex == 'M') {
        tmb = 447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age);
    } else {
        cout << "\nPor favor ingrese un sexo valido" << endl;
        return 0;
    }

    switch(activity) {
    case 1:
        totalCalories = tmb * 1.2;
    break;
    case 2:
        totalCalories = tmb * 1.375;
    break;
    case 3:
        totalCalories = tmb * 1.55;
    break;
    case 4:
        totalCalories = tmb * 1.725;
    break;
    case 5:
        totalCalories = tmb * 1.9;
    }

    totalBreakfastCalories = totalCalories * 0.30;
    totalLunchCalories = totalCalories * 0.40;
    totalDinnerCalories = totalCalories * 0.30;

    totalCarbohydrates = (totalCalories * 0.50) / 4;
    totalProteins = (totalCalories * 0.25) / 4;
    totalFats = (totalCalories * 0.25) / 9;

    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "\n\t\t\t\t\t\tDieta propuesta" << endl << endl;
    cout << "-------------------------------------------------------------------------------------------------------" << endl;

    while (day <= 5){

        i = 0;
        actualCalories = 0;
        actualBreakfastCalories = 0;
        actualLunchCalories = 0;
        actualDinnerCalories = 0;
        actualCarbohydrates = 0;
        actualProteins = 0;
        actualFats = 0;
        mealList.initialize();
        auxiliarMeal.setDay(day);

        while (actualCalories < (totalCalories-100)) {

            while (actualBreakfastCalories <  totalBreakfastCalories or actualCalories < totalCalories) {

                randomInt = rand() % 9;
                auxiliarFood = vegetablesList.retrieveData(randomInt);
                mealList.insertData(i, auxiliarFood);
                actualBreakfastCalories += auxiliarFood.getCalories();
                actualCalories += auxiliarFood.getCalories();
                actualCarbohydrates += auxiliarFood.getCarbohydrates();
                actualProteins += auxiliarFood.getProteins();
                actualFats += auxiliarFood.getFats();
                i++;

                if(actualBreakfastCalories >= totalBreakfastCalories){
                    break;
                }

                if (actualProteins < (totalProteins / 2)){
                    randomInt = rand() % 5;
                    auxiliarFood = animalProductsList.retrieveData(randomInt);
                    mealList.insertData(i, auxiliarFood);
                    actualBreakfastCalories += auxiliarFood.getCalories();
                    actualCalories += auxiliarFood.getCalories();
                    actualCarbohydrates += auxiliarFood.getCarbohydrates();
                    actualProteins += auxiliarFood.getProteins();
                    actualFats += auxiliarFood.getFats();
                    i++;
                }

                if(actualBreakfastCalories >= totalBreakfastCalories){
                    break;
                }

                randomInt = rand() % 8;
                auxiliarFood = fruitsList.retrieveData(randomInt);
                mealList.insertData(i, auxiliarFood);
                actualBreakfastCalories += auxiliarFood.getCalories();
                actualCalories += auxiliarFood.getCalories();
                actualCarbohydrates += auxiliarFood.getCarbohydrates();
                actualProteins += auxiliarFood.getProteins();
                actualFats += auxiliarFood.getFats();
                i++;

                if(actualBreakfastCalories >= totalBreakfastCalories){
                    break;
                }

                if(actualCarbohydrates < (totalCarbohydrates / 2.3)){
                    randomInt = rand() % 3;
                    auxiliarFood = cerealsList.retrieveData(randomInt);
                    mealList.insertData(i, auxiliarFood);
                    actualBreakfastCalories += auxiliarFood.getCalories();
                    actualCalories += auxiliarFood.getCalories();
                    actualCarbohydrates += auxiliarFood.getCarbohydrates();
                    actualProteins += auxiliarFood.getProteins();
                    actualFats += auxiliarFood.getFats();
                    i++;
                }

                if(actualBreakfastCalories >= totalBreakfastCalories){
                    break;
                }

                if(actualFats < (totalFats / 2.5)){
                    randomInt = rand() % 3;
                    auxiliarFood = dairyList.retrieveData(randomInt);
                    mealList.insertData(i, auxiliarFood);
                    actualBreakfastCalories += auxiliarFood.getCalories();
                    actualCalories += auxiliarFood.getCalories();
                    actualCarbohydrates += auxiliarFood.getCarbohydrates();
                    actualProteins += auxiliarFood.getProteins();
                    actualFats += auxiliarFood.getFats();
                    i++;
                }

            }

            auxiliarMeal.setMeal("Desayuno");
            auxiliarMeal.setFoodList(mealList);
            cout << auxiliarMeal.toString() << endl;
            actualCarbohydrates = 0;
            actualProteins = 0;
            actualFats = 0;
            i = 0;
            mealList.initialize();

            while (actualLunchCalories < totalBreakfastCalories or actualCalories < totalCalories){

                randomInt = rand() % 9;
                auxiliarFood = vegetablesList.retrieveData(randomInt);
                mealList.insertData(i, auxiliarFood);
                actualLunchCalories += auxiliarFood.getCalories();
                actualCalories += auxiliarFood.getCalories();
                actualCarbohydrates += auxiliarFood.getCarbohydrates();
                actualProteins += auxiliarFood.getProteins();
                actualFats += auxiliarFood.getFats();
                i++;

                if(actualLunchCalories >= totalLunchCalories){
                    break;
                }

                if(actualProteins < (totalProteins / 2)){
                    randomInt = rand() % 5;
                    auxiliarFood = animalProductsList.retrieveData(randomInt);
                    mealList.insertData(i, auxiliarFood);
                    actualLunchCalories += auxiliarFood.getCalories();
                    actualCalories += auxiliarFood.getCalories();
                    actualCarbohydrates += auxiliarFood.getCarbohydrates();
                    actualProteins += auxiliarFood.getProteins();
                    actualFats += auxiliarFood.getFats();
                    i++;
                }

                if(actualLunchCalories >= totalLunchCalories){
                    break;
                }

                if(actualCarbohydrates < (totalCarbohydrates / 2.3)){
                    randomInt = rand() % 3;
                    auxiliarFood = cerealsList.retrieveData(randomInt);
                    mealList.insertData(i, auxiliarFood);
                    actualLunchCalories += auxiliarFood.getCalories();
                    actualCalories += auxiliarFood.getCalories();
                    actualCarbohydrates += auxiliarFood.getCarbohydrates();
                    actualProteins += auxiliarFood.getProteins();
                    actualFats += auxiliarFood.getFats();
                    i++;
                }

                if(actualLunchCalories >= totalLunchCalories){
                    break;
                }

                randomInt = rand() % 8;
                auxiliarFood = fruitsList.retrieveData(randomInt);
                mealList.insertData(i, auxiliarFood);
                actualLunchCalories += auxiliarFood.getCalories();
                actualCalories += auxiliarFood.getCalories();
                actualCarbohydrates += auxiliarFood.getCarbohydrates();
                actualProteins += auxiliarFood.getProteins();
                actualFats += auxiliarFood.getFats();
                i++;

                if(actualLunchCalories >= totalLunchCalories){
                    break;
                }
            }

            auxiliarMeal.setMeal("Comida");
            auxiliarMeal.setFoodList(mealList);
            cout << auxiliarMeal.toString() << endl;
            actualCarbohydrates = 0;
            actualProteins = 0;
            actualFats = 0;
            mealList.initialize();
            i = 0;

            while (actualDinnerCalories < totalDinnerCalories or actualCalories < totalCalories){

                randomInt = rand() % 9;
                auxiliarFood = vegetablesList.retrieveData(randomInt);
                mealList.insertData(i, auxiliarFood);
                actualDinnerCalories += auxiliarFood.getCalories();
                actualCalories += auxiliarFood.getCalories();
                actualCarbohydrates += auxiliarFood.getCarbohydrates();
                actualProteins += auxiliarFood.getProteins();
                actualFats += auxiliarFood.getFats();
                i++;

                if(actualDinnerCalories >= totalDinnerCalories){
                    break;
                }

                if(actualProteins < (totalProteins / 2)) {
                    randomInt = rand() % 5;
                    auxiliarFood = animalProductsList.retrieveData(randomInt);
                    mealList.insertData(i, auxiliarFood);
                    actualDinnerCalories += auxiliarFood.getCalories();
                    actualCalories += auxiliarFood.getCalories();
                    actualCarbohydrates += auxiliarFood.getCarbohydrates();
                    actualProteins += auxiliarFood.getProteins();
                    actualFats += auxiliarFood.getFats();
                    i++;
                }

                if(actualDinnerCalories >= totalDinnerCalories){
                    break;
                }

                if(actualCarbohydrates < (totalCarbohydrates / 2.3)){
                    randomInt = rand() % 3;
                    auxiliarFood = cerealsList.retrieveData(randomInt);
                    mealList.insertData(i, auxiliarFood);
                    actualDinnerCalories += auxiliarFood.getCalories();
                    actualCalories += auxiliarFood.getCalories();
                    actualCarbohydrates += auxiliarFood.getCarbohydrates();
                    actualProteins += auxiliarFood.getProteins();
                    actualFats += auxiliarFood.getFats();
                    i++;
                }

                if(actualDinnerCalories >= totalDinnerCalories){
                    break;
                }

                if(actualFats < (totalFats / 2.5)){
                    randomInt = rand() % 3;
                    auxiliarFood = dairyList.retrieveData(randomInt);
                    mealList.insertData(i, auxiliarFood);
                    actualDinnerCalories += auxiliarFood.getCalories();
                    actualCalories += auxiliarFood.getCalories();
                    actualCarbohydrates += auxiliarFood.getCarbohydrates();
                    actualProteins += auxiliarFood.getProteins();
                    actualFats += auxiliarFood.getFats();
                    i++;
                }
            }

            auxiliarMeal.setMeal("Cena");
            auxiliarMeal.setFoodList(mealList);
            cout << auxiliarMeal.toString() << endl;
            i = 0;
            actualCarbohydrates = 0;
            actualProteins = 0;
            actualFats = 0;
            mealList.initialize();
        }

        day = day + 1;
    }

    cout << "-------------------------------------------------------------------------------------------------------" << endl;
    cout << endl << endl;

    cout << "Esta dieta es solo una sugerencia y jamas debe sustituir a un nutricionista" << endl;

}
