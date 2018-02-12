/******************************************************************************

******************************************************************************/


/*** Includes ***/ /* Place any necessary library tags here */


/*** Defines ***/ /* Place definitions for any repeatedly used values here */
#define NUMBEROFSENSORS 16    // Number of FSRs
#define SENSORSINUSE 3        // Number of sensors currently in use - we can potentially get rid of this when we connect all 16 sensors

/*** Globals ***/
int sensorPins[NUMBEROFSENSORS] = {A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15};  // Array of pin names where sensors are connected
int sensorValues[NUMBEROFSENSORS] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};                      // Array to store values read from sensors


/*** Setup Function ***/
void setup() {
  
  /* Set baud rate */
  Serial.begin(9600);
  
  /* Set pin mode for pins used to output digital values */
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT); 
}


/*** Main Loop ***/
void loop() {
  
  /* Loop through connected sensors */
  int i = 0;
  while (i < SENSORSINUSE)
  {
    /* Read sensor values into array */
    sensorValues[i] = analogRead(sensorPins[i]);
    
    /* Conversion to lbs/N can go here */
    
    /* Print sensor values to serial monitor */
    if (i != 0)
    {
      Serial.print(", ");
    }
    Serial.print(sensorValues[i]);
    
    i++;
  } 
  Serial.print('\n'); 
  delay(1000);
}


