//Proyecto tecnologia

#define pin1MotorIzq D1
#define pin2MotorIzq D2
#define pin1MotorDer D3
#define pin2MotorDer D4

#define enableIzq D5
#define enableDer D6

#define sensorLineaIzq D7
#define sensorLineaDer D8


#define potenciometro A0

int velocidad = 200;

int valorIzq = 0;
int valorDer = 0;

void setup() {
  pinMode(pin1MotorIzq, OUTPUT);
  pinMode(pin2MotorIzq, OUTPUT);
  pinMode(pin1MotorDer, OUTPUT);
  pinMode(pin2MotorDer, OUTPUT);

  pinMode(sensorLineaIzq, INPUT);
  pinMode(sensorLineaDer, INPUT);
}

void loop() {
  velocidad = (analogRead(potenciometro) / 4)-6;
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
  analogWrite(enableIzq, velocidad);
  analogWrite(enableDer, velocidad);
  digitalWrite(pin1MotorIzq,1);
  digitalWrite(pin2MotorIzq,0);
  digitalWrite(pin1MotorDer,1);
  digitalWrite(pin2MotorDer,0);
}

void izquierda(){
  analogWrite(enableIzq, velocidad);
  analogWrite(enableDer, velocidad);
  digitalWrite(pin1MotorIzq,0);
  digitalWrite(pin2MotorIzq,0);
  digitalWrite(pin1MotorDer,1);
  digitalWrite(pin2MotorDer,0);
}

void derecha(){
  analogWrite(enableIzq, velocidad);
  analogWrite(enableDer, velocidad);
  digitalWrite(pin1MotorIzq,1);
  digitalWrite(pin2MotorIzq,0);
  digitalWrite(pin1MotorDer,0);
  digitalWrite(pin2MotorDer,0);
}

void detener(){
  analogWrite(enableIzq, velocidad);
  analogWrite(enableDer, velocidad);
  digitalWrite(pin1MotorIzq,0);
  digitalWrite(pin2MotorIzq,0);
  digitalWrite(pin1MotorDer,0);
  digitalWrite(pin2MotorDer,0);
}
