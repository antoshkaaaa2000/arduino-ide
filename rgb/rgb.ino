const int potenziometr = A3;
const int krasniy = 11;
const int zeleniy = 10;
const int siniy = 9;
int urovenyarkosti_k = 0;
int urovenyarkosti_z = 0;
int urovenyarkosti_s = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(potenziometr, INPUT);
  pinMode(krasniy, OUTPUT);
  pinMode(zeleniy, OUTPUT);
  pinMode(siniy, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  //конвертируем из 10 бит в 8 бит
  int potenziometrnapryazhenie = analogRead(potenziometr);
  if(potenziometrnapryazhenie <= 341){
    urovenyarkosti_k = map(potenziometrnapryazhenie, 0, 341, 0, 255);
  }
  else if(potenziometrnapryazhenie <= 682){
    urovenyarkosti_z = map(potenziometrnapryazhenie, 342, 682, 0, 255);
  }
  else{
    urovenyarkosti_s = map(potenziometrnapryazhenie, 683, 1023, 0, 255);
  }

  analogWrite(krasniy, urovenyarkosti_k);
  analogWrite(zeleniy, urovenyarkosti_z);
  analogWrite(siniy, urovenyarkosti_s);
}
