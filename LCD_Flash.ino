
    #include <Wire.h> //Library for I2C communication
    #include <LiquidCrystal_I2C.h> //Library for LCD
    //Wiring: SDA pin is connected to A4 and SCL pin to A5.
    //Connect to LCD via I2C, default address 0x27 (A0-A2 not jumpered)
    LiquidCrystal_I2C lcd(0x27,20,4); //Change to (0x27,16,2) for 16x2 LCD.
    void setup()
    {
    lcd.init();
    lcd.backlight();
    }
    void loop()
    {
    lcd.setCursor(0,0); 
    lcd.print("Jesse Hunt"); 
    delay(5000);
    lcd.clear();
    lcd.print("Hello!");
    delay(5000);
    }
