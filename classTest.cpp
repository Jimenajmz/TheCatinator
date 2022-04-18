#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <stdlib.h>


using namespace std;

class Food{
    private: 
        std::string itemName;
        double timeToMake; //time in hours to make
        bool temperature; //TRUE for hot, FALSE for cold
        int foodTime; //0=breakfast, 1=lunch, 2=dinner, 3=desert, 4=snack
        bool isCaffeinated; //TRUE for yes, FALSE for no
        bool isSweet; //TRUE for yes, FALSE for no
        bool isSpicy; //TRUE for yes, FALSE for no
        bool isVegan; //TRUE for yes, FALSE for no
        bool isVegetarian; //TRUE for yes, FALSE for no

    public:
        Food();
        Food(std::string itemName, double timeToMake, bool temperature, int foodTime, bool isCaffeinated, bool isSweet, bool isSpicy, bool isVegan, bool isVegetarian);

        void setItemName(std::string name){
            itemName = name;
        }
        void setTimeToMake(double time){
            timeToMake = time;
        }
        void setTemperature(bool temp){
            temperature = temp;
        }
        void setFoodTime(int time){
            foodTime = time;
        }
        void setCaffine(bool caff){
            isCaffeinated = caff;
        }
        void setSweet(bool sweet){
            isSweet = sweet;
        }
        void setSpicy(bool spice){
            isSpicy = spice;
        }
        void setVegan(bool vegan){
            isVegan = vegan;
        }
        void setVegetarian(bool vegetarian){
            isVegetarian = vegetarian;
        }


        std::string getItemName(){
            return itemName;
        }
        double getTimeToMake(){
            return timeToMake;
        }
        bool getTemperature(){
            return temperature;
        }
        int getFoodTime(){
            return foodTime;
        }
        bool getCaffine(){
            return isCaffeinated;
        }
        bool getSweet(){
            return isSweet;
        }
        bool getSpicy(){
            return isSpicy;
        }
        bool getVegan(){
            return isVegan;
        }
        bool getVegetarian(){
            return isVegetarian;
        }


        ~Food();
};

Food::Food(){
    Food::itemName = "noName";
    Food::timeToMake = 0.0;
    Food::temperature = false;
    Food::foodTime = -1;
    Food::isCaffeinated = false;
    Food::isSweet = false;
    Food::isSpicy = false;
    Food::isVegan = false;
    Food::isVegetarian = false;
}

Food::Food(std::string itemName, double timeToMake, bool temperature, int foodTime, bool isCaffeinated, bool isSweet, bool isSpicy, bool isVegan, bool isVegetarian){
    Food::itemName = itemName;
    Food::timeToMake = timeToMake;
    Food::temperature = temperature;
    Food::foodTime = foodTime;
    Food::isCaffeinated = isCaffeinated;
    Food::isSweet = isSweet;
    Food::isSpicy = isSpicy;
    Food::isVegan = isVegan;
    Food::isVegetarian = isVegetarian;
}

Food::~Food(){

}



int main(){
    Food *drinkArr[200];
    Food *foodArr[200];

    Food hotChocolate("Hot Chocolate", 0.1, true, 4, true, true, false, false, true);

    drinkArr[0] = &hotChocolate;

    cout << hotChocolate.getItemName() << "'s time to make is " << hotChocolate.getTimeToMake() << " hours" << endl;
    cout << drinkArr[0]->getItemName() << "'s time to make is " << drinkArr[0]->getTimeToMake() << " hours" << endl;

    /*
    Both of these cout statements work to say:
    Hot Chocolate's time to make is 0.1 hours
    */
    

}