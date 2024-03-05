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


void setup() {
  Serial.begin(9600); //bluetooth start

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

  servo1.write(30);
  servo6.write(30);
  servo8.write(30);
  servo12.write(30);

  // servo1.write(40);
  // servo6.write(40);
  // servo8.write(40);
  // servo12.write(40);

  servo2.write(63); //barale uthe
  servo7.write(70);
  servo5.write(66); //komale uthe
  servo9.write(50);
  
  delay(10000);
}
void loop()
{
  if(Serial.available() > 0)      //  Send data only when you receive data:
    data = Serial.read();        //Read  the incoming data & store into data
  
  if(data=="F")
    walkforward();
  if(data=="B")
    walkbackward();
  if(data=="L")
    rotatingleft();
  if(data=="R")
  rotatingright();
}

void walkforward() {

  int i,j;
  int ini1=30,fin1=60,   ini12=30,fin12=0,   ini8=30,fin8=60,   ini6=30,fin6=0;
  int ini2=63,fin2=88,  ini7=70,fin7=80,   ini5=66,fin5=56,   ini9=50,fin9=35; 
  
  servo2.write(fin2);  //------------- TR leg moving forward
  delay(200);

  for(i=ini1;i<=fin1;i=i+5)
  {
  servo1.write(i);
  delay(100);
  }

  for(i=fin2;i>=ini2;i=i-5)
  {
  servo2.write(i);
  delay(100);
  }
  delay(200);


  
  servo7.write(fin7); //---------------- BL leg moving forward
  delay(200);

  for(i=ini12;i>=fin12;i=i-5)
  {
  servo12.write(i);
  delay(100);
  }

  for(i=fin7;i>=ini7;i=i-5)
  {
  servo7.write(i);
  delay(100);
  }
  delay(200);
 


  for(i=fin1,j=fin12;i>=ini1,j<=ini12;i=i-5,j=j+5) //------------- thrust from TR and BL
  {
  servo1.write(i);
  servo12.write(j);
  delay(100);
  }
  delay(200);



  servo9.write(fin9); //------------------- TL leg moving forward
  delay(200);

  for(i=ini8;i<=fin8;i=i+5)
  {
  servo8.write(i);
  delay(100);
  }

  for(i=fin9;i<=ini9;i=i+5)
  {
  servo9.write(i);
  delay(100);
  }
  delay(200);


  servo5.write(fin5); //---------------------- BR leg moving forward
  delay(200);

  for(i=ini6;i>=fin6;i=i-5)
  {
  servo6.write(i);
  delay(100);
  }

  for(i=fin5;i<=ini5;i=i+5)
  {
  servo5.write(i);
  delay(100);
  }

 delay(200);


 for(i=fin8,j=fin6;i>=ini8,j<=ini6;i=i-5,j=j+5)  //-----------------thrust from TL and BR
  {
  servo8.write(i);
  servo6.write(j);
  delay(100);
  }
  delay(200);

}


/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////


void rotatingright()
{
  int i,j,k;
  int ini1=40,fin1=0,   ini12=40,fin12=0,   ini8=40,fin8=80,   ini6=40,fin6=80;
  int ini2=63,fin2=73,  ini7=70,fin7=80,   ini5=66,fin5=56,   ini9=50,fin9=40; 


  servo9.write(fin9); //------------------- TL leg moving forward
  delay(200);

  for(i=ini8;i<=fin8;i=i+5)
  {
  servo8.write(i);
  delay(100);
  }

  for(i=fin9;i<=ini9;i=i+5)
  {
  servo9.write(i);
  delay(100);
  }
  delay(200);



servo2.write(fin2);  //------------- TR leg moving backward
  delay(200);

  for(i=ini1;i>=fin1;i=i-5)
  {
  servo1.write(i);
  delay(100);
  }

  for(i=fin2;i>=ini2;i=i-5)
  {
  servo2.write(i);
  delay(100);
  }
  delay(200);


  servo7.write(fin7); //---------------- BL leg moving forward
  delay(200);

  for(i=ini12;i>=fin12;i=i-5)
  {
  servo12.write(i);
  delay(100);
  }

  for(i=fin7;i>=ini7;i=i-5)
  {
  servo7.write(i);
  delay(100);
  }
  delay(200);



  for(i=fin8,j=fin12;i>=ini8,j<=ini12;i=i-5,j=j+5)  //-----------------thrust from all
  {
  servo8.write(i);
  servo12.write(j);
  // servo6.write(i);
  servo1.write(j);
  delay(100);
  }
  delay(200);
}

///////////////////////////////
///////////////////////////////

void rotatingleft()
{
  int i,j,k;
  int ini1=40,fin1=80,   ini12=40,fin12=80,   ini8=40,fin8=0,   ini6=40,fin6=0;
  int ini2=63,fin2=73,  ini7=70,fin7=80,   ini5=66,fin5=56,   ini9=50,fin9=40; 

   servo9.write(fin9); //------------------- TL leg moving backward
  delay(200);

  for(i=ini8;i>=fin8;i=i-5)
  {
  servo8.write(i);
  delay(100);
  }

  for(i=fin9;i<=ini9;i=i+5)
  {
  servo9.write(i);
  delay(100);
  }
  delay(200);



  servo2.write(fin2);  //------------- TR leg moving forward
  delay(200);

  for(i=ini1;i<=fin1;i=i+5)
  {
  servo1.write(i);
  delay(100);
  }

  for(i=fin2;i>=ini2;i=i-5)
  {
  servo2.write(i);
  delay(100);
  }
  delay(200);



  servo5.write(fin5); //---------------------- BR leg moving forward
  delay(200);

  for(i=ini6;i>=fin6;i=i-5)
  {
  servo6.write(i);
  delay(100);
  }

  for(i=fin5;i<=ini5;i=i+5)
  {
  servo5.write(i);
  delay(100);
  }

 delay(200);


 for(i=fin1,j=fin6;i>=ini1,j<=ini6;i=i-5,j=j+5)  //-----------------thrust from TR,TL and BR
  {
  servo1.write(i);
  servo6.write(j);
  servo8.write(j);

  delay(100);
  }
  delay(200);
}

