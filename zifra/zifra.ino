// B 2
// A 3
// F 4
// G 5
//
// E 6
// D 7
// C 8
//
// COM нижний к земле
// DOT к 9

const int B = 2;
const int A = 3;
const int F = 4;
const int G = 5;
const int E = 6;
const int D = 7;
const int C = 8;
const int DOT = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(B, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(DOT, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // начинаем выводить цифры
  // 7
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);

  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  //digitalWrite(DOT, LOW); бесполезно???
}
