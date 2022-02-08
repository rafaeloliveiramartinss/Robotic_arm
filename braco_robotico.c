#include <Servo.h>
   int i;  
   int S1=0;
   int chave =13;

Servo servobase;
Servo servobraco;
Servo servoantibraco1;
Servo servoantibraco2;
Servo servopunho;
Servo servogarra;



void setup() {
  // put your setup code here, to run once:
 

  servobase.attach(3);
  servobraco.attach(5);
  servoantibraco1.attach(6);
  servoantibraco2.attach(9);
  servopunho.attach(10);
  servogarra.attach(11);
  
  servobase.write(i=90);
  servobraco.write(i=90);
  servoantibraco1.write(i=169);
  servoantibraco2.write(i=42);
  servopunho.write(i=180);
  servogarra.write(i=7);
  
  
}

void loop() {

   
    
   
    S1=digitalRead(chave);
    if (S1==HIGH)
   {

   
    
   //servobase
   
    for (i=90;i<180;i++)
      {
     servobase.write(i);
      delay(20);
      }

      

      
      
//servopunho

  servopunho.write(i=90);
  //servogarra
   servogarra.write(i=50);
//servo braco
    
 
      

 //servo antibraco1

  
    for (i=180;i>15;i--)
     {
   servoantibraco1.write(i);
      delay(20);
      }

      
 //servoantibraco2

       for (i=45;i<120;i++)
      {
      servoantibraco2.write(i);
      delay(20);
      }

  
      
     

      

       //servogarra
       delay(1000);
       for (i=50;i>=23;i--)
      {
     servogarra.write(i);
      delay(15);
      }
      delay(1000);


 //servo antibraco1

       
    for (i=15;i<50;i++)
      {
     servoantibraco1.write(i);
      delay(20);
      }
//servobase
   
 for (i=180;i>=95;i--)
      {
      servobase.write(i);
      delay(20);
      } 

//servo antibraco1


      for (i=50;i>=15;i--)
      {
      servoantibraco1.write(i);
      delay(20);
      }   

//servogarra
delay(1000);
       for (i=23;i<50;i++)
      {
     servogarra.write(i);
      delay(15);
      }
delay(1000);
      


    

//servo antibraco1
       
    for (i=15;i<50;i++)
      {
     servoantibraco1.write(i);
      delay(20);
      }

      
 //servobase

    for (i=95;i<=135;i++)
      {
      servobase.write(i);
      delay(20);
      } 

//servo antibraco1

 for (i=50;i>=15;i--)
      {
      servoantibraco1.write(i);
      delay(20);
      }   
delay(1000);
      //servogarra

      for (i=50;i>=23;i--)
      {
      servogarra.write(i);
      delay(15);
      }
delay(1000);


//delay(500);

 //servogarra

     // for (i=25;i<=50;i++)
     // {
      //servogarra.write(i);
    //  delay(15);
     // }
    //  delay(500);
       //servo antibraco1

       
    for (i=15;i<50;i++)
      {
     servoantibraco1.write(i);
      delay(20);
      }

       //servobase
   
    for (i=135;i>87;i--)
      {
      servobase.write(i);
      delay(20);
      }

      
//servo antibraco1


      for (i=50;i>=15;i--)
      {
      servoantibraco1.write(i);
      delay(20);
      }   

//servogarra
delay(1000);
       for (i=23;i<=50;i++)
      {
     servogarra.write(i);
      delay(15);
      }
delay(1000);
      

 

      //servo antibraco1

       
    for (i=15;i<50;i++)
      {
     servoantibraco1.write(i);
      delay(15);
      }

//servobase
   
    for (i=87;i>=8;i--)
      {
      servobase.write(i);
      delay(20);
     }

//servo antibraco1


      for (i=50;i>=15;i--)
      {
      servoantibraco1.write(i);
      delay(15);
      }   

//servogarra
delay(1000);
       for (i=50;i>=20;i--)
      {
     servogarra.write(i);
      delay(15);
      }
delay(1000);
      
//servo antibraco1
       
    for (i=15;i<50;i++)
      {
     servoantibraco1.write(i);
      delay(15);
      }
 //servobase

 
  for (i=8;i<=83;i++)
     {
      servobase.write(i);
      delay(20);
      } 
      
//servo antibraco1

       
    for (i=50;i>=15;i--)
      {
     servoantibraco1.write(i);
      delay(15);
      }
      
//servogarra
delay(1000);
       for (i=20;i<=50;i++)
      {
     servogarra.write(i);
      delay(15);
      }
delay(1000);

   //servo antibraco1

       
    for (i=15;i<169;i++)
      {
      servoantibraco1.write(i);
      delay(15);
      }

       //servoantibraco2

     for (i=120;i>=42;i--)
     {
      servoantibraco2.write(i);
      delay(15);
    }

//servogarra
delay(500);
       for (i=50;i>=7;i--)
      {
     servogarra.write(i);
      delay(15);
      }

      delay(500);
 
 
     //servo punho


       for (i=90;i<180;i++)
      {
      servopunho.write(i);
      delay(5);
     }

       

}
}
