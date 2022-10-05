//Proyecto tecnologia

#define pin1MotorA D1
#define pin2MotorA D2
#define pin1MotorB D3
#define pin2MotorB D4

#define enableA D5
#define enableB D6

#define sensorLineaIzq D7
#define sensorLineaDer D8


#define potenciometro A0

int velocidad = 200;

int valorIzq = 0;
int valorDer = 0;

void setup() {
  pinMode(pin1MotorA, OUTPUT);
  pinMode(pin2MotorA, OUTPUT);
  pinMode(pin1MotorB, OUTPUT);
  pinMode(pin2MotorB, OUTPUT);

  pinMode(sensorLineaIzq, INPUT);
  pinMode(sensorLineaDer, INPUT);
}

void loop() {
  velocidad = (valorPotenciometro / 4)-6;
  valorIzq = digitalRead(sensorLineaIzq);
  valorDer = digitalRead(sensorLineaDer);
  
  if(valorIzq == 0 && valorDer == 0){
    adelante();
  }

  if(valorIzq == 1 && valorDer == 0){
    izquierda();
  }

  if(valorIzq == 0 && valorDer == 1){
    derecha();
  }

  if(valorIzq == 0 && valorDer == 1){
    detener();
  }
  
}


void adelante(){
  analogWrite(enableA, velocidad);
  analogWrite(enableB, velocidad);
  digitalWrite(pin1MotorA,1);
  digitalWrite(pin2MotorA,0);
  digitalWrite(pin1MotorB,1);
  digitalWrite(pin2MotorB,0);
}

void izquierda(){
  analogWrite(enableA, velocidad);
  analogWrite(enableB, velocidad);
  digitalWrite(pin1MotorA,1);
  digitalWrite(pin2MotorA,0);
  digitalWrite(pin1MotorB,1);
  digitalWrite(pin2MotorB,0);
}

void derecha(){
  analogWrite(enableA, velocidad);
  analogWrite(enableB, velocidad);
  digitalWrite(pin1MotorA,1);
  digitalWrite(pin2MotorA,0);
  digitalWrite(pin1MotorB,1);
  digitalWrite(pin2MotorB,0);
}

void detener(){
  analogWrite(enableA, velocidad);
  analogWrite(enableB, velocidad);
  digitalWrite(pin1MotorA,1);
  digitalWrite(pin2MotorA,0);
  digitalWrite(pin1MotorB,1);
  digitalWrite(pin2MotorB,0);
}