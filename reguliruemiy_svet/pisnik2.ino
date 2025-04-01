    void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT); // светодиод
  pinMode(A0, INPUT);  // потенциометр A0
}

void loop() {
  // put your main code here, to run repeatedly:
  int potenziometr_10_bit = analogRead(A0); //считывает напряжение и записывает (10 битный) код в переменную
  int potenziometr_8_bit = map(potenziometr_10_bit, 0, 1023, 0, 255); //преобразуем код в 8 битный
  analogWrite(9, potenziometr_8_bit); //подаёт уровень напряжения на 9 пин из potenziometr_8_bit
}
