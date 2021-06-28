/*
Author: J.A. Coertze

This program enables to run two DC motors via relays in different directions with a timed on and off state.

It was developed for an artwork by Herman De Klerk - https://hermandeklerk.com/

Refenence Instructable - https://www.instructables.com/How-to-hack-an-Electric-Hoist-AC-motor/
*/
 
// Arduino board pins wiring should match numbers specified here:
int clockwisem1 = 5;
int clockwisem2 = 7;
int anticlockwisem1 = 6;
int anticlockwisem2 = 8;

void setup() {  
  Serial.begin(9600);           // initialize serial communication at 9600 bits per second:
  pinMode(clockwisem1, OUTPUT); 
  pinMode(clockwisem2, OUTPUT); 
  pinMode(anticlockwisem1, OUTPUT);
  pinMode(anticlockwisem2, OUTPUT);     
}

// the loop runs over and over, forever:
void loop() {

  for (int x = 0; x < 100; x++)
  {
    Serial.println("Cycle begin");

    //counter clockwise
    Serial.println("Turning CCW");
    digitalWrite(clockwisem1, LOW);      // turn clockwise direction off
    digitalWrite(clockwisem2, LOW); 
    digitalWrite(anticlockwisem1, HIGH); // turn anticlockwise direction on
    digitalWrite(anticlockwisem2, HIGH);
    delay(32000);              		  // wait for a number of millisecond

    Serial.println("Turning off");
    digitalWrite(anticlockwisem1, LOW);  // turn anticlockwise direction off
    digitalWrite(anticlockwisem2, LOW);
    digitalWrite(clockwisem1, LOW);      // turn clockwise direction off
    digitalWrite(clockwisem2, LOW); 
    delay(48000);                     // wait for a number of milliseconds

    //clockwise
    Serial.println("Turning Clockwise");
    digitalWrite(anticlockwisem1, LOW);  // turn anticlockwise direction off
    digitalWrite(anticlockwisem2, LOW); 
    digitalWrite(clockwisem1, HIGH);     // turn clockwise direction on
    digitalWrite(clockwisem2, HIGH); 
    delay(32000);    

    Serial.println("Turning off");
    digitalWrite(anticlockwisem1, LOW);  // turn anticlockwise direction off
    digitalWrite(anticlockwisem2, LOW);
    digitalWrite(clockwisem1, LOW);      // turn clockwise direction off
    digitalWrite(clockwisem2, LOW); 
    delay(48000);
    
    //clockwise
    Serial.println("Turning Clockwise");
    digitalWrite(anticlockwisem1, LOW);  // turn anticlockwise direction off
    digitalWrite(anticlockwisem2, LOW); 
    digitalWrite(clockwisem1, HIGH);     // turn clockwise direction on
    digitalWrite(clockwisem2, HIGH); 
    delay(32000);    

    Serial.println("Turning off");
    digitalWrite(anticlockwisem1, LOW);  // turn anticlockwise direction off
    digitalWrite(anticlockwisem2, LOW);
    digitalWrite(clockwisem1, LOW);      // turn clockwise direction off
    digitalWrite(clockwisem2, LOW); 
    delay(48000);
    
    //counter clockwise
    Serial.println("Turning CCW");
    digitalWrite(clockwisem1, LOW);      // turn clockwise direction off
    digitalWrite(clockwisem2, LOW); 
    digitalWrite(anticlockwisem1, HIGH); // turn anticlockwise direction on
    digitalWrite(anticlockwisem2, HIGH);
    delay(32000);    

    Serial.println("Turning off");
    digitalWrite(anticlockwisem1, LOW);  // turn anticlockwise direction off
    digitalWrite(anticlockwisem2, LOW);
    digitalWrite(clockwisem1, LOW);      // turn clockwise direction off
    digitalWrite(clockwisem2, LOW); 
    delay(48000);
  }

  Serial.println("Turning off");
  digitalWrite(anticlockwisem1, LOW);  // turn anticlockwise direction off
  digitalWrite(anticlockwisem2, LOW);
  digitalWrite(clockwisem1, LOW);      // turn clockwise direction off
  digitalWrite(clockwisem2, LOW); 
  delay(60000);  

 	 	  
}