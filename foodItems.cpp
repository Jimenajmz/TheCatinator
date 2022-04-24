#include "Food.hpp"

Food *drinkArr[200];
Food *foodArr[200];
int numDrinks = 7;
int numFoods = 64;

/*
FOLLOW THIS CONVENTION:
Food item_Name("item_Name", timeToMake, temperature, foodTime, isCaffeinated, isSweet, isSpicy, isVegetarian, recipeURL);

Basically, just add the recipe URL as a new paramater after the last boolean.

Ex:  Food hotChocolate("Hot Chocolate", 0.1, true, 4, true, true, false, true, "https://celebratingsweets.com/homemade-hot-chocolate/");



*/

//breakfast
    Food Black_Pudding("Black_Pudding", 0.5, false,0,false,false,false,false);
    Food Black_Pudding_w_Jam("Black_Pudding_w_Jam", 0.5, false, 0,false,true,false,false);
    Food Frittata_w_Sriracha("Frittata_w_Sriracha", 0.2, false, 0, false, false, true, false);
    Food Bacon("Bacon", 0.2, true,0,false,false,false,false);
    Food Cereal("Cereal", 0.0, false,0,false,false,false,true);
    Food Scrambled_Eggs_w_Sriracha("Scrambled_Eggs_w_Sriracha", 0.2, true, 0, false,false,true,false);
    Food Donut("Donut", 0.0,false,0,false,true,false,true);
    Food Breakfast_Potatoes("Breakfast_Potatoes", 0.5,true,0,false,false,false,true);
    Food Applewood_Bacon_Frittata("Applewood_Bacon_Frittata_with_Sriracha", 0.3, false,0,false,true,true,false);
    Food Overnight_Masala_Oats("Overnight_Masala_Oats",0.2,false,0,false,false,true,true);
    Food Scrambled_Eggs_w_Jelly("Scrambled_Eggs_w_Jelly", 0.1, true,0,false,true,false,false);
    Food Spicy_maple_breakfast_Sausage("Spicy_maple_breakfast_Sausage", 0.1,true,0,false,true,true,false);
    Food cajun_breakfast_potatoes("cajun_breakfast_potatoes", 0.5,true,0,false,false,true,true);
    Food Jelly_Toast("Jelly_Toast", 0.1,true,0,false,true,false,true);
    Food Sweet_and_Spicy_Oatmeal_Bar("Sweet_and_Spicy_Oatmeal_Bar",1,false,0,false,true,true,true);
    Food Spicy_Maple_Tofu("Spicy_Maple_Tofu", 0.2, true,0,false,true,true,true);

    //lunch
    Food Ham_and_Cheese_Sandwhich("Ham_and_Cheese_Sandwhich",0.1,false,1,false,false,false,false);
    Food BLT_w_Honey_Sriracha_Mayo("BLT_w_Honey_Sriracha_Mayo", 0.1,false,1,false,true,false,false);
    Food Spicy_Italian_Sub("Spicy_Italian_Sub",0.1,false,1,false,false,true,false);
    Food Baked_Chicken("Baked_Chicken", 1, true, 1, false,false,false,false);
    Food Chopped_Italian_Salad("Chopped_Italian_Salad", 0.2, false,1, false,false,false,true);
    Food Beef_Curry("Beef_Curry", 1,true,1,false,false,true,false);
    Food Pb_J("Pb_J", 0.1,false,1,false,true,false,true);
    Food Vegan_Fried_Rice("Vegan_Fried_Rice", 0.3,true,1,false,false,false,true);
    Food Sweet_and_Spicy_BLT("Sweet_and_Spicy_BLT", 0.2,false,1,false,true,true,false);
    Food Vegan_Sichuan_Noodles("Vegan_Sichuan_Noodles", 0.5, false,1,false,false,true,true);
    Food Belgian_Waffles("Belgian_Waffles", 0.5,true,1,false,true,false,false);
    Food Spicy_Beef_and_Peppers("Spicy_Beef_and_Peppers", 0.2, true,1,false,true,true,false);
    Food Kimchi_Stew("Kimchi_Stew", 1,true,1,false,false,true,true);
    Food Blueberry_Pancakes("Blueberry_Pancakes", 0.3,true,1,false,true,false,true);
    Food Cold_Korean_Noodles("Cold_Korean_Noodles", 0.3, false,1,false,true,true,true);
    Food Sweet_and_Spicy_tofu("Sweet_and_Spicy_tofu", 0.5, true, 1, false, true,true,true);

    //dinner
    Food Ham_Sandwhich("Ham_Sandwhich", 0.1,false,2,false,false,false,false);
    Food BLT_with_Honey_Sriracha_Mayo("BLT_with_Honey_Sriracha_Mayo",0.2,false,2,false,true,false,false);
    Food Italian_Spicy_Sub("Italian_Spicy_Sub",0.2,false,2,false,false,true,false);
    Food Smoked_salmon("Smoked_salmon", 0.5,true,2,false,false,false,false);
    Food Cucumber_Salad("Cucumber_Salad", 0.2, false, 2, false, false,false,true);
    Food Pad_Thai("Pad_Thai", 0.5, true, 2,false,false,true,false);
    Food Acai_Bowl("Acai_Bowl", 0.2, false, 2, false, true,false, true);
    Food Shpherds_Pie("Shpherds_Pie", 2, true, 2,false,false,false,true);
    Food Spicy_Vegan_Korean_Noodles("Spicy_Vegan_Korean_Noodles", 0.3, false, 2, false, false, true, true);
    Food Szechuan_Noodles("Szechuan_Noodles", 0.5, false, 2, false, true,true, false);
    Food Zucchini_Pasta("Zucchini_Pasta", 1, true, 2, false, false, false, true);
    Food Sweet_and_Spicy_Chicken("Sweet_and_Spicy_Chicken", 0.5, true, 2, false, true,true,false);
    Food Korean_Cold_Noodles("Korean_Cold_Noodles", 0.2, false, 2, false, false, true, true);
    Food Spicy_Kimchi_Stew("Spicy_Kimchi_Stew", 0.2, true, 2, false, false, true, true);
    Food Almond_Milk_French_Toast("Almond_Milk_French_Toast", 0.2, true, 2, false, true, false, true);
    Food Sweet_and_Spicy_Tofu("Sweet_and_Spicy_Tofu", 0.4, true, 2, false, true,true,true);

    //snacks
    Food Beef_Jerky("Beef_Jerky", 0.0, false, 4, false,false,false,false);
    Food Candy_Bacon("Candy_Bacon", 0.2, false, 4, false, true, false, false);
    Food Beef_Stick("Beef_Stick", 0.0, false, 4, false, false, true, false);
    Food Pizza_Rolls("Pizza_Rolls", 0.2, true, 4, false, false, true, false);
    Food Cucumber("Cucumber", 0.0, false, 4, false, false, false,true);
    Food Buffalo_Wings("Buffalo_Wings", 0.3, true, 4, false, false, true, false);
    Food Twix("Twix", 0.0, false, 4, false, true,false,true);
    Food Sweet_and_Spicy_Jerky("Sweet_and_Spicy_Jerky", 0.2, false, 4, false, true,true,false);
    Food Oatmeal_Cookies("Oatmeal_Cookies", 0.5, true, 4, false, true, false, true);
    Food Sweet_Chili_Chicken_Bites("Sweet_Chili_Chicken_Bites", 0.3, true, 4, false, true, false, false);
    Food Kimchi ("Kimchi", 0.0, false, 4, false, false, true, true);
    Food Honey_Garlic_Chicken_Bites("Honey_Garlic_Chicken_Bites", 0.3, true, 4, false, true, true, false);
    Food Spicy_Queso("Spicy_Queso", 0.1, true, 4, false, false, true, true);
    Food Chili_Dark_Chocolate("Chili_Dark_Chocolate", 0.0, false, 4, false, true, true, true);
    Food Apple_Pie("Apple_Pie", 2, true, 4, false, true, false, true);
    Food Tteokbokki("Tteokbokki", 0.3, true, 4, false, true,true,true);

    //drinks
    Food hotChocolate("Hot Chocolate", 0.1, true, 4, true, true, false, true);  
    Food Water("Water", 0.0, false, 4, false, false, false,true);
    Food Coffee("Coffee", 0.1, true, 0, true, false, false, true);
    Food Tea("Tea", 0.1, true, 4, true, false, false, true);
    Food Soda("Soda", 0.0, false, 4, true, true, false, true);
    Food Smoothie("Smoothie", 0.2, false, 4, false, true, false,  true);
    Food Juice("Juice", 0.0, false, 4, false, true, false, true);

int main(){
    //food array
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

    //drinks array
    drinkArr[0] = &hotChocolate;
    drinkArr[1] = &Water;
    drinkArr[2] = &Coffee;
    drinkArr[3] = &Tea;
    drinkArr[4] = &Soda;
    drinkArr[5] = &Smoothie;
    drinkArr[6] = &Juice;
}