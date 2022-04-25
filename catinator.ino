#include <string>
#include "LiquidCrystal_I2C_Spark.h"

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
        String recipeURL; //URL of the recipe as a string

    public:
        Food();
        Food(String itemName, double timeToMake, bool temperature, int foodTime, bool isCaffeinated, bool isSweet, bool isSpicy, bool isVegetarian, String recipeURL);

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
        void setRecipeURL(String uRl){
            recipeURL = uRl;
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
        String getRecipeURL(){
            return recipeURL;
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
    Food::recipeURL = "noURL";
}

Food::Food(String itemName, double timeToMake, bool temperature, int foodTime, bool isCaffeinated, bool isSweet, bool isSpicy, bool isVegetarian, String recipeURL){
    Food::itemName = itemName;
    Food::timeToMake = timeToMake;
    Food::temperature = temperature;
    Food::foodTime = foodTime;
    Food::isCaffeinated = isCaffeinated;
    Food::isSweet = isSweet;
    Food::isSpicy = isSpicy;
    Food::isVegetarian = isVegetarian;
    Food::recipeURL = recipeURL;
}

Food::~Food(){

}

//breakfast
    Food Black_Pudding("Black_Pudding", 0.5, false,0,false,false,false,false, "https://www.epicurious.com/recipes/food/views/black-pudding-51145600");
    Food Black_Pudding_w_Jam("Black_Pudding_w_Jam", 0.5, false, 0,false,true,false,false, "https://bosskitchen.com/black-pudding-with-blackberry-onion-jam/");
    Food Frittata_w_Sriracha("Frittata_w_Sriracha", 0.2, false, 0, false, false, true, false, "https://www.loveandlemons.com/frittata-recipe/");
    Food Bacon("Bacon", 0.2, true,0,false,false,false,false,"https://insanelygoodrecipes.com/bacon-recipes/");
    Food Cereal("Cereal", 0.0, false,0,false,false,false,true,"https://www.allrecipes.com/recipe/44162/homemade-cereal/");
    Food Scrambled_Eggs_w_Sriracha("Scrambled_Eggs_w_Sriracha", 0.2, true, 0, false,false,true,false,"https://www.loveandlemons.com/scrambled-eggs-recipe/");
    Food Donut("Donut", 0.0,false,0,false,true,false,true,"https://sallysbakingaddiction.com/how-to-make-homemade-glazed-doughnuts/");
    Food Breakfast_Potatoes("Breakfast_Potatoes", 0.5,true,0,false,false,false,true,"https://www.cookingclassy.com/breakfast-potatoes/");
    Food Applewood_Bacon_Frittata("Applewood_Bacon_Frittata_with_Sriracha", 0.3, false,0,false,true,true,false,"https://www.mealime.com/recipes/apple-bacon-cheddar-frittata/2292");
    Food Overnight_Masala_Oats("Overnight_Masala_Oats",0.2,false,0,false,false,true,true,"https://www.indianveggiedelight.com/masala-oats/");
    Food Scrambled_Eggs_w_Jelly("Scrambled_Eggs_w_Jelly", 0.1, true,0,false,true,false,false,"https://www.justapinch.com/recipes/breakfast/egg-breakfast/southwest-scrambled-eggs-with-jalapeno-jelly.html");
    Food Spicy_maple_breakfast_Sausage("Spicy_maple_breakfast_Sausage", 0.1,true,0,false,true,true,false,"https://www.allrecipes.com/recipe/277678/spicy-maple-breakfast-sausage/");
    Food cajun_breakfast_potatoes("cajun_breakfast_potatoes", 0.5,true,0,false,false,true,true,"https://sproutingfree.com/easy-vegan-cajun-breakfast-potatoes/");
    Food Jelly_Toast("Jelly_Toast", 0.1,true,0,false,true,false,true,"https://www.youtube.com/watch?v=42tqwhRlSWg");
    Food Sweet_and_Spicy_Oatmeal_Bar("Sweet_and_Spicy_Oatmeal_Bar",1,false,0,false,true,true,true,"https://www.providencejournal.com/story/lifestyle/food/recipes/2016/01/06/spicy-oatmeal-bars-are-easy/32790168007/");
    Food Spicy_Maple_Tofu("Spicy_Maple_Tofu", 0.2, true,0,false,true,true,true,"https://www.macheesmo.com/spicy-maple-tofu/");

//lunch
    Food Ham_and_Cheese_Sandwhich("Ham_and_Cheese_Sandwhich",0.1,false,1,false,false,false,false,"https://www.delish.com/cooking/recipe-ideas/a26870550/ham-and-cheese-sandwich-recipe/");
    Food BLT_w_Honey_Sriracha_Mayo("BLT_w_Honey_Sriracha_Mayo", 0.1,false,1,false,true,false,false,"https://www.soulfullymade.com/blt-with-honey-sriracha-mayo/");
    Food Spicy_Italian_Sub("Spicy_Italian_Sub",0.1,false,1,false,false,true,false,"https://www.lemonsforlulu.com/spicy-italian-subs/#mv-creation-2168-jtr");
    Food Baked_Chicken("Baked_Chicken", 1, true, 1, false,false,false,false,"https://www.gimmesomeoven.com/baked-chicken-breast/");
    Food Chopped_Italian_Salad("Chopped_Italian_Salad", 0.2, false,1, false,false,false,true,"https://cookieandkate.com/vegetarian-italian-chopped-salad-recipe/");
    Food Beef_Curry("Beef_Curry", 1,true,1,false,false,true,false,"https://www.bbcgoodfood.com/recipes/beef-curry");
    Food Pb_J("Pb_J", 0.1,false,1,false,true,false,true,"https://www.food.com/recipe/traditional-peanut-butter-and-jelly-243965");
    Food Vegan_Fried_Rice("Vegan_Fried_Rice", 0.3,true,1,false,false,false,true,"https://minimalistbaker.com/easy-vegan-fried-rice/");
    Food Sweet_and_Spicy_BLT("Sweet_and_Spicy_BLT", 0.2,false,1,false,true,true,false,"https://www.marthastewart.com/945288/sweet-and-spicy-blt-club");
    Food Vegan_Sichuan_Noodles("Vegan_Sichuan_Noodles", 0.5, false,1,false,false,true,true,"https://veryveganval.com/2019/04/29/spicy-vegan-cold-noodles-sichuan-style/");
    Food Belgian_Waffles("Belgian_Waffles", 0.5,true,1,false,true,false,false,"https://thesaltymarshmallow.com/homemade-belgian-waffle-recipe/");
    Food Spicy_Beef_and_Peppers("Spicy_Beef_and_Peppers", 0.2, true,1,false,true,true,false,"https://www.myrecipes.com/recipe/spicy-beef-bell-pepper-stir-fry");
    Food Kimchi_Stew("Kimchi_Stew", 1,true,1,false,false,true,true,"https://www.maangchi.com/recipe/kimchi-jjigae");
    Food Blueberry_Pancakes("Blueberry_Pancakes", 0.3,true,1,false,true,false,true,"https://pinchofyum.com/fluffiest-blueberry-pancakes");
    Food Cold_Korean_Noodles("Cold_Korean_Noodles", 0.3, false,1,false,true,true,true,"https://okonomikitchen.com/bibim-gaksu-korean-spicy-cold-noodles/");
    Food Sweet_and_Spicy_tofu("Sweet_and_Spicy_tofu", 0.5, true, 1, false, true,true,true,"https://peasandcrayons.com/2018/10/spicy-sriracha-tofu.html");

//dinner
    Food Ham_Sandwhich("Ham_Sandwhich", 0.1,false,2,false,false,false,false,"https://www.delish.com/cooking/recipe-ideas/a26870550/ham-and-cheese-sandwich-recipe/");
    Food BLT_with_Honey_Sriracha_Mayo("BLT_with_Honey_Sriracha_Mayo",0.2,false,2,false,true,false,false,"https://www.soulfullymade.com/blt-with-honey-sriracha-mayo/");
    Food Italian_Spicy_Sub("Italian_Spicy_Sub",0.2,false,2,false,false,true,false,"https://www.lemonsforlulu.com/spicy-italian-subs/#mv-creation-2168-jtr");
    Food Smoked_salmon("Smoked_salmon", 0.5,true,2,false,false,false,false,"https://honest-food.net/how-to-smoke-salmon-recipe/");
    Food Cucumber_Salad("Cucumber_Salad", 0.2, false, 2, false, false,false,true,"https://www.foodandwine.com/recipes/cucumber-salad");
    Food Pad_Thai("Pad_Thai", 0.5, true, 2,false,false,true,false,"https://www.recipetineats.com/chicken-pad-thai/");
    Food Acai_Bowl("Acai_Bowl", 0.2, false, 2, false, true,false, true,"https://theforkedspoon.com/acai-bowl/");
    Food Shpherds_Pie("Shpherds_Pie", 2, true, 2,false,false,false,true,"https://therealfooddietitians.com/shepherds-pie/");
    Food Spicy_Vegan_Korean_Noodles("Spicy_Vegan_Korean_Noodles", 0.3, false, 2, false, false, true, true,"https://thefoodietakesflight.com/vegan-bibim-guksu/");
    Food Szechuan_Noodles("Szechuan_Noodles", 0.5, false, 2, false, true,true, false,"https://www.food.com/recipe/szechuan-noodles-with-spicy-beef-sauce-48760");
    Food Zucchini_Pasta("Zucchini_Pasta", 1, true, 2, false, false, false, true,"https://cooking.nytimes.com/recipes/1022458-caramelized-zucchini-pasta");
    Food Sweet_and_Spicy_Chicken("Sweet_and_Spicy_Chicken", 0.5, true, 2, false, true,true,false,"https://30minutesmeals.com/sweet-spicy-chicken/");
    Food Korean_Cold_Noodles("Korean_Cold_Noodles", 0.2, false, 2, false, false, true, true,"https://www.simplyrecipes.com/recipes/korean_spicy_cold_noodles/");
    Food Spicy_Kimchi_Stew("Spicy_Kimchi_Stew", 0.2, true, 2, false, false, true, true,"https://www.thespruceeats.com/spicy-kimchi-stew-kimchi-jjigae-2118939");
    Food Almond_Milk_French_Toast("Almond_Milk_French_Toast", 0.2, true, 2, false, true, false, true,"https://soeasybeinggreen-blog.com/deliciously-simple-french-toast-made-almondmilk/");
    Food Sweet_and_Spicy_Tofu("Sweet_and_Spicy_Tofu", 0.4, true, 2, false, true,true,true,"https://peasandcrayons.com/2018/10/spicy-sriracha-tofu.html");

//snacks
    Food Beef_Jerky("Beef_Jerky", 0.0, false, 4, false,false,false,false,"https://www.onceuponachef.com/recipes/the-best-homemade-beef-jerky-recipe.html");
    Food Candy_Bacon("Candy_Bacon", 0.2, false, 4, false, true, false, false,"https://www.simplyrecipes.com/recipes/how_to_make_candied_bacon/");
    Food Beef_Stick("Beef_Stick", 0.0, false, 4, false, false, true, false,"https://betterbegrilled.com/recipes/smoked-beef-sticks");
    Food Pizza_Rolls("Pizza_Rolls", 0.2, true, 4, false, false, true, false,"https://gopuff.com/quick_meals/frozen_pizza/totino_s_frozen_pepperoni_pizza_rolls_15ct_7_5oz");
    Food Cucumber("Cucumber", 0.0, false, 4, false, false, false,true,"https://thriftandspice.com/mexican-cucumber-snack/");
    Food Buffalo_Wings("Buffalo_Wings", 0.3, true, 4, false, false, true, false,"https://natashaskitchen.com/buffalo-wings-recipe/");
    Food Twix("Twix", 0.0, false, 4, false, true,false,true,"https://www.twix.com/where-to-buy?gclid=CjwKCAjwx46TBhBhEiwArA_DjPsDctKznnc5hIRx5yYh--_eJSHuKo_VOthpjZZMrdpATEQrpPHl6RoCbgwQAvD_BwE&gclsrc=aw.ds");
    Food Sweet_and_Spicy_Jerky("Sweet_and_Spicy_Jerky", 0.2, false, 4, false, true,true,false,"https://www.allrecipes.com/recipe/86194/jerky-lovers-jerky-sweet-hot-and-spicy/");
    Food Oatmeal_Cookies("Oatmeal_Cookies", 0.5, true, 4, false, true, false, true,"https://www.allrecipes.com/recipe/19247/soft-oatmeal-cookies/");
    Food Sweet_Chili_Chicken_Bites("Sweet_Chili_Chicken_Bites", 0.3, true, 4, false, true, false, false,"https://www.aheadofthyme.com/sweet-chili-chicken-bites/");
    Food Kimchi ("Kimchi", 0.0, false, 4, false, false, true, true,"https://www.feastingathome.com/how-to-make-kimchi/");
    Food Honey_Garlic_Chicken_Bites("Honey_Garlic_Chicken_Bites", 0.3, true, 4, false, true, true, false,"https://www.eatwell101.com/honey-garlic-chicken-recipe");
    Food Spicy_Queso("Spicy_Queso", 0.1, true, 4, false, false, true, true,"https://www.myrecipes.com/recipe/spicy-queso-dip");
    Food Chili_Dark_Chocolate("Chili_Dark_Chocolate", 0.0, false, 4, false, true, true, true,"https://www.lindtusa.com/chili-excellence-bar-438092");
    Food Apple_Pie("Apple_Pie", 2, true, 4, false, true, false, true,"https://www.pillsbury.com/recipes/perfect-apple-pie/1fc2b60f-0a4f-441e-ad93-8bbd00fe5334");
    Food Tteokbokki("Tteokbokki", 0.3, true, 4, false, true,true,true,"https://mykoreankitchen.com/tteokbokki-spicy-rice-cakes/");

//drinks
    Food hotChocolate("Hot Chocolate", 0.1, true, 4, true, true, false, true,"https://celebratingsweets.com/homemade-hot-chocolate/");  
    Food Water("Water", 0.0, false, 4, false, false, false,true,"https://www.youtube.com/watch?v=_9N-Y2CyYhM");
    Food Coffee("Coffee", 0.1, true, 0, true, false, false, true,"https://www.illy.com/en-us/coffee/coffee-preparation/how-to-use-a-french-press#:~:text=Add%20a%20heaping%20tablespoon%20(7,stand%20for%203%2D4%20minutes");
    Food Tea("Tea", 0.1, true, 4, true, false, false, true,"https://shewearsmanyhats.com/how-to-make-tea/");
    Food Soda("Soda", 0.0, false, 4, true, true, false, true,"https://www.escoffieronline.com/brewing-your-own-soda/");
    Food Smoothie("Smoothie", 0.2, false, 4, false, true, false,  true,"https://www.acouplecooks.com/healthy-easy-smoothie-recipes/");
    Food Juice("Juice", 0.0, false, 4, false, true, false, true,"https://www.yummymummykitchen.com/2021/02/juicing-recipes.html");

//Create global arrays to point to food objects
Food *drinkArr[200];
Food *foodArr[200];
int numDrinks = 7;
int numFoods = 64;

Food *drinkReccomendations[200];
Food *foodReccomendations[200];
int numDrinkRecc = 0;
int numFoodRecc = 0;

//Final reccomended item object
Food reccomendedItem;

//strings to hold the reccomended item's name and recipe URL
String reccomendedItemURL = "noURLEstablished";
String reccomendedItemName = "noNameEstablished";

//1 or 0 to represent the button states
int buttonA, buttonB, buttonTest;

//booleans and ints to represent what the user wants after the questions
bool foodOrDrink = false; //false for food, true for dink
bool tempDesired = false; //false for cold, true for hot
bool desiredCaffeine = false; // false for no, true for yes
bool desiredSweet = false; //false for no, true for yes
bool desiredSpice = false; //false for no, true for yes
bool desiredVegetarian = false; //false for no, true for yes
int currTime; //current hour in UTC-6 (centeral standard time)
int mealTime; //0=breakfast, 1=lunch, 2=dinner, 4=snack

//particle pin numbers
int buttonAPIN = D5;
int buttonBPIN = D4;
int buttonCPIN = D3;
int buttonTestPIN = D2;


LiquidCrystal_I2C lcd(0x27,20,4);


int questionCountFood = -1;
int questionCountDrink = -1;

int currButtonA = LOW;
int currButtonB = LOW;
int currButtonTest = LOW;
int prevButtonA = LOW;
int prevButtonB = LOW;
int prevButtonTest = LOW;

bool hasBeenDisplayed = false;

void setup(){
    //food array setting
    foodArr[0]= &Black_Pudding;
    foodArr[1]= &Black_Pudding_w_Jam;
    foodArr[2]= &Frittata_w_Sriracha;
    foodArr[3]= &Bacon;
    foodArr[4]= &Cereal;
    foodArr[5]= &Scrambled_Eggs_w_Sriracha;
    foodArr[6]= &Donut;
    foodArr[7]= &Breakfast_Potatoes;
    foodArr[8]= &Applewood_Bacon_Frittata;
    foodArr[9]= &Overnight_Masala_Oats;
    foodArr[10]= &Scrambled_Eggs_w_Jelly;
    foodArr[11]= &Spicy_maple_breakfast_Sausage;
    foodArr[12]= &cajun_breakfast_potatoes;
    foodArr[13]= &Jelly_Toast;
    foodArr[14]= &Sweet_and_Spicy_Oatmeal_Bar;
    foodArr[15]= &Spicy_Maple_Tofu;
    foodArr[16]= &Ham_and_Cheese_Sandwhich;
    foodArr[17]= &BLT_w_Honey_Sriracha_Mayo;
    foodArr[18]= &Spicy_Italian_Sub;
    foodArr[19]= &Baked_Chicken;
    foodArr[20]= &Chopped_Italian_Salad;
    foodArr[21]= &Beef_Curry;
    foodArr[22]= &Pb_J;
    foodArr[23]= &Vegan_Fried_Rice;
    foodArr[24]= &Sweet_and_Spicy_BLT;
    foodArr[25]= &Vegan_Sichuan_Noodles;
    foodArr[26]= &Belgian_Waffles;
    foodArr[27]= &Spicy_Beef_and_Peppers;
    foodArr[28]= &Kimchi_Stew;
    foodArr[29]= &Blueberry_Pancakes;
    foodArr[30]= &Cold_Korean_Noodles;
    foodArr[31]= &Sweet_and_Spicy_tofu;
    foodArr[32]= &Ham_Sandwhich;
    foodArr[33]= &BLT_with_Honey_Sriracha_Mayo;
    foodArr[34]= &Italian_Spicy_Sub;
    foodArr[35]= &Smoked_salmon;
    foodArr[36]= &Cucumber_Salad;
    foodArr[37]= &Pad_Thai;
    foodArr[38]= &Acai_Bowl;
    foodArr[39]= &Shpherds_Pie;
    foodArr[40]= &Spicy_Vegan_Korean_Noodles;
    foodArr[41]= &Szechuan_Noodles;
    foodArr[42]= &Zucchini_Pasta;
    foodArr[43]= &Sweet_and_Spicy_Chicken;
    foodArr[44]= &Korean_Cold_Noodles;
    foodArr[45]= &Spicy_Kimchi_Stew;
    foodArr[46]= &Almond_Milk_French_Toast;
    foodArr[47]= &Sweet_and_Spicy_Tofu;
    foodArr[48]= &Beef_Jerky;
    foodArr[49]= &Candy_Bacon;
    foodArr[50]= &Beef_Stick;
    foodArr[51]= &Pizza_Rolls;
    foodArr[52]= &Cucumber;
    foodArr[53]= &Buffalo_Wings;
    foodArr[54]= &Twix;
    foodArr[55]= &Sweet_and_Spicy_Jerky;
    foodArr[56]= &Oatmeal_Cookies;
    foodArr[57]= &Sweet_Chili_Chicken_Bites;
    foodArr[58]= &Kimchi;
    foodArr[59]= &Honey_Garlic_Chicken_Bites;
    foodArr[60]= &Spicy_Queso;
    foodArr[61]= &Chili_Dark_Chocolate;
    foodArr[62]= &Chili_Dark_Chocolate;
    foodArr[63]= &Tteokbokki;

    //drinks array setting
    drinkArr[0] = &hotChocolate;
    drinkArr[1] = &Water;
    drinkArr[2] = &Coffee;
    drinkArr[3] = &Tea;
    drinkArr[4] = &Soda;
    drinkArr[5] = &Smoothie;
    drinkArr[6] = &Juice;

    //initialize particle pins
    pinMode(buttonAPIN, INPUT_PULLDOWN);
    pinMode(buttonBPIN, INPUT_PULLDOWN);
    pinMode(buttonTestPIN, INPUT_PULLDOWN);

    //set time zone
    Time.zone(-6);
    
    lcd.init();
    lcd.init();
    lcd.backlight();
    lcd.clear();

    //create cloud variable to store the url of the reccomended item so IFTTT can access it
    Particle.variable("reccURL", reccomendedItemURL);
    Particle.variable("reccName", reccomendedItemName);
}


/*
Searches through foodArr sequentially to see if the object each index is pointing to matches the
attributes the user requested

returns the Food object that the index is pointing to

If there are more than one food item that match the user's requirements, then this function
chooses a random element from an array that holds pointers to matching Food objects
*/
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

/*
Searches through drinkArr sequentially to see if the object each index is pointing to matches the
attributes the user requested

returns the Food object that the index is pointing to

If there are more than one food item that match the user's requirements, then this function
chooses a random element from an array that holds pointers to matching Food objects
*/
Food searchForDrink(int mealTime, bool desiredSweet, bool tempDesired, bool desiredCaffeine){
    int j = 0;
    for(int i = 0; i < numDrinks; i++){
        if(drinkArr[i]->getFoodTime() == mealTime && drinkArr[i]->getSweet() == desiredSweet && drinkArr[i]->getTemperature() == tempDesired && drinkArr[i]->getCaffine() == desiredCaffeine){
            drinkReccomendations[j] = drinkArr[i];
            j++;
            numDrinkRecc++;
        }
    }
    if(numDrinkRecc == 0){
        return *drinkArr[1];
    }
    else{
        return *drinkReccomendations[random(numDrinkRecc)];
    }
}

/*
Loop executes only number of times the user wants

Starts by grabbing the current button states.  If the test button is pressed during boot up or before 
sequential run throughs, then the Catinator will enter "test mode" which is a demonstration for the 
IoT project fair.

After grabbing button states, the current hour is grabbed and assigned to an integer to represent
which meal the hour falls into (Breakfast, lunch, dinner, or snack)

Then, we call the askForFoodOrDrink() function to ask the user if they want something to eat or drink
if they want food, then we ask them the following:
    Should the food be sweet
    Should the food be spicy
    Should the food be hot or cold
    Should the food be vegetarian

If they want drink:
    Should it be Sweet
    Should it be hot or cold
    Should it have caffeine

Then, we take that information and either call the searchForFood() or searchForDrink functions to parse
the main pointer arrays to find a food or drink that matches the user's requirements

Then, after we get an item that they like, we update the reccomendedItemURL string variable with
a URL to that item's recipe.  This update triggers an If This Then That Applet that sends an email to a 
predefined email address with this URL.

*/



void loop(){
    currButtonA = digitalRead(buttonAPIN);
    currButtonB = digitalRead(buttonBPIN);
    currButtonTest = digitalRead(buttonTestPIN);

    currTime = Time.hour();
    if(currTime > 5 && currTime < 12){
        mealTime = 0;//breakfast
    }
    else if(currTime > 11 && currTime < 17){
        mealTime = 1;//lunch
    }
    else if(currTime > 16 && currTime < 21){
        mealTime = 2;//dinner
    }
    else{
        mealTime = 4;//snack
    }

    if(questionCountDrink == -1){//initial case when thingy boots up
        if(hasBeenDisplayed == false){
            //ASK FOR A to continue
            lcd.clear();
            lcd.setCursor(0,0);
            lcd.print("The Catinator greets");
            lcd.setCursor(0,1);             
            lcd.print("you joyfully. With a");
            lcd.setCursor(0,2);            
            lcd.print("soft 'meow.'");
            lcd.setCursor(0,3);             
            lcd.print("Press A to continue");
            hasBeenDisplayed = true;
        }
        if(prevButtonA == LOW && currButtonA == HIGH){
            
            questionCountDrink++;
            questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonA = currButtonA;
        }
        if(prevButtonB == LOW && currButtonB == HIGH){
            //TODO: INSERT HARD CODE HERE
            // questionCountDrink++;
            // questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonB = currButtonB;
        }
        
    }

    if(questionCountDrink == 0){
        if(hasBeenDisplayed == false){
            //ASK FOR food or drink - button A for food, B for drink
            lcd.clear();
            lcd.setCursor(0,0);           
            lcd.print("Are you hungry?");
            lcd.setCursor(0,1);             
            lcd.print("Or are you thirsty?");
            lcd.setCursor(0,2);            
            lcd.print("A: hungry");
            lcd.setCursor(0,3);             
            lcd.print("B: Thirsty");
            hasBeenDisplayed = true;
        }
        if(prevButtonA == LOW && currButtonA == HIGH){
            foodOrDrink = false;
            questionCountDrink++;
            questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonA = currButtonA;
        }
        if(prevButtonB == LOW && currButtonB == HIGH){
            foodOrDrink = true;
            questionCountDrink++;
            questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonB = currButtonB;
        }
    }
    if(questionCountDrink == 1){
        if(hasBeenDisplayed == false){
            //ASK FOR sweet - button A for sweet, B for not sweet
            lcd.clear();
            lcd.setCursor(0,0);           
            lcd.print("Would you like it to");
            lcd.setCursor(0,1);             
            lcd.print("be sweet?");
            lcd.setCursor(0,2);            
            lcd.print("A: Yes");
            lcd.setCursor(0,3);             
            lcd.print("B: No");
            hasBeenDisplayed = true;
        }
        if(prevButtonA == LOW && currButtonA == HIGH){
            desiredSweet = true;
            questionCountDrink++;
            questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonA = currButtonA;
        }
        if(prevButtonB == LOW && currButtonB == HIGH){
            desiredSweet = false;
            questionCountDrink++;
            questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonB = currButtonB;
        }
    }
    if(questionCountDrink == 2){
        if(hasBeenDisplayed == false){
            //ASK FOR TEMP - button A for hot, B for cold
            lcd.clear();
            lcd.setCursor(0,0);           
            lcd.print("Would you like it to");
            lcd.setCursor(0,1);             
            lcd.print("be hot?");
            lcd.setCursor(0,2);            
            lcd.print("A: Yes");
            lcd.setCursor(0,3);             
            lcd.print("B: No");

            hasBeenDisplayed = true;
        }
        if(prevButtonA == LOW && currButtonA == HIGH){
            tempDesired = true;
            questionCountDrink++;
            questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonA = currButtonA;
        }
        if(prevButtonB == LOW && currButtonB == HIGH){
            tempDesired = false;
            questionCountDrink++;
            questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonB = currButtonB;
        }
    }
    if(questionCountFood == 3 && foodOrDrink == false){
        if(hasBeenDisplayed == false){
            //ASK FOR spicy - button A for spicy, B for not spicy
            lcd.clear();
            lcd.setCursor(0,0);           
            lcd.print("Would you like it to");
            lcd.setCursor(0,1);             
            lcd.print("be spicy?");
            lcd.setCursor(0,2);            
            lcd.print("A: Yes");
            lcd.setCursor(0,3);             
            lcd.print("B: No");
            hasBeenDisplayed = true;
        }
        if(prevButtonA == LOW && currButtonA == HIGH){
            desiredSpice = true;
            questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonA = currButtonA;
        }
        if(prevButtonB == LOW && currButtonB == HIGH){
            desiredSpice = false;
            questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonB = currButtonB;
        }
    }
    if(questionCountFood == 4 && foodOrDrink == false){
        if(hasBeenDisplayed == false){
            //ASK FOR vegetarian - button A for yes, B for no
            lcd.clear();
            lcd.setCursor(0,0);           
            lcd.print("Would you like it to");
            lcd.setCursor(0,1);             
            lcd.print("be vegetarian?");
            lcd.setCursor(0,2);            
            lcd.print("A: Yes");
            lcd.setCursor(0,3);             
            lcd.print("B: No");
            hasBeenDisplayed = true;
        }
        if(prevButtonA == LOW && currButtonA == HIGH){
            desiredVegetarian = true;
            questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonA = currButtonA;
        }
        if(prevButtonB == LOW && currButtonB == HIGH){
            desiredVegetarian = false;
            questionCountFood++;
            hasBeenDisplayed = false;
            prevButtonB = currButtonB;
        }
    }
    if(questionCountDrink == 3 && foodOrDrink == true){
        if(hasBeenDisplayed == false){
            //ASK FOR caffeine - button A for yes, B for no
            lcd.clear();
            lcd.setCursor(0,0);           
            lcd.print("Would you like it to");
            lcd.setCursor(0,1);             
            lcd.print("be caffeinated?");
            lcd.setCursor(0,2);            
            lcd.print("A: Yes");
            lcd.setCursor(0,3);             
            lcd.print("B: No");
            hasBeenDisplayed = true;
        }
        if(prevButtonA == LOW && currButtonA == HIGH){
            desiredVegetarian = true;
            questionCountDrink++;
            hasBeenDisplayed = false;
            prevButtonA = currButtonA;
        }
        if(prevButtonB == LOW && currButtonB == HIGH){
            desiredVegetarian = false;
            questionCountDrink++;
            hasBeenDisplayed = false;
            prevButtonB = currButtonB;
        }
    }
    if(questionCountFood == 5 && foodOrDrink == false){
        reccomendedItem = searchForFood(mealTime, desiredSweet, desiredSpice, tempDesired, desiredVegetarian);

        reccomendedItemURL = reccomendedItem.getRecipeURL();
        reccomendedItemName = reccomendedItem.getItemName();
        questionCountFood++;
    }
    if(questionCountDrink == 4 && foodOrDrink == true){
        if(mealTime != 0){
            mealTime = 4;
        }
        reccomendedItem = searchForDrink(mealTime, desiredSweet, tempDesired, desiredCaffeine);
        reccomendedItemURL = reccomendedItem.getRecipeURL();
        reccomendedItemName = reccomendedItem.getItemName();
        questionCountDrink++;
    }
    if(questionCountFood == 6 || questionCountDrink == 5){
        if(hasBeenDisplayed == false){
            //ASK if want to redo catinator a=y, b=n
            lcd.clear();
            lcd.setCursor(0,0);           
            lcd.print("Would you like to go");
            lcd.setCursor(0,1);             
            lcd.print("again?");
            lcd.setCursor(0,2);            
            lcd.print("A: Yes");
            lcd.setCursor(0,3);             
            lcd.print("B: No");
            hasBeenDisplayed = true;
        }
        if(prevButtonA == LOW && currButtonA == HIGH){
            questionCountDrink = -1;
            questionCountFood = -1;
            hasBeenDisplayed = false;
            prevButtonA = currButtonA;
        }
        if(prevButtonB == LOW && currButtonB == HIGH){
            questionCountDrink = 10000;
            questionCountFood = 10000;
            hasBeenDisplayed = false;
            prevButtonB = currButtonB;
        }
    }
    if(questionCountDrink == 10000 && questionCountFood == 10000){
        if(hasBeenDisplayed == false){
            // display fun catinator slogan
            lcd.clear();
            lcd.setCursor(5,0);           
            lcd.print("Thank you");
            lcd.setCursor(8,1);             
            lcd.print("for");
            lcd.setCursor(6,2);            
            lcd.print("playing...");
            lcd.setCursor(8,3);             
            lcd.print("meow");
            hasBeenDisplayed = true;
        }
        if(prevButtonA == LOW && currButtonA == HIGH){
            questionCountDrink = -1;
            questionCountFood = -1;
            hasBeenDisplayed = false;
            prevButtonA = currButtonA;
        }
    }

    prevButtonA = currButtonA;
    prevButtonB = currButtonB;
    prevButtonTest = currButtonTest;
    
    //TODO: INSERT CODE HERE FOR SERVO

}

/*
SHEET PUBLISH URL: https://docs.google.com/spreadsheets/d/e/2PACX-1vQjwLppuLNXVJOfKttuirwGfJumym55-kroePQEsxrdmYDsjf5ptqErrBQrrhAhspJN-u2uJYnEh75h/pubhtml
SHEET DOCUMENT ID: 1j3hOhOop3JSAOlft1MeWzy6ohqzPoidtYxya51j3hB0
Example URL (HC):  http://gsx2json.com/api?id=1j3hOhOop3JSAOlft1MeWzy6ohqzPoidtYxya51j3hB0&sheet=1&q=Hot_Chocolate


Code Verified by build.particle.io 24 April 2022 6:15PM
*/