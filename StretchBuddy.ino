int pressureAnalogPin = 0; // where FSR is connected
int pressureReading; // to store pressure reading

int noPressure = 5; // Max No pressure Value
int Pressure = 200; // Max pressure Value

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(8, OUTPUT); // configuring pin 8 as output

}

void loop() {
  // put your main code here, to run repeatedly:
 pressureReading = analogRead(pressureAnalogPin); // reading the value from pin 0 and storing it in a variable
  
  if (pressureReading > noPressure && pressureReading < Pressure ) 
  {
    delay(40*60*1000UL); // Wait for 40 mins 
    Serial.print("GO Stretch!");
    digitalWrite(8,HIGH); // Turn Buzzer On
    delay(5000); // buzzer on for 5 secs
    digitalWrite(8,LOW); // Turn Buzzer Off
  } 
  else
  {
    digitalWrite(8,LOW); // Keep Buzzer Off
  }
  delay(1000);
}
