/* (slightly modified) from rover manual */

/* To read the onboard light and temperature sensors, run the code below, then open the serial window at 9600 baud. Ensure the two jumpers are in place*/

int light_value = 0;
int temperature_value = 0;

void setup() { 
  Serial.begin(9600);
}

void loop() {
  light_value = analogRead(A0); 
  Serial.print("Light: "); 
  Serial.print(light_value);
  
  temperature_value = analogRead(A1);
  Serial.print(" Temperature: "); 
  Serial.println(temperature_value); 
  
  delay(500);
}
