#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
 // set up the LCD's number of columns and rows:
 lcd.begin(16, 2);
 // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
  lcd.setCursor(13, 0); 
  lcd.print("OK");
  lcd.setCursor(5, 1);
  for (int thisChar = 0; thisChar< 10; thisChar++) 
  {
    lcd.print(thisChar);
    delay(500);
 }
}
