/**********/
/*Includes*/
/**********/

/*********/
/*Globals*/
/*********/
//int sensorPins[16] = {A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15};
int sensorPin0 = A0;    // select the input pin for the potentiometer
int sensorPin1 = A1;
int sensorPin2 = A2;
//int sensorPin3 = A3;

//int sensorValues[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int sensorValue0 = 0;
int sensorValue1 = 0;
int sensorValue2 = 0;
//int sensorValue3 = 0;// variable to store the value coming from the sensor

/****************/
/*Setup Function*/
/****************/
void setup() {
  // start serial port at 9600 bps:
  Serial.begin(9600);
  pinMode(22, OUTPUT); 
  pinMode(23, OUTPUT); 
  pinMode(24, OUTPUT); 
}

/***********/
/*Main Loop*/
/***********/
void loop() {
  // read the value from the sensor:
  sensorValue0 =  analogRead(sensorPin0);
  //Conversion to lbs will go here
  Serial.print(sensorValue0);   // print ADC value of analog reading
  Serial.print(", ");
  //delay(500);

  sensorValue1 = analogRead(sensorPin1); 
  //Conversion to lbs will go here
  Serial.print(sensorValue1);   // print ADC value of analog reading
  Serial.print(", ");
  //delay(500);

  sensorValue2 = analogRead(sensorPin2);  
  //Conversion to lbs will go here 
  Serial.print(sensorValue2);   // print ADC value of analog reading
  Serial.print('\n');
  //delay(500);

/*  sensorValue3 = analogRead(sensorPin3);
  //Conversion to lbs will go here
  Serial.print("Sensor 4 "); 
  Serial.print(sensorValue3);   // print ADC value of analog reading
  Serial.print('\n');  */

   delay(1000);
   
     /*int sensorNumber = 0;
  
  //Read all digital sensor values into an array
  while (sensorNumber < 16)
  {
    sensorValues[sensorNumber] = analogRead(sensorPins[sensorNumber]);
    sensorNumber++;
  }
  
  //Print sensor values to the serial monitor
  while (sensorNumber < 16)
  {
    Serial.print("Sensor "); 
    Serial.print(sensorNumber);
    Serial.print(sensorValue);   // print ADC value of analog reading
    Serial.print('\n');
  }  
  */
}

