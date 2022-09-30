/*
const int led1=34;
const int led2=35;
const int led3=32;
const int led4=33;
const int led5=25;
const int led6=26;
const int led7=27;
const int led8=14;
const int led9=12;
const int led10=13;
*/

int vcc = 255;
int gnd = 0;
int spee=5;

int LED[]={13,12,11,10,9,8,7,6,5,4};
void setup() {
  // put your setup code here, to run once:
    
    pinMode(LED[0],OUTPUT);
    pinMode(LED[1],OUTPUT);
    pinMode(LED[2],OUTPUT);
    pinMode(LED[3],OUTPUT);
    pinMode(LED[4],OUTPUT);
    pinMode(LED[5],OUTPUT);
    pinMode(LED[6],OUTPUT);
    pinMode(LED[7],OUTPUT);
    pinMode(LED[8],OUTPUT);
    pinMode(LED[9],OUTPUT);

/*
LED[0]=pinMode(34,OUTPUT);
    LED[1]=pinMode(35,OUTPUT);
    LED[2]=pinMode(32,OUTPUT);
    LED[3]=pinMode(33,OUTPUT);
    LED[4]=pinMode(25,OUTPUT);
    LED[5]=pinMode(26,OUTPUT);
    LED[6]=pinMode(27,OUTPUT);
    LED[7]=pinMode(14,OUTPUT);
    LED[8]=pinMode(12,OUTPUT);
    LED[9]=pinMode(13,OUTPUT);
*/
}

void loop() {
/*  
digitalWrite(LED[0],HIGH);
delay(100);
  */
  // put your main code here, to run repeatedly:
  for(int i =0; i< 10;i++){
    //LED[i]=HIGH;
   digitalWrite(LED[i],HIGH);
    delay(spee);
  }

  for(int i=9;i>=0;i--){
    //LED[i]=LOW;
    digitalWrite(LED[i],LOW);
    delay(spee);
  }
   digitalWrite(LED[0], LOW);   // set common ground for row 1 (pin 13)  
/* 
  for (int i=0; i < 8; i++)
  {
   if(i=4){                               //Analog pin 15 is controlled by analogWrite function
      analogWrite(LED[i], vcc);
      delay(100);
      analogWrite(LED[i], gnd);  
   }
      
    else{                         //light up the rest of the leds
        digitalWrite(LED[i], HIGH);    // set the vcc to turn on 1,i 
        delay(100);          // wait for a second
        digitalWrite(LED[i], LOW);   // set the gnd to turn off 1,i 
        delay(100);
        }
  }
  */
  
}
