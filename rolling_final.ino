
  #include <Servo.h>

Servo servo1;  
Servo servo2; 
Servo servo3; 
Servo servo4;
Servo servo5;  
Servo servo6; 
Servo servo7; 
Servo servo8;
Servo servo9;  
Servo servo10; 
Servo servo11; 
Servo servo12;

int i,j;
void setup()
 {
  servo1.attach(A2);
  servo2.attach(A3);
  servo3.attach(A5);
  servo4.attach(A4);
  servo5.attach(10);
  servo6.attach(A1);
  servo7.attach(5);
  servo8.attach(2);
  servo9.attach(A0);
  servo10.attach(6);
  servo11.attach(9);
  servo12.attach(3);  // attaches the servo pins to the servo object

  servo1.write(90);
  servo6.write(90);
  servo8.write(90);
  servo12.write(90);

  servo2.write(0); //barale uthe done perfect
  servo7.write(120);
  servo5.write(10); //komale uthe
  servo9.write(120);
  
  delay(10000);

}

void loop() 
{
  // int ini2=0,fin2=50,  ini7=120,fin7=110,   ini5=10,fin5=20,   ini9=120,fin9=70;  
  // for(i=1;i<=3;i++)
  // {
  // servo9.write(fin9);
  // servo2.write(fin2);
  // delay(400);

  // servo9.write(ini9);
  // servo2.write(ini2);
  // delay(700);

  // delay(300);
  // }
}
