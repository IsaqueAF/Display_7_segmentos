const int Pins[8] = {
  11,10,7,8,9,12,13,6
};

const int Numbers[10][8] = {
  {LOW,LOW,LOW,LOW,LOW,LOW,HIGH,HIGH},
  {HIGH,LOW,LOW,HIGH,HIGH,HIGH,HIGH,HIGH},
  {LOW,LOW,HIGH,LOW,LOW,HIGH,LOW,HIGH},
  {LOW,LOW,LOW,LOW,HIGH,HIGH,LOW,HIGH},
  {HIGH,LOW,LOW,HIGH,HIGH,LOW,LOW,HIGH},
  {LOW,HIGH,LOW,LOW,HIGH,LOW,LOW,HIGH},
  {LOW,HIGH,LOW,LOW,LOW,LOW,LOW,HIGH},
  {LOW,LOW,LOW,HIGH,HIGH,HIGH,HIGH,HIGH},
  {LOW,LOW,LOW,LOW,LOW,LOW,LOW,HIGH},
  {LOW,LOW,LOW,LOW,HIGH,LOW,LOW,HIGH},
};

void SetNumber (int number) {
  int i = 0;
  for (int level : Numbers[number]) {
    digitalWrite(Pins[i], level);
    i++;
  }
}

void setup() {
  for (int pin : Pins) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 10; i++) {
    SetNumber(i);
    delay(1000);
  }
}
