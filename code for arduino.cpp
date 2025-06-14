#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

const int trigPin = 9;
const int echoPin = 10;
const int buzzerPin = 6;

const int redLed = 8;
const int yellowLed = 7;
const int greenLed = 13;

long duration;
int distance;

// For red LED blinking
unsigned long previousMillis = 0;
const long interval = 500;
bool redLedState = LOW;

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  lcd_1.begin(16, 2);
  lcd_1.print("System Ready");
  delay(1000);
  lcd_1.clear();
}

void loop() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  
  lcd_1.setCursor(0, 0);
  lcd_1.print("Dist:      cm"); 
  lcd_1.setCursor(6, 0);
  if (distance < 100) lcd_1.print("  ");  
  if (distance < 10) lcd_1.print(" ");  
  lcd_1.setCursor(6, 0);
  lcd_1.print(distance);

  
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);

  unsigned long currentMillis = millis();

  lcd_1.setCursor(0, 1);
  if (distance < 10) {
    lcd_1.print("Very Close!    ");  
    tone(buzzerPin, 1000);

    
    if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis;
      redLedState = !redLedState;
      digitalWrite(redLed, redLedState);
    }
  } 
  else {
    digitalWrite(redLed, LOW); 

    if (distance >= 10 && distance < 20) {
      lcd_1.print("Getting Closer ");
      tone(buzzerPin, 500);
      digitalWrite(yellowLed, HIGH);
    } 
    else {
      lcd_1.print("All Clear      "); 
      noTone(buzzerPin);
      digitalWrite(greenLed, HIGH);
    }
  }

  delay(50);
}
