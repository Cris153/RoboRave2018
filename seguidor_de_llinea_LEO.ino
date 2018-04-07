#include <DCMotor.h>
#include <Servo.h>

//int boton = 3;
int contador = 0;
const int seg_der = 11; //poner pin
const int seg_izq = 13; //poner pin
int s_izq;
int s_der;

DCMotor motor_izq (4, 17, 16); //rellenar con los pines
DCMotor motor_der (5, 30, 41); //rellenar con los pines

const int blanco = 350;

void seguidor() {
  //Serial.println(analogRead (seg_der));

  s_der = analogRead(seg_der);
  s_izq = analogRead(seg_izq);

  if (s_der > blanco && s_izq > blanco) {
    motor_izq.setSpeed(38);
    motor_der.setSpeed(38);
  }
  else if (s_der > blanco && s_izq < blanco) {
    motor_izq.setSpeed(-35);
    motor_der.setSpeed(50);
  }
  else if (s_der < blanco && s_izq > blanco) {
    motor_der.setSpeed(-55);
    motor_izq.setSpeed(60);
  }
}
 



void setup() {
  //pinMode(boton, INPUT);
  // while(digitalRead(boton) == LOW);
  Serial.begin(9600);
  //motor_der.setClockwise(false);
  //motor_izq.setClockwise(false);
}

void loop() {

  seguidor();

}

