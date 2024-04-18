/* 
Use this code to understand the behaviour of Encoder attached to DC Motor
Wiring: 
Connect Decoder Power Supply +ve (Blue) to GND on arduino
Connect Decoder Ground -ve (Black) to +5v
Signal(green) to Pin9
Signal(Blue) to PIN2 (interupt)
No need to Turn on Motor or no power to Motor required as we will be turning motor manually

Upload the code and do the wiring, turn the motor manually and keep checking serial monitor 
*/





long count=0;
void setup() 
{

  Serial.begin(9600);
 
  pinMode(2, INPUT);                                            // Used as Interupts
  pinMode(8, INPUT);                                            // Used to read Signal from Motor
  attachInterrupt(digitalPinToInterrupt(2), Int1, RISING);      
 
}

void loop() 

{
  
}

void Int1()
{
 (digitalRead(8)==0)? (count++) : (count--) ;
 Serial.println(count);
}




