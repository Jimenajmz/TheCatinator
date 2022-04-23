#include <string>


using namespace std;

class Food{
    private: 
        String itemName;
        double timeToMake; //time in hours to make
        bool temperature; //TRUE for hot, FALSE for cold
        int foodTime; //0=breakfast, 1=lunch, 2=dinner, 3=desert, 4=snack
        bool isCaffeinated; //TRUE for yes, FALSE for no
        bool isSweet; //TRUE for yes, FALSE for no
        bool isSpicy; //TRUE for yes, FALSE for no
        bool isVegetarian; //TRUE for yes, FALSE for no

    public:
        Food();
        Food(String itemName, double timeToMake, bool temperature, int foodTime, bool isCaffeinated, bool isSweet, bool isSpicy, bool isVegetarian);

        void setItemName(String name){
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


        String getItemName(){
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

Food::Food(String itemName, double timeToMake, bool temperature, int foodTime, bool isCaffeinated, bool isSweet, bool isSpicy, bool isVegetarian){
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

//Create globally variables/libs
Food *drinkArr[200];
Food *foodArr[200];
int numDrinks = 7;
int numFoods = 22;

Food *drinkReccomendations[200];
Food *foodReccomendations[200];
int numDrinkRecc = 0;
int numFoodRecc = 0;

int buttonYesPIN = D0;
int buttonNoPIN = D1;
int buttonAPIN = D2;
int buttonBPIN = D3;
int buttonCPIN = D4;
int buttonTestPIN = D5;
int LCDPIN1 = A0;
int LCDPIN2 = A1;

int buttonYes, buttonNo, buttonA, buttonB, buttonC, buttonTest;

bool foodOrDrink = false; //false for food, true for dink
bool tempDesired = false; //false for cold, true for hot
bool desiredCaffeine = false; // false for no, true for yes
bool desiredSweet = false; //false for no, true for yes
bool desiredSpice = false; //false for no, true for yes
bool desiredVegetarian = false; //false for no, true for yes
int currTime; //current hour in UTC-6 (centeral standard time)
int mealTime; //0=breakfast, 1=lunch, 2=dinner, 4=snack

bool foodSearchElements[4] = {false};
bool drinkSearchElements[3] = {false};

void setup(){
    
    //create food objects (drinks)
    Food hotChocolate("Hot Chocolate", 0.1, true, 4, true, true, false, true);
    Food Water("Water", 0.0, false, 4, false, false, false,true);
    Food Coffee("Coffee", 0.1, true, 0, true, false, false, true);
    Food Tea("Tea", 0.1, true, 4, true, false, false, true);
    Food Soda("Soda", 0.0, false, 4, true, true, false, true);
    Food Smoothie("Smoothie", 0.2, false, 4, false, true, false,  true);
    Food Juice("Juice", 0.0, false, 4, false, true, false, true);

    //create food objects (food)
    Food EnT("Eggs and Toast", 0.25, true, 0, false, false, false,  true);
    Food Toast("Toast", 0.1, true, 0, false, false, false,  true);
    Food Cereal("Cereal", 0.1, false, 0, false, true, false,  true);
    Food Waffle("Belgian Waffles", 0.25, 0, true, false, true, false,  true);
    Food PBJ("PB&J", 0.1, false, 1, false, true, false,  true);
    Food PCS("Philly Cheese Steak", 0.5, true, 1, false, false, false,  false);
    Food TSoup("Tomato Soup", 0.25, true, 1, false, false, false, true);
    Food Mac("Macaroni and Cheese", 0.25, true, 1, false, false, false, true);
    Food Steak("Steak", 0.5, true, 2, false, false, false,  false);
    Food Curry("Spicy Tofu Curry", 0.5, true, 2, false, false, true,  true);
    Food Ehcniladas("Enchiladas", 0.5, true, 2, false, false, false,  false);
    Food BP("Baked Potatoe", 0.2, true, 2, false, false, false, true);
    Food SandM("Spaghetti and Meatballs", 0.5, true, 2, false, false, false,  false);
    Food CaesarSalad("Caesar Salad", 0.1, false, 2, false, false, false,  true);
    Food pretzles("Pretzels", 0.0, false, 4, false, false, false,  true);
    Food Crackers("Crackers", 0.0, false, 4, false, false, false,  true);
    Food Fruit("Fruit", 0.0, false, 4, false, true, false,  true);
    Food PopCorn("Popcorn", 0.1, true, 4, false, false, false, true);
    Food PecPie("Pecan Pie", 3, true, 3, false, true, false,  true);
    Food Flan("Flan", 2, false, 3, false, true, false,  true);
    Food Cookies("Cookies", 1, true, 3, false, true, false,  true);
    Food BanSplit("Bannana Split", 0.1, false, 3, false, true, false,  true);

    //add food objects to pre-created arrays
    drinkArr[0] = &hotChocolate;
    drinkArr[1] = &Water;
    drinkArr[2] = &Coffee;
    drinkArr[3] = &Tea;
    drinkArr[4] = &Soda;
    drinkArr[5] = &Smoothie;
    drinkArr[6] = &Juice;
    
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

    //initialize digital pins
    pinMode(buttonYesPIN, INPUT);
    pinMode(buttonNoPIN, INPUT);
    pinMode(buttonAPIN, INPUT);
    pinMode(buttonBPIN, INPUT);
    pinMode(buttonCPIN, INPUT);
    pinMode(buttonTestPIN, INPUT);
    pinMode(LCDPIN1, OUTPUT);
    pinMode(LCDPIN2, OUTPUT);


    Time.zone(-6);

}

bool askForFoodOrDrink(){
    //insert code here to push to the screen

    while(buttonYes == 0 && buttonNo == 0){
        buttonA = digitalRead(buttonAPIN);
        buttonB = digitalRead(buttonBPIN);
        if(buttonA == 1){ // food/hungry
            return false;
        }
    }
    return true;
}

bool askForDesiredTemp(){
    //insert code here to push to screen

    while(buttonYes == 0 && buttonNo == 0){
        buttonA = digitalRead(buttonAPIN);
        buttonB = digitalRead(buttonBPIN);
        if(buttonA == 1){ // hot
            return true;
        }
    }
    return false;
}

bool askForDesiredCaffeine(){
    //insert code here to push to screen

    while(buttonYes == 0 && buttonNo == 0){
        buttonA = digitalRead(buttonAPIN);
        buttonB = digitalRead(buttonBPIN);
        if(buttonA == 1){ // caffeine
            return true;
        }
    }
    return false;
}

bool askForDesiredSweet(){
    //insert code here to push to screen

    while(buttonYes == 0 && buttonNo == 0){
        buttonA = digitalRead(buttonAPIN);
        buttonB = digitalRead(buttonBPIN);
        if(buttonA == 1){ // sweet
            return true;
        }
    }
    return false;
}

bool askForDesiredSpice(){
    //insert code here to push to screen

    while(buttonYes == 0 && buttonNo == 0){
        buttonA = digitalRead(buttonAPIN);
        buttonB = digitalRead(buttonBPIN);
        if(buttonA == 1){ // spicy
            return true;
        }
    }
    return false;
}

bool askForVegetarian(){
    //inset code here to push to screen

    while(buttonYes == 0 && buttonNo == 0){
        buttonA = digitalRead(buttonAPIN);
        buttonB = digitalRead(buttonBPIN);
        if(buttonA == 1){ // vegetarian
            return true;
        }
    }
    return false;
}

Food searchForFood(int mealTime, bool desiredSweet, bool desiredSpice, bool tempDesired, bool desiredVegetarian){
    int j = 0;
    for(int i = 0; i < numFoods; i++){
        if(foodArr[i]->getFoodTime() == mealTime && foodArr[i]->getSweet() == desiredSweet && foodArr[i]->getSpicy() == desiredSpice && foodArr[i]->getTemperature() == tempDesired && foodArr[i]->getVegetarian() == desiredVegetarian){
            foodReccomendations[j] = foodArr[i];
            j++;
            numFoodRecc++;
        }
    }
    if(numFoodRecc == 0){
        return *drinkArr[1];
    }
    else{
        return *foodReccomendations[random(numFoodRecc)];
    }
}

Food searchForDrink(int mealTime, bool desiredSweet, bool tempDesired, bool desiredCaffeine){
    int j = 0;
    for(int i = 0; i < numDrinks; i++){
        if(drinkArr[i]->getFoodTime() == mealTime && drinkArr[i]->getSweet() == desiredSweet && drinkArr[i]->getTemperature() == tempDesired && drinkArr[i]->getCaffine() == desiredCaffeine){
            drinkReccomendations[j] = drinkArr[i];
            j++;
            numDrinkRecc++;
        }
    }
    if(numFoodRecc == 0){
        return *drinkArr[1];
    }
    else{
        return *drinkReccomendations[random(numDrinkRecc)];
    }
}

void loop(){
    buttonA = digitalRead(buttonAPIN);
    buttonB = digitalRead(buttonBPIN);
    buttonC = digitalRead(buttonCPIN);
    buttonYes = digitalRead(buttonYesPIN);
    buttonNo = digitalRead(buttonNoPIN);
    buttonTest = digitalRead(buttonTestPIN);
    currTime = Time.hour();
    if(currTime > 5 && currTime < 12){
        mealTime == 0;//breakfast
    }
    else if(currTime > 11 && currTime < 17){
        mealTime == 1;//lunch
    }
    else if(currTime > 16 && currTime < 21){
        mealTime == 2;//dinner
    }
    else{
        mealTime == 4;//snack
    }

    if(buttonTest == 1){
        /*
        Insert code here for hardcoded test variant
        */
    }

    //ask if hungry or thirsty, return true for drink, false for food
    foodOrDrink = askForFoodOrDrink();

    if(foodOrDrink == false){ //if user wants food
        desiredSweet = askForDesiredSweet();
        desiredSpice = askForDesiredSpice();
        tempDesired = askForDesiredTemp();
        desiredVegetarian = askForVegetarian();
    }
    else{
        desiredSweet = askForDesiredSweet();
        tempDesired = askForDesiredTemp();
        desiredCaffeine = askForDesiredCaffeine();

    }

    if(foodOrDrink == false){
        Food recomendedItem = searchForFood(mealTime, desiredSweet, desiredSpice, tempDesired, desiredVegetarian);
    }
    else{
        Food recomendedItem = searchForDrink(mealTime, desiredSweet, tempDesired, desiredCaffeine);
    }
}
