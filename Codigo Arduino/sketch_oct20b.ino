#include <MIDI.h>
#include <CapacitiveSensor.h>

// Pin for the LED
int LEDPin = 13;
// Pin to connect to your drawing
int capSensePin = 3;
int capSensePinB = 2;
int capSensePinC = 4;
int capSensePinD = 5;
int capSensePinE = 6;
int capSensePinF = 7;
int capSensePinG = 8;
int capSensePinH = 9;
int capSensePinI = 10;
int capSensePinJ = 11;

// This is how high the sensor needs to read in order
//  to trigger a touch.  You'll find this number
//  by trial and error, or you could take readings at
//  the start of the program to dynamically calculate this.
int touchedCutoff = 70;
boolean playing144 = false;
boolean playing145 = false;
boolean playing146 = false;
boolean playing147 = false;
boolean playing148 = false;
boolean playing149 = false;
boolean playing150 = false;
boolean playing151 = false;
boolean playing152 = false;
boolean playing153 = false;

int tiempo_delay = 150;
void setup() {
  Serial.begin(9600);
  // Set up the LED
  pinMode(LEDPin, OUTPUT);
  digitalWrite(LEDPin, LOW);
}

void loop() {
  // PRIMER IF (ORIGINAL)
  int nuevo_valor= 0;
  if (readCapacitivePinB(capSensePin) > touchedCutoff && !playing144) {
    playing144 = true;
    digitalWrite(LEDPin, HIGH);
      Serial.write(144);
      Serial.write(68);
      Serial.write(100); //manda la nota
    }
  if(touchedCutoff > readCapacitivePinB(capSensePin) && playing144){
    playing144 = false;
    digitalWrite(LEDPin, LOW);
      Serial.write(144);
      Serial.write(68);
      Serial.write(0); //manda la nota
      delay(tiempo_delay);

         }

//SEGUNDO IF (B)
      if (readCapacitivePin(capSensePinB) > touchedCutoff && !playing145) {
    playing145 = true;
    digitalWrite(LEDPin, HIGH);
    Serial.write(147);
    //Serial.write(3);
      Serial.write(60);
     // Serial.write(68);
      Serial.write(127); //manda la nota
    }
  if(touchedCutoff > readCapacitivePin(capSensePinB) && playing145){
    playing145 = false;
    digitalWrite(LEDPin, LOW);
      Serial.write(147);
     
      Serial.write(60);
     
      Serial.write(0); //manda la nota
        delay(tiempo_delay);
    }
//TERCER IF (C)
      if (readCapacitivePin(capSensePinC) > touchedCutoff && !playing146) {
    playing146 = true;
    digitalWrite(LEDPin, HIGH);
    Serial.write(148);
    //Serial.write(3);
      Serial.write(60);
     // Serial.write(68);
      Serial.write(127); //manda la nota
    }
  if(touchedCutoff > readCapacitivePin(capSensePinC) && playing146){
    playing146 = false;
    digitalWrite(LEDPin, LOW);
      Serial.write(148);
      //Serial.write(3);
      Serial.write(60);
     
      Serial.write(0); //manda la nota
        delay(tiempo_delay);
    }

//CUARTO IF (D)
      if (readCapacitivePin(capSensePinD) > touchedCutoff && !playing147) {
    playing147 = true;
    digitalWrite(LEDPin, HIGH);
    Serial.write(149);
    //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(127); //manda la nota
    }
  if(touchedCutoff > readCapacitivePinD(capSensePinD) && playing147){
    playing147 = false;
    digitalWrite(LEDPin, LOW);
      Serial.write(149);
      //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(0); //manda la nota
        delay(tiempo_delay);  
    }

//QUINTO IF (E)
      if (readCapacitivePin(capSensePinE) > touchedCutoff && !playing148) {
    playing148 = true;
    digitalWrite(LEDPin, HIGH);
    Serial.write(150);
    //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(127); //manda la nota
    }
  if(touchedCutoff > readCapacitivePinE(capSensePinE) && playing148){
    playing148 = false;
    digitalWrite(LEDPin, LOW);
      Serial.write(150);
      //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(0); //manda la nota
        delay(tiempo_delay);
    }

    
 //SEXTO IF (F)
      if (readCapacitivePin(capSensePinF) > touchedCutoff && !playing149) {
    playing149 = true;
    digitalWrite(LEDPin, HIGH);
    Serial.write(151);
    //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(127); //manda la nota
    }
  if(touchedCutoff > readCapacitivePinF(capSensePinF) && playing149){
    playing149 = false;
    digitalWrite(LEDPin, LOW);
      Serial.write(151);
      //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(0); //manda la nota
        delay(tiempo_delay);
    }

 //SEPTIMO IF (F)
      if (readCapacitivePin(capSensePinG) > touchedCutoff && !playing150) {
    playing150 = true;
    digitalWrite(LEDPin, HIGH);
    Serial.write(152);
    //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(127); //manda la nota
    }
  if(touchedCutoff > readCapacitivePinG(capSensePinG) && playing150){
    playing150 = false;
    digitalWrite(LEDPin, LOW);
      Serial.write(152);
      //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(0); //manda la nota
        delay(tiempo_delay);
    }
//OCTAVO IF (H)
      if (readCapacitivePin(capSensePinH) > touchedCutoff && !playing151) {
    playing151 = true;
    digitalWrite(LEDPin, HIGH);
    Serial.write(153);
    //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(127); //manda la nota
    }
  if(touchedCutoff > readCapacitivePinH(capSensePinH) && playing151){
    playing151 = false;
    digitalWrite(LEDPin, LOW);
      Serial.write(153);
      //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(0); //manda la nota
      delay(tiempo_delay);
    }
//NOVENO IF (I)
      if (readCapacitivePin(capSensePinI) > touchedCutoff && !playing152) {
    playing152 = true;
    digitalWrite(LEDPin, HIGH);
    Serial.write(154);
    //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(127); //manda la nota
    }
  if(touchedCutoff > readCapacitivePinI(capSensePinI) && playing152){
    playing152 = false;
    digitalWrite(LEDPin, LOW);
      Serial.write(154);
      //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(0); //manda la nota
      delay(tiempo_delay);
    }
//DECIMO IF (J)
      if (readCapacitivePin(capSensePinJ) > touchedCutoff && !playing153) {
    playing153 = true;
    digitalWrite(LEDPin, HIGH);
    Serial.write(155);
    //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(127); //manda la nota
    }
  if(touchedCutoff > readCapacitivePinJ(capSensePinJ) && playing153){
    playing153 = false;
    digitalWrite(LEDPin, LOW);
      Serial.write(155);
      //Serial.write(3);
      Serial.write(50);
     // Serial.write(68);
      Serial.write(0); //manda la nota
      delay(tiempo_delay);
    }
  
}

//PRIMERAS DEFINICIONES

uint8_t readCapacitivePinB(int pinToMeasureB) {

volatile uint8_t* portB;
  volatile uint8_t* ddrB;
  volatile uint8_t* pinB;
byte bitmask;

  if ((pinToMeasureB >= 0) && (pinToMeasureB <= 7)) {
   //PORTD, DDRD y &PIND quedan igual
    portB = &PORTD;
    ddrB = &DDRD;
    bitmask = 1 << pinToMeasureB;
    pinB = &PIND;
  }
  if ((pinToMeasureB > 7) && (pinToMeasureB <= 13)) {
      //PORTB, DDRB y &PINB quedan igual
    portB = &PORTB;
    ddrB = &DDRB;
    bitmask = 1 << (pinToMeasureB - 8);
    pinB = &PINB;
  }
  if ((pinToMeasureB > 13) && (pinToMeasureB <= 19)) {
      //PORTC, DDRC y &PINC quedan igual
    portB = &PORTC;
    ddrB = &DDRC;
    bitmask = 1 << (pinToMeasureB - 13);
    pinB = &PINC;
  }

  *portB &= ~(bitmask);
  *ddrB  |= bitmask;
  delay(1);
  // Make the pin an input WITHOUT the internal pull-up on
  *ddrB &= ~(bitmask);
  // Now see how long the pin to get pulled up
  int cycles = 16000;
  for (int i = 0; i < cycles; i++) {
    if (*pinB & bitmask) {
      cycles = i;
      break;
    }
  }
  // Discharge the pin again by setting it low and output
  //  It's important to leave the pins low if you want to
  //  be able to touch more than 1 sensor at a time - if
  //  the sensor is left pulled high, when you touch
  //  two sensors, your body will transfer the charge between
  //  sensors.
  *portB &= ~(bitmask);
  *ddrB  |= bitmask;

  return cycles;
}





  //SEGUNDAS DEFINICIONES (originales)




uint8_t readCapacitivePin(int pinToMeasure) {
  // This is how you declare a variable which
  //  will hold the PORT, PIN, and DDR registers
  //  on an AVR
  volatile uint8_t* port;
  volatile uint8_t* ddr;
  volatile uint8_t* pin;
  // Here we translate the input pin number from
  //  Arduino pin number to the AVR PORT, PIN, DDR,
  //  and which bit of those registers we care about.
  byte bitmask;
  if ((pinToMeasure >= 0) && (pinToMeasure <= 7)) {
      //PORTD, DDRD y &PIND quedan igual
    port = &PORTD;
    ddr = &DDRD;
    bitmask = 1 << pinToMeasure;
    pin = &PIND;
  }
  if ((pinToMeasure > 7) && (pinToMeasure <= 13)) {
    //PORTB, DDRB y &PINB quedan igual
    port = &PORTB;
    ddr = &DDRB;
    bitmask = 1 << (pinToMeasure - 8);
    pin = &PINB;
  }
  if ((pinToMeasure > 13) && (pinToMeasure <= 19)) {
     //PORTC, DDRC y &PINC quedan igual
    port = &PORTC;
    ddr = &DDRC;
    bitmask = 1 << (pinToMeasure - 13);
    pin = &PINC;
  }
  // Discharge the pin first by setting it low and output
  *port &= ~(bitmask);
  *ddr  |= bitmask;
  delay(1);
  // Make the pin an input WITHOUT the internal pull-up on
  *ddr &= ~(bitmask);
  // Now see how long the pin to get pulled up
  int cycles = 16000;
  for (int i = 0; i < cycles; i++) {
    if (*pin & bitmask) {
      cycles = i;
      break;
    }
  }
  // Discharge the pin again by setting it low and output
  //  It's important to leave the pins low if you want to
  //  be able to touch more than 1 sensor at a time - if
  //  the sensor is left pulled high, when you touch
  //  two sensors, your body will transfer the charge between
  //  sensors.
  *port &= ~(bitmask);
  *ddr  |= bitmask;

  return cycles;
}


//TERCERAs DEFINICIONES (C)

uint8_t readCapacitivePinC(int pinToMeasureC) {
  //volatile uint8_t* port;
  //volatile uint8_t* ddr;
  //volatile uint8_t* pin;
  

volatile uint8_t* portC;
  volatile uint8_t* ddrC;
  volatile uint8_t* pinC;
byte bitmask;

  if ((pinToMeasureC >= 0) && (pinToMeasureC <= 7)) {
     //PORTD, DDRD y &PIND quedan igual
    portC = &PORTD;
    ddrC = &DDRD;
    bitmask = 1 << pinToMeasureC;
    pinC = &PIND;
  }
  if ((pinToMeasureC > 7) && (pinToMeasureC <= 13)) {
     //PORTB, DDRB y &PINB quedan igual
    portC = &PORTB;
    ddrC = &DDRB;
    bitmask = 1 << (pinToMeasureC - 8);
    pinC = &PINB;
  }
  if ((pinToMeasureC > 13) && (pinToMeasureC <= 19)) {
     //PORTC, DDRC y &PINC quedan igual
    portC = &PORTC;
    ddrC = &DDRC;
    bitmask = 1 << (pinToMeasureC - 13);
    pinC = &PINC;
  }

  *portC &= ~(bitmask);
  *ddrC  |= bitmask;
  delay(1);
  // Make the pin an input WITHOUT the internal pull-up on
  *ddrC &= ~(bitmask);
  // Now see how long the pin to get pulled up
  int cycles = 16000;
  for (int i = 0; i < cycles; i++) {
    if (*pinC & bitmask) {
      cycles = i;
      break;
    }
  }
  // Discharge the pin again by setting it low and output
  //  It's important to leave the pins low if you want to
  //  be able to touch more than 1 sensor at a time - if
  //  the sensor is left pulled high, when you touch
  //  two sensors, your body will transfer the charge between
  //  sensors.
  *portC &= ~(bitmask);
  *ddrC  |= bitmask;

  return cycles;
}

//CUARTAS DEFINICIONES (D)



uint8_t readCapacitivePinD(int pinToMeasureD) {

volatile uint8_t* portD;
  volatile uint8_t* ddrD;
  volatile uint8_t* pinD;
byte bitmask;

  if ((pinToMeasureD >= 0) && (pinToMeasureD <= 7)) {
     //PORTD, DDRD y &PIND quedan igual
    portD = &PORTD;
    ddrD = &DDRD;
    bitmask = 1 << pinToMeasureD;
    pinD = &PIND;
  }
  if ((pinToMeasureD > 7) && (pinToMeasureD <= 13)) {
     //PORTB, DDRB y &PINB quedan igual
    portD = &PORTB;
    ddrD = &DDRB;
    bitmask = 1 << (pinToMeasureD - 8);
    pinD = &PINB;
  }
  if ((pinToMeasureD > 13) && (pinToMeasureD <= 19)) {
     //PORTC, DDRC y &PINC quedan igual
    portD = &PORTC;
    ddrD = &DDRC;
    bitmask = 1 << (pinToMeasureD - 13);
    pinD = &PINC;
  }

  *portD &= ~(bitmask);
  *ddrD  |= bitmask;
  delay(1);
  // Make the pin an input WITHOUT the internal pull-up on
  *ddrD &= ~(bitmask);
  // Now see how long the pin to get pulled up
  int cycles = 16000;
  for (int i = 0; i < cycles; i++) {
    if (*pinD & bitmask) {
      cycles = i;
      break;
    }
  }
  // Discharge the pin again by setting it low and output
  //  It's important to leave the pins low if you want to
  //  be able to touch more than 1 sensor at a time - if
  //  the sensor is left pulled high, when you touch
  //  two sensors, your body will transfer the charge between
  //  sensors.
  *portD &= ~(bitmask);
  *ddrD  |= bitmask;

  return cycles;
}

//QUINTAS DEFINICIONES (E)



uint8_t readCapacitivePinE(int pinToMeasureE) {

volatile uint8_t* portE;
  volatile uint8_t* ddrE;
  volatile uint8_t* pinE;
byte bitmask;

  if ((pinToMeasureE >= 0) && (pinToMeasureE <= 7)) {
     //PORTD, DDRD y &PIND quedan igual
    portE = &PORTD;
    ddrE = &DDRD;
    bitmask = 1 << pinToMeasureE;
    pinE = &PIND;
  }
  if ((pinToMeasureE > 7) && (pinToMeasureE <= 13)) {
     //PORTB, DDRB y &PINB quedan igual
    portE = &PORTB;
    ddrE = &DDRB;
    bitmask = 1 << (pinToMeasureE - 8);
    pinE = &PINB;
  }
  if ((pinToMeasureE > 13) && (pinToMeasureE <= 19)) {
     //PORTC, DDRC y &PINC quedan igual
    portE = &PORTC;
    ddrE = &DDRC;
    bitmask = 1 << (pinToMeasureE - 13);
    pinE = &PINC;
  }

  *portE &= ~(bitmask);
  *ddrE  |= bitmask;
  delay(1);
  // Make the pin an input WITHOUT the internal pull-up on
  *ddrE &= ~(bitmask);
  // Now see how long the pin to get pulled up
  int cycles = 16000;
  for (int i = 0; i < cycles; i++) {
    if (*pinE & bitmask) {
      cycles = i;
      break;
    }
  }
  // Discharge the pin again by setting it low and output
  //  It's important to leave the pins low if you want to
  //  be able to touch more than 1 sensor at a time - if
  //  the sensor is left pulled high, when you touch
  //  two sensors, your body will transfer the charge between
  //  sensors.
  *portE &= ~(bitmask);
  *ddrE  |= bitmask;

  return cycles;
}



//SEXTAS DEFINICIONES (F)



uint8_t readCapacitivePinF(int pinToMeasureF) {

volatile uint8_t* portF;
  volatile uint8_t* ddrF;
  volatile uint8_t* pinF;
byte bitmask;

  if ((pinToMeasureF >= 0) && (pinToMeasureF <= 7)) {
     //PORTD, DDRD y &PIND quedan igual
    portF = &PORTD;
    ddrF = &DDRD;
    bitmask = 1 << pinToMeasureF;
    pinF = &PIND;
  }
  if ((pinToMeasureF > 7) && (pinToMeasureF <= 13)) {
     //PORTB, DDRB y &PINB quedan igual
    portF = &PORTB;
    ddrF = &DDRB;
    bitmask = 1 << (pinToMeasureF - 8);
    pinF = &PINB;
  }
  if ((pinToMeasureF > 13) && (pinToMeasureF <= 19)) {
     //PORTC, DDRC y &PINC quedan igual
    portF = &PORTC;
    ddrF = &DDRC;
    bitmask = 1 << (pinToMeasureF - 13);
    pinF = &PINC;
  }

  *portF &= ~(bitmask);
  *ddrF  |= bitmask;
  delay(1);
  // Make the pin an input WITHOUT the internal pull-up on
  *ddrF &= ~(bitmask);
  // Now see how long the pin to get pulled up
  int cycles = 16000;
  for (int i = 0; i < cycles; i++) {
    if (*pinF & bitmask) {
      cycles = i;
      break;
    }
  }
  // Discharge the pin again by setting it low and output
  //  It's important to leave the pins low if you want to
  //  be able to touch more than 1 sensor at a time - if
  //  the sensor is left pulled high, when you touch
  //  two sensors, your body will transfer the charge between
  //  sensors.
  *portF &= ~(bitmask);
  *ddrF  |= bitmask;

  return cycles;
}


//SEPTIMAS DEFINICIONES (G)



uint8_t readCapacitivePinG(int pinToMeasureG) {

volatile uint8_t* portG;
  volatile uint8_t* ddrG;
  volatile uint8_t* pinG;
byte bitmask;

  if ((pinToMeasureG >= 0) && (pinToMeasureG <= 7)) {
     //PORTD, DDRD y &PIND quedan igual
    portG = &PORTD;
    ddrG = &DDRD;
    bitmask = 1 << pinToMeasureG;
    pinG = &PIND;
  }
  if ((pinToMeasureG > 7) && (pinToMeasureG <= 13)) {
     //PORTB, DDRB y &PINB quedan igual
    portG = &PORTB;
    ddrG = &DDRB;
    bitmask = 1 << (pinToMeasureG - 8);
    pinG = &PINB;
  }
  if ((pinToMeasureG > 13) && (pinToMeasureG <= 19)) {
     //PORTC, DDRC y &PINC quedan igual
    portG = &PORTC;
    ddrG = &DDRC;
    bitmask = 1 << (pinToMeasureG - 13);
    pinG = &PINC;
  }

  *portG &= ~(bitmask);
  *ddrG  |= bitmask;
  delay(1);
  // Make the pin an input WITHOUT the internal pull-up on
  *ddrG &= ~(bitmask);
  // Now see how long the pin to get pulled up
  int cycles = 16000;
  for (int i = 0; i < cycles; i++) {
    if (*pinG & bitmask) {
      cycles = i;
      break;
    }
  }
  // Discharge the pin again by setting it low and output
  //  It's important to leave the pins low if you want to
  //  be able to touch more than 1 sensor at a time - if
  //  the sensor is left pulled high, when you touch
  //  two sensors, your body will transfer the charge between
  //  sensors.
  *portG &= ~(bitmask);
  *ddrG  |= bitmask;

  return cycles;
}


//OCTAVAS DEFINICIONES (H)



uint8_t readCapacitivePinH(int pinToMeasureH) {

volatile uint8_t* portH;
  volatile uint8_t* ddrH;
  volatile uint8_t* pinH;
byte bitmask;

  if ((pinToMeasureH >= 0) && (pinToMeasureH <= 7)) {
     //PORTD, DDRD y &PIND quedan igual
    portH = &PORTD;
    ddrH = &DDRD;
    bitmask = 1 << pinToMeasureH;
    pinH = &PIND;
  }
  if ((pinToMeasureH > 7) && (pinToMeasureH <= 13)) {
     //PORTB, DDRB y &PINB quedan igual
    portH = &PORTB;
    ddrH = &DDRB;
    bitmask = 1 << (pinToMeasureH - 8);
    pinH = &PINB;
  }
  if ((pinToMeasureH > 13) && (pinToMeasureH <= 19)) {
     //PORTC, DDRC y &PINC quedan igual
    portH = &PORTC;
    ddrH = &DDRC;
    bitmask = 1 << (pinToMeasureH - 13);
    pinH = &PINC;
  }

  *portH &= ~(bitmask);
  *ddrH  |= bitmask;
  delay(1);
  // Make the pin an input WITHOUT the internal pull-up on
  *ddrH &= ~(bitmask);
  // Now see how long the pin to get pulled up
  int cycles = 16000;
  for (int i = 0; i < cycles; i++) {
    if (*pinH & bitmask) {
      cycles = i;
      break;
    }
  }
  // Discharge the pin again by setting it low and output
  //  It's important to leave the pins low if you want to
  //  be able to touch more than 1 sensor at a time - if
  //  the sensor is left pulled high, when you touch
  //  two sensors, your body will transfer the charge between
  //  sensors.
  *portH &= ~(bitmask);
  *ddrH  |= bitmask;

  return cycles;
}



//NOVENAS DEFINICIONES (I)



uint8_t readCapacitivePinI(int pinToMeasureI) {

volatile uint8_t* portI;
  volatile uint8_t* ddrI;
  volatile uint8_t* pinI;
byte bitmask;

  if ((pinToMeasureI >= 0) && (pinToMeasureI <= 7)) {
     //PORTD, DDRD y &PIND quedan igual
    portI = &PORTD;
    ddrI = &DDRD;
    bitmask = 1 << pinToMeasureI;
    pinI = &PIND;
  }
  if ((pinToMeasureI > 7) && (pinToMeasureI <= 13)) {
     //PORTB, DDRB y &PINB quedan igual
    portI = &PORTB;
    ddrI = &DDRB;
    bitmask = 1 << (pinToMeasureI - 8);
    pinI = &PINB;
  }
  if ((pinToMeasureI > 13) && (pinToMeasureI <= 19)) {
     //PORTC, DDRC y &PINC quedan igual
    portI = &PORTC;
    ddrI = &DDRC;
    bitmask = 1 << (pinToMeasureI - 13);
    pinI = &PINC;
  }

  *portI &= ~(bitmask);
  *ddrI  |= bitmask;
  delay(1);
  // Make the pin an input WITHOUT the internal pull-up on
  *ddrI &= ~(bitmask);
  // Now see how long the pin to get pulled up
  int cycles = 16000;
  for (int i = 0; i < cycles; i++) {
    if (*pinI & bitmask) {
      cycles = i;
      break;
    }
  }
  // Discharge the pin again by setting it low and output
  //  It's important to leave the pins low if you want to
  //  be able to touch more than 1 sensor at a time - if
  //  the sensor is left pulled high, when you touch
  //  two sensors, your body will transfer the charge between
  //  sensors.
  *portI &= ~(bitmask);
  *ddrI  |= bitmask;

  return cycles;
}


//DECIMAS DEFINICIONES (J)



uint8_t readCapacitivePinJ(int pinToMeasureJ) {

volatile uint8_t* portJ;
  volatile uint8_t* ddrJ;
  volatile uint8_t* pinJ;
byte bitmask;

  if ((pinToMeasureJ >= 0) && (pinToMeasureJ <= 7)) {
     //PORTD, DDRD y &PIND quedan igual
    portJ = &PORTD;
    ddrJ = &DDRD;
    bitmask = 1 << pinToMeasureJ;
    pinJ = &PIND;
  }
  if ((pinToMeasureJ > 7) && (pinToMeasureJ <= 13)) {
     //PORTB, DDRB y &PINB quedan igual
    portJ = &PORTB;
    ddrJ = &DDRB;
    bitmask = 1 << (pinToMeasureJ - 8);
    pinJ = &PINB;
  }
  if ((pinToMeasureJ > 13) && (pinToMeasureJ <= 19)) {
     //PORTC, DDRC y &PINC quedan igual
    portJ = &PORTC;
    ddrJ = &DDRC;
    bitmask = 1 << (pinToMeasureJ - 13);
    pinJ = &PINC;
  }

  *portJ &= ~(bitmask);
  *ddrJ  |= bitmask;
  delay(1);
  // Make the pin an input WITHOUT the internal pull-up on
  *ddrJ &= ~(bitmask);
  // Now see how long the pin to get pulled up
  int cycles = 16000;
  for (int i = 0; i < cycles; i++) {
    if (*pinJ & bitmask) {
      cycles = i;
      break;
    }
  }
  // Discharge the pin again by setting it low and output
  //  It's important to leave the pins low if you want to
  //  be able to touch more than 1 sensor at a time - if
  //  the sensor is left pulled high, when you touch
  //  two sensors, your body will transfer the charge between
  //  sensors.
  *portJ &= ~(bitmask);
  *ddrJ  |= bitmask;

  return cycles;
}
