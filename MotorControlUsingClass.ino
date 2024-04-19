/* 
Author: Tejinder Kumar Devgan @ STrobotix

Use this code to understand the behaviour of Encoder attached to DC Motor and check weather motor is forward or reverse
Wiring: 
Connect Decoder Power Supply +ve (Blue) to GND on arduino
Connect Decoder Ground -ve (Black) to +5v
Signal(green) to Pin9
Signal(Blue) to PIN2 (interupt)
No need to Turn on Motor or no power to Motor required as we will be turning motor manually

Upload the code and do the wiring, turn the motor manually and keep checking serial monitor 
*/

class motor
{
  
  private:
    int pinA = LOW;
    int pinB = LOW;

  public:
    void setdata (int x, int y)
     {
      pinA = x;
      pinB = y;    
     }

    void getdata()
    {
      Serial.println("Use Set data function or Constructor to set data");
    }
    void displaydata()
    {
      
    }

    motor()
    {
      
    }

    motor(int x, int y)
    { 
      pinA = x; pinB = y;
      pinMode(pinA, OUTPUT);
      pinMode(pinB, OUTPUT);
    }

    void forward()
    {
      digitalWrite(pinA, HIGH);digitalWrite(pinB, LOW);
    }
    void reverse()
    {
      digitalWrite(pinA, LOW);digitalWrite(pinB, HIGH);
    }
   void stops()
    {
      digitalWrite(pinA, LOW);digitalWrite(pinB, LOW);
    }
  
};




motor motor1(5,6);

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
//  motor1.forward();
//  delay(2000);
//  Serial.println(count);
  motor1.reverse();
  delay(2000);
  Serial.println(count);
 motor1.stops();
 delay(2000);
 
 
  
}

void Int1()
{
    (digitalRead(8)==0)? (count++) : (count--) ;
}
