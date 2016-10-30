
// JUEGO DE LUCES   

int led_0=13;                 //variable tipo entero para el led 0 ubicado en el pin 13
int led_1=12;                 //variable tipo entero para el led 1 ubicado en el pin 12
int led_2=11;                 //variable tipo entero para el led 2 ubicado en el pin 11
int led_3=10;                 //variable tipo entero para el led 3 ubicado en el pin 10
int led_4=9;                  //variable tipo entero para el led 4 ubicado en el pin 9
int led_5=8;                  //variable tipo entero para el led 5 ubicado en el pin 8
int led_6=7;                  //variable tipo entero para el led 6 ubicado en el pin 7
int led_7=6;                  //variable tipo entero para el led 7 ubicado en el pin 6
int led_8=5;                  //variable tipo entero para el led 8 ubicado en el pin 5
int led_9=4;                  //variable tipo entero para el led 9 ubicado en el pin 4
int leds[]={led_0,led_1,led_2,led_3,led_4,led_5,led_6,led_7,led_8,led_9};   //vector de leds
int sw_1=3;                   //variable switch 1 ubicado en el  pin 3
int sw_2=2;                   //variable switch 2 ubicado en el  pin 2
int sw_3=1;                   //variable switch 3 ubicado en el  pin 1
int cont=0;                   //variable con
int contador=9;               //variable contador
long randNumer;               //variable para numeros aleatorios
int veces=0;                  //variable para el numero de veces del juego 
int i;                        //variable i
int j;                        //variable j

void setup() {
 
    pinMode(led_0,OUTPUT);    //pin de salida del led_0
    pinMode(led_1,OUTPUT);    //pin de salida del led_1
    pinMode(led_2,OUTPUT);    //pin de salida del led_2
    pinMode(led_3,OUTPUT);    //pin de salida del led_3
    pinMode(led_4,OUTPUT);    //pin de salida del led_4
    pinMode(led_5,OUTPUT);    //pin de salida del led_5
    pinMode(led_6,OUTPUT);    //pin de salida del led_6
    pinMode(led_7,OUTPUT);    //pin de salida del led_7
    pinMode(led_8,OUTPUT);    //pin de salida del led_8
    pinMode(led_9,OUTPUT);    //pin de salida del led_9
    pinMode(sw_1,INPUT);      //pin de salida del switch_1
    pinMode(sw_2,INPUT);      //pin de salida del switch_2
    pinMode(sw_3,INPUT);      //pin de salida del switch_3

}

void loop() {
  
// -------------JUEGO #1--------------------------------------------------------------
// SWITH_1 =0     SWITCH_2=0      SWITH_3=0  

  if(digitalRead(sw_1)==LOW&&digitalRead(sw_2)==LOW&&digitalRead(sw_3)==LOW)   //condición si los switch estan en el estado de:  switch_1=0 , switch_2=0 y switch_3=0
    {                                                                          
      for(cont;cont<=9;cont++)                                                 //condición donde si el contador es menos que 9 continuará o se saldra del ciclo
        {                       
      digitalWrite(leds[cont],LOW);                                            //permite el vector led se apague de acuerdo al número del contador 
        }
    }

// -------------JUEGO #2--------------------------------------------------------------
// SWITH_1 =0     SWITCH_2=1      SWITH_3=0  

  if(digitalRead(sw_1)==LOW&&digitalRead(sw_2)==HIGH&&digitalRead(sw_3)==LOW)  //condición si los switch estan en el estado de:  switch_1=0 , switch_2=1 y switch_3=0
     {
            for(cont=1;cont<=10;cont)                                          //condición donde si el contador es menos que 10 continuará o se saldra del ciclo
         {
            digitalWrite(leds[cont],HIGH);                                     //permite el vector led se prenda de acuerdo al número del contador                         
            delay(300);                                                        //tiempo de espera
            digitalWrite(leds[cont],LOW);                                      //permite el vector led se apague de acuerdo al número del contador
            delay(300);                                                        //tiempo de espera
            cont=cont+2;                                                       //acumulador del cont 
         }
         cont=0;                                                               //variable cont reinicia con cero
     } 

// -------------JUEGO #3--------------------------------------------------------------
// SWITH_1 =0     SWITCH_2=1      SWITH_3=1 

 if(digitalRead(sw_1)==LOW&&digitalRead(sw_2)==HIGH&&digitalRead(sw_3)==HIGH)  //condición si los switch estan en el estado de:  switch_1=0 , switch_2=1 y switch_3=1
     {
            for(cont=0;cont<=10;cont)                                          //condición donde si el contador es menos que 10 continuará o se saldra del ciclo
         {
            digitalWrite(leds[cont],HIGH);                                     //permite el vector led se prenda de acuerdo al número del contador
            delay(300);                                                        //tiempo de espera
            digitalWrite(leds[cont],LOW);                                      //permite el vector led se apague de acuerdo al número del contador
            delay(300);                                                        //tiempo de espera
            cont=cont+2;                                                       //acumulador del cont 
         }
         cont=0;                                                               //variable cont reinicia con cero
     }

// -------------JUEGO #4--------------------------------------------------------------
// SWITH_1 =1     SWITCH_2=0      SWITH_3=1

 if(digitalRead(sw_1)==HIGH&&digitalRead(sw_2)==LOW&&digitalRead(sw_3)==HIGH)  //condición si los switch estan en el estado de:  switch_1=1 , switch_2=0 y switch_3=1
     {
          for(cont=0;cont<=10;cont)                                            //condición donde si el contador es menos que 10 continuará o se saldra del ciclo
         {
            digitalWrite(leds[cont],HIGH);                                     //permite el vector led se prenda de acuerdo al número del contador
            delay(300);                                                        //tiempo de espera
            digitalWrite(leds[cont],LOW);                                      //permite el vector led se apague de acuerdo al número del contador
            delay(300);                                                        //tiempo de espera
            cont=random(0,9);                                                  //variable del cont con números aleatorios
         }
         cont=0;                                                               //variable cont reinicia con cero
     }

// -------------JUEGO #5--------------------------------------------------------------
// SWITH_1 =1     SWITCH_2=1       SWITH_3=0

 if(digitalRead(sw_1)==HIGH&&digitalRead(sw_2)==HIGH&&digitalRead(sw_3)==LOW)  //condición si los switch estan en el estado de:  switch_1=1 , switch_2=1 y switch_3=0
     {
          contador=9;                                                          //variable del contador asignado el número 9
          for(cont=0;cont<=4;cont++)                                           //condición donde si el contador es menos que 10 continuará o se saldra del ciclo
          {
               digitalWrite(leds[cont],HIGH);                                  //permite el vector led se prenda de acuerdo al número del contador
               digitalWrite(leds[contador],HIGH);                              //permite el vector led se prenda de acuerdo al número del contador
               delay(300);                                                     //tiempo de espera
               digitalWrite(leds[cont],LOW);                                   //permite el vector led se apague de acuerdo al número del contador
               digitalWrite(leds[contador],LOW);                               //permite el vector led se apague de acuerdo al número del contador
               delay(300);                                                     //tiempo de espera
               contador=contador-1;                                            //acumulador de forma descendente
          }
           
      }

// -------------JUEGO #6--------------------------------------------------------------
// SWITH_1 =1     SWITCH_2=1       SWITH_3=1

if(digitalRead(sw_1)==HIGH&&digitalRead(sw_2)==HIGH&&digitalRead(sw_3)==HIGH)  //condición si los switch estan en el estado de:  switch_1=1 , switch_2=1 y switch_3=0
     {
          if(veces<=5)                                                         //condición donde si el número de veces supera el 5 deja de hacer el juego
            { 
               j=5;                                                            //variable donde j tiene le valor 5
               for(i=4;i>=0;i--)                                               //condición donde si i es menor o igual que 0 continuará o se saldra del ciclo
                {
                  digitalWrite(leds[i],HIGH);                                  //permite el vector led se prenda de acuerdo al número del contador
                  delay(200);                                                  //tiempo de espera
                  digitalWrite(leds[j],HIGH);                                  //permite el vector led se prenda de acuerdo al número del contador
                  delay(200);                                                  //tiempo de espera 
                  j=j+1;                                                       //acumulador de j
                }
               j=9;                                                            //variable de j con valor de 9
               for(i=0;i<=4;i++)                                               //condición donde si i es menor o igual que 0 continuará o se saldra del ciclo
                {
                  digitalWrite(leds[i],LOW);                                   //permite el vector led se prenda de acuerdo al número del contador        
                  delay(200);                                                  //tiempo de espera 
                  digitalWrite(leds[j],LOW);                                   //permite el vector led se prenda de acuerdo al número del contador          
                  delay(200);                                                  //tiempo de espera 
                  j=j-1;                                                       //acumulador desendente de j
                }
            veces=veces+1;                                                     //variable que cuenta las veces que va realizando el programa 
               }
            
       }
     

}

