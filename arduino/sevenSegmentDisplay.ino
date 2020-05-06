
 
/*Program for matrix 8*8*/
/*
//row
 int r5 = 2;
 int r7 = 3;
 int r8 = 6;
 int r6 = 8;
 int r3 = 9;
 int r1 = 10;
 int r4 = 13;
 int r2 = 15;
//colum
 int c2 = 4;
 int c3 = 5;
 int c5 = 7;
 int c4 = 11;
 int c6 = 12;
 int c1 = 14;
 int c7 = 16;
 int c8 = 17;

void setup(){
    pinMode(r5, OUTPUT);
    pinMode(r7, OUTPUT);
  }
void loop(){
    digitalWrite(r5, HIGH);
    digitalWrite(r7, HIGH);
  }
*/


/*pogram for display 7 elements mini (evry element turn)*/
/*
byte led = 0;
bool delta = 1;
void setup(){
    for(int pin = 2; pin<=9; pin++){
      pinMode(pin, OUTPUT);
      digitalWrite(pin, LOW);
    }
  }
void loop(){
    if( delta > 0 ) led++; else led--;
    if( led < 1 || led > 6 ) delta = !delta;
    for( int i = 0 ; i<= 7 ; i++){
        digitalWrite(i + 2, LOW);
      }
    digitalWrite(led + 2, HIGH);
    delay(500);
  }
*/

/*pogram for display 7 elements mini (1-9)*/

/*bool one[8] = {0, 0, 1, 1, 0, 0, 0, 0};
bool two[8] = {0, 1, 1, 0, 1, 1, 0, 1};
bool three[8] = {0, 1, 1, 1, 1, 0, 0, 1};
bool four[8] = {0, 0, 1, 1, 0, 0, 1, 1};
bool five[8] = {0, 1, 0, 1, 1, 0, 1, 1};
bool six[8] = {0, 0, 1, 1, 1, 1, 0, 1};
bool seven[8] = {0, 1, 1, 1, 0, 0, 0, 0};
bool eight[8] = {0, 1, 1, 1, 1, 1, 1, 1};
bool nine[8] = {0, 1, 1, 1, 1, 0, 1, 1};*/

bool numbers[10][8] = 
{
  {0, 1, 1, 1, 1, 1, 1, 0},/*0*/
  {0, 0, 1, 1, 0, 0, 0, 0},/*1*/
  {0, 1, 1, 0, 1, 1, 0, 1},/*2*/
  {0, 1, 1, 1, 1, 0, 0, 1},/*3*/
  {0, 0, 1, 1, 0, 0, 1, 1},/*4*/
  {0, 1, 0, 1, 1, 0, 1, 1},/*5*/
  {0, 1, 0, 1, 1, 1, 1, 1},/*6*/
  {0, 1, 1, 1, 0, 0, 0, 0},/*7*/
  {0, 1, 1, 1, 1, 1, 1, 1},/*8*/
  {1, 1, 1, 1, 1, 0, 1, 1} /*9*/
};


void setup(){
    for(int pin = 2; pin<=9; pin++){
      pinMode(pin, OUTPUT);
      digitalWrite(pin, LOW);
    }
  }
void loop(){
    for(int digit = 0; digit <= 9; digit++){
        for(int i = 0; i < 8; i++){
          if(numbers[digit][i] == 0) digitalWrite(i+2, LOW); else digitalWrite(i+2, HIGH);
        }
        delay(1000);
      }
  }

/* PROGRAM CODE FOR DISPLAY 7 ELEMENTS MINI WITH MICROSHEM 74HE595N (1-9*/
byte numbers[10] = {
    B01111110, B00110000, B01101101, B01111001,
    B00110011, B01011011, B01011111, B01110000,
    B01111111, B11111011
  };

void setup(){
    for( int pin = 2; pin <= 4; pin++){
        pinMode(pin, OUTPUT);
        digitalWrite(pin, LOW);
      }
  }

void loop(){
    for( int digit = 0; digit <= 9; digit++){
        digitalWrite(2, LOW);
        shiftOut( 3, 4, LSBFIRST, digits[digit]);
        digitalWrite(2, HIGH);
        delay(1000);
      }
  }
 
 
 
