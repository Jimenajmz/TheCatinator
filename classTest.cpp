#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <stdlib.h>
#include "Food.hpp"

using namespace std;

Food *drinkArr[200];
Food *foodArr[200];
int numDrinks = 7;
int numFoods = 64;

Food *drinkReccomendations[200];
Food *foodReccomendations[200];
int numDrinkRecc = 0;
int numFoodRecc = 0;


Food hotChocolate("Hot Chocolate", 0.1, true, 4, true, true, false, true);  
Food Water("Water", 0.0, false, 4, false, false, false,true);
Food Coffee("Coffee", 0.1, true, 0, true, false, false, true);
Food Tea("Tea", 0.1, true, 4, true, false, false, true);
Food Soda("Soda", 0.0, false, 4, true, true, false, true);
Food Smoothie("Smoothie", 0.2, false, 4, false, true, false,  true);
Food Juice("Juice", 0.0, false, 4, false, true, false, true);


//drinks array

int main(){

    drinkArr[0] = &hotChocolate;
    drinkArr[1] = &Water;
    drinkArr[2] = &Coffee;
    drinkArr[3] = &Tea;
    drinkArr[4] = &Soda;
    drinkArr[5] = &Smoothie;
    drinkArr[6] = &Juice;


    cout << hotChocolate.getItemName() << "'s time to make is " << hotChocolate.getTimeToMake() << " hours" << endl;
    cout << drinkArr[0]->getItemName() << "'s time to make is " << drinkArr[0]->getTimeToMake() << " hours" << endl;

    /*
    Both of these cout statements work to say:
    Hot Chocolate's time to make is 0.1 hours
    */
    

}