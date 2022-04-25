// This #include statement was automatically added by the Particle IDE.
#include <LiquidCrystal_I2C_Spark.h>

int testButton = D2;
int yesButton = D3;
int noButton = D4;
int aButton = D5;
int bButton = D6;
int cButton = D7;

int testBPrev = LOW;
int yesBPrev = LOW;
int noBPrev = LOW;
int aBPrev = LOW;
int bBPrev = LOW;
int cBPrev = LOW;

int gLED = A4;
int rLED = A3;

LiquidCrystal_I2C lcd(0x27,20,4);

void setup() {
    pinMode(testButton, INPUT_PULLDOWN);
    pinMode(yesButton, INPUT_PULLDOWN);
    pinMode(noButton, INPUT_PULLDOWN);
    pinMode(aButton, INPUT_PULLDOWN);
    pinMode(bButton, INPUT_PULLDOWN);
    pinMode(cButton, INPUT_PULLDOWN);
    
    pinMode(gLED, OUTPUT);
    pinMode(rLED, OUTPUT);

    
    lcd.init();                      // initialize the lcd 
    lcd.init();
    // Print a message to the LCD.
    lcd.backlight();
    lcd.setCursor(1,0);
    lcd.print("Matt the buttons");
    lcd.setCursor(1,1);
    lcd.print("and the LCD");
    lcd.setCursor(1,2);
    lcd.print("can be controlled");
    lcd.setCursor(1,3);
    lcd.print("with the same boi");
    
    Serial.begin(9600);
}
    
    
void loop() {
    //START BUTTON CODE
    
//Code for the test Button
    int testBCurr = digitalRead(testButton);
    
    if(testBCurr == HIGH && testBPrev == LOW) {
        Serial.println("Test Button press detected.");
    }

    testBPrev = testBCurr;
    
//Code for the yes Button
    int yesBCurr = digitalRead(yesButton);
    
    if(yesBCurr == HIGH && yesBPrev == LOW) {
        Serial.println("Yes Button press detected.");
    }
    
    yesBPrev = yesBCurr;

//Code for no Button

    int noBCurr = digitalRead(noButton);
    
    if(noBCurr == HIGH && noBPrev == LOW) {
        Serial.println("No Button press detected.");
    }
    
    noBPrev = noBCurr;

//Code for a Button

    int aBCurr = digitalRead(aButton);
    
    if(aBCurr == HIGH && aBPrev == LOW) {
        Serial.println("A Button press detected.");
    }
    
    aBPrev = aBCurr;
    
//Code for b Button

    int bBCurr = digitalRead(bButton);
    
    if(bBCurr == HIGH && bBPrev == LOW) {
        Serial.println("B Button press detected.");
    }
    
    bBPrev = bBCurr;
    
//Code for c Button

    int cBCurr = digitalRead(cButton);
    
    if(cBCurr == HIGH && cBPrev == LOW) {
        Serial.println("C Button press detected.");
    }
    
    cBPrev = cBCurr;  
    
    
    //END BUTTON CODE
    
    lcd.setCursor(5,2);
    
    lcd.setCursor(1,3);

}
  