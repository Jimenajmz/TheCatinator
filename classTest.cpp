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

Food reccomendedItem;

bool foodOrDrink, desiredSweet, desiredSpice, tempDesired, desiredVeg, desiredCaff;

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
        return *foodReccomendations[rand() % numFoodRecc];
    }
}

Food searchForDrink(int mealTime, bool desiredSweet, bool tempDesired, bool desiredCaffeine){
    int j = 0;
    for(int i = 0; i < numDrinks; i++){
        if((drinkArr[i]->getFoodTime() == mealTime) && (drinkArr[i]->getSweet() == desiredSweet) && (drinkArr[i]->getTemperature() == tempDesired) && (drinkArr[i]->getCaffine() == desiredCaffeine)){
            drinkReccomendations[j] = drinkArr[i];
            j++;
            numDrinkRecc++;
        }
    }
    if(numDrinkRecc == 0){
        return *drinkArr[1];
    }
    else{
        return *drinkReccomendations[rand() % numDrinkRecc];
    }
}

bool buttonABPress(){
    char YN = 'y';
    while(YN == 'y'){
        cin >> YN;
        if(YN == 'y' || YN == 'Y'){
            return true;
        }
        else if(YN =='n' || YN == 'N'){
            return false;
        }
        else{
            cout << "Invalid input. Try again. (y/n): ";
        }
        YN = 'y';
    }
    return false;
}

bool askForFoodOrDrink(){
    cout << "Are you hungry? (y/n): ";
    bool choice = buttonABPress();
    return !choice;
}

bool askForDesiredTemp(){
    cout << "Do you want something hot? (y/n): ";
    return buttonABPress();
}

bool askForDesiredCaffeine(){
    cout << "Should it be caffeinated? (y/n): ";
    return buttonABPress();
}

bool askForDesiredSweet(){
    cout << "Should it be sweet? (y/n): ";
    return buttonABPress();
}

bool askForDesiredSpice(){
    cout << "Should it be spicy? (y/n): ";
    return buttonABPress();
}

bool askForVegetaritan(){
    cout << "Should it be Vegetarian? (y/n): ";
    return buttonABPress();
}


int main(){
    srand(time(NULL));
    
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

    drinkArr[0] = &hotChocolate;
    drinkArr[1] = &Water;
    drinkArr[2] = &Coffee;
    drinkArr[3] = &Tea;
    drinkArr[4] = &Soda;
    drinkArr[5] = &Smoothie;
    drinkArr[6] = &Juice;

    int mealTime = 2;

    foodOrDrink = askForFoodOrDrink();
    if(foodOrDrink == false){
        desiredSweet = askForDesiredSweet();
        desiredSpice = askForDesiredSpice();
        tempDesired = askForDesiredTemp();
        desiredVeg = askForVegetaritan();
        reccomendedItem = searchForFood(mealTime, desiredSweet, desiredSpice, tempDesired, desiredVeg);
        cout << "Food: " << reccomendedItem.getItemName() << ": " << reccomendedItem.getRecipeURL() << endl;
    }
    else{
        desiredSweet = askForDesiredSweet();
        tempDesired = askForDesiredTemp();
        desiredCaff = askForDesiredCaffeine();
        if(mealTime == 0){
        }
        else{
            mealTime = 4;
        }
        reccomendedItem = searchForDrink(mealTime, desiredSweet, tempDesired, desiredCaff);
        cout << "Drink: " << reccomendedItem.getItemName() << ": " << reccomendedItem.getRecipeURL() << endl;
    }

    // cout << hotChocolate.getItemName() << "'s time to make is " << hotChocolate.getTimeToMake() << " hours" << endl;
    // cout << drinkArr[0]->getItemName() << "'s time to make is " << drinkArr[0]->getTimeToMake() << " hours" << endl;

    // /*
    // Both of these cout statements work to say:
    // Hot Chocolate's time to make is 0.1 hours
    // */
    
    return 0;
}