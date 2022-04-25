#include "LiquidCrystal_I2C_Spark.h"
#include <string>

using namespace std;

//particle pin numbers
int buttonAPIN = D5;
int buttonBPIN = D4;
int buttonCPIN = D3;
int buttonTestPIN = D2;

LiquidCrystal_I2C lcd(0x27,20,4);

//booleans and ints to represent what the user wants after the questions
bool foodOrDrink = false; //false for food, true for dink
bool tempDesired = false; //false for cold, true for hot
bool desiredCaffeine = false; // false for no, true for yes
bool desiredSweet = false; //false for no, true for yes
bool desiredSpice = false; //false for no, true for yes
bool desiredVegetarian = false; //false for no, true for yes
int currTime; //current hour in UTC-6 (centeral standard time)
int mealTime; //0=breakfast, 1=lunch, 2=dinner, 4=snack


int questionCountFood = -1;
int questionCountDrink = -1;
int currButtonA = LOW;
int currButtonB = LOW;
int currButtonTest = LOW;
int prevButtonA = LOW;
int prevButtonB = LOW;
int prevButtonTest = LOW;

bool hasBeenDisplayed = false;

String reccomendedItemURL = "noURLYet";

void setup(){

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
}

void loop(){
    currButtonA = digitalRead(buttonAPIN);
    currButtonB = digitalRead(buttonBPIN);
    currButtonTest = digitalRead(buttonTestPIN);
    
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

    prevButtonA = currButtonA;
    prevButtonB = currButtonB;
    prevButtonTest = currButtonTest;
}