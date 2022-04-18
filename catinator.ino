#include <string>


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


void setup(){
    Food *drinkArr[200];
    Food *foodArr[200];

    Food hotChocolate("Hot Chocolate", 0.1, true, 4, true, true, false, false, true);
    Food Water("Water", 0.0, false, 4, false, false, false, true, true);
    Food Coffee("Coffee", 0.1, true, 0, true, false, false, true, true);
    Food Tea("Tea", 0.1, true, 4, true, false, false, true, true);
    Food Soda("Soda", 0.0, false, 4, true, true, false, true, true);
    Food EnT("Eggs and Toast", 0.25, true, 0, false, false, false, false, true);
    Food Toast("Toast", 0.1, true, 0, false, false, false, true, true);
    Food Cereal("Cereal", 0.1, false, 0, false, true, false, false, true);
    Food Waffle("Belgian Waffles", 0.25, 0, true, false, true, false, false, true);
    Food PBJ("PB&J", 0.1, false, 1, false, true, false, true, true);
    Food PCS("Philly Cheese Steak", 0.5, true, 1, false, false, false, false, false);
    Food TSoup("Tomato Soup", 0.25, true, 1, false, false, false, true, true);
    Food Mac("Macaroni and Cheese", 0.25, true, 1, false, false, false, false, true);
    Food Steak("Steak", 0.5, true, 2, false, false, false, false, false);
    Food Curry("Spicy Tofu Curry", 0.5, true, 2, false, false, true, true, true);
    Food Ehcniladas("Enchiladas", 0.5, true, 2, false, false, false, false, false);
    Food BP("Baked Potatoe", 0.2, true, 2, false, false, false, true, true);
    Food SandM("Spaghetti and Meatballs", 0.5, true, 2, false, false, false, false, false);
    Food CaesarSalad("Caesar Salad", 0.1, false, 2, false, false, false, false, true);
    Food pretzles("Pretzels", 0.0, false, 4, false, false, false, true, true);
    Food Crackers("Crackers", 0.0, false, 4, false, false, false, true, true);
    Food Fruit("Fruit", 0.0, false, 4, false, true, false, true, true);
    Food PopCorn("Popcorn", 0.1, true, 4, false, false, false, true, true);
    Food PecPie("Pecan Pie", 3, true, 3, false, true, false, false, true);
    Food Flan("Flan", 2, false, 3, false, true, false, false, true);
    Food Cookies("Cookies", 1, true, 3, false, true, false, false, true);
    Food BanSplit("Bannana Split", 0.1, false, 3, false, true, false, false, true);

    drinkArr[0] = &hotChocolate;
    drinkArr[1] = &Water;
    drinkArr[2] = &Coffee;
    drinkArr[3] = &Tea;
    drinkArr[4] = &Soda;
    foodArr[0] = &EnT;
    foodArr[1] = &Toast;
    foodArr[2] = &Cereal;
    foodArr[3] = &Waffle;
    foodArr[4] = &PBJ;
    foodArr[5] = &PCS;
    foodArr[6] = &TSoup;
    foodArr[7] = &Mac;
    foodArr[8] = &Steak;
    foodArr[9] = &Curry;
    foodArr[10] = &Ehcniladas;
    foodArr[11] = &BP;
    foodArr[12] = &SandM;
    foodArr[13] = &CaesarSalad;
    foodArr[14] = &pretzles;
    foodArr[15] = &Crackers;
    foodArr[16] = &Fruit;
    foodArr[17] = &PopCorn;
    foodArr[18] = &PecPie;
    foodArr[19] = &Flan;
    foodArr[20] = &Cookies;
    foodArr[21] = &BanSplit;

}

void loop(){

}
