#ifndef FOOD_HPP
#define FOOD_HPP
#include <string>

class Food{
    private: 
        std::string itemName;
        double timeToMake; //time in hours to make
        bool temperature; //TRUE for hot, FALSE for cold
        int foodTime; //0=breakfast, 1=lunch, 2=dinner, 3=desert, 4=snack
        bool isCaffeinated; //TRUE for yes, FALSE for no
        bool isSweet; //TRUE for yes, FALSE for no
        bool isSpicy; //TRUE for yes, FALSE for no
        bool isVegetarian; //TRUE for yes, FALSE for no

    public:
        Food();
        Food(std::string itemName, double timeToMake, bool temperature, int foodTime, bool isCaffeinated, bool isSweet, bool isSpicy, bool isVegetarian);

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
    Food::isVegetarian = false;
}

Food::Food(std::string itemName, double timeToMake, bool temperature, int foodTime, bool isCaffeinated, bool isSweet, bool isSpicy, bool isVegetarian){
    Food::itemName = itemName;
    Food::timeToMake = timeToMake;
    Food::temperature = temperature;
    Food::foodTime = foodTime;
    Food::isCaffeinated = isCaffeinated;
    Food::isSweet = isSweet;
    Food::isSpicy = isSpicy;
    Food::isVegetarian = isVegetarian;
}

Food::~Food(){

}

#endif