//Motor 1:
#define EnA 10
#define IN1 9
#define IN2 8
//Motor 2:
#define EnB 11
#define IN3 12
#define IN4 13
//
int Speed1=120;
int Direc1=1;
int Direc2=0;

int Speed2=120;
int Direc3=0;
int Direc4=1;
void setup() {
  pinMode(EnA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EnB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  //Motor 1:
  digitalWrite(IN1,Direc1);
  digitalWrite(IN2,Direc2);
  analogWrite(EnA,Speed1);
  //Motor 2:
  digitalWrite(IN3,Direc3);
  digitalWrite(IN4,Direc4);
  analogWrite(EnB,Speed1);


}