/*
 * 
 * ARDUINO COM CONECTOR:
 * 
 * 
 * By: EmersonM.N
 * 21/05/2023
 * 
 * Este programa esta destinado ao controle de uma maquina extrusora,
 * sua função é o controle de passo atraves de uma ponte H L239h e
 * um protenciometro.
 * 
 * Pinagem:
 * motor - 10
 * motor - 11
 * motor - 8
 * motor - 9
 * potenciometro - A1
 */

#include <Stepper.h>
#define potPin 1

// constante que define quantos passos serão necessários para uma volta completa
const int stepsPerRevolution = 300;  
int valPot = 0;
Stepper myStepper(stepsPerRevolution, 10,11,8,9);

void setup() { }

void loop() {
    
valPot =  analogRead(potPin); 

{
  int motorSpeed =map(valPot,0,800,0,100); 
  if (motorSpeed > 0) {
     myStepper.setSpeed(motorSpeed);
     myStepper.step(stepsPerRevolution/240);
  } 
{
   }
  }
 }
