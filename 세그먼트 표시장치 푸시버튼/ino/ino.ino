int num = 0;

byte Numbers[16][8] = {
{1,1,1,1,1,1,0,0}, // 0
{0,1,1,0,0,0,0,0}, // 1
{1,1,0,1,1,0,1,0}, // 2
{1,1,1,1,0,0,1,0}, // 3
{0,1,1,0,0,1,1,0}, // 4
{1,0,1,1,0,1,1,0}, // 5
{1,0,1,1,1,1,1,0}, // 6
{1,1,1,0,0,1,0,0}, // 7
{1,1,1,1,1,1,1,0}, // 8
{1,1,1,1,0,1,1,0}, // 9
{1,1,1,0,1,1,1,0}, // A
{0,0,1,1,1,1,1,0}, // B
{1,0,0,1,1,1,0,0}, // C
{0,1,1,1,1,0,1,0}, // D
{1,0,0,1,1,1,1,0}, // E
{1,1,0,0,1,1,1,0}  // F
};

void displayNumbers(int n){
  int pin = 2;
  for(int i = 0; i < 8; i++) {
    digitalWrite(pin+i, Numbers[n][i]);
    }
}

void setup() {
  pinMode(12, INPUT);
  for (int i = 2; i <= 9; i++) {
    pinMode(i, OUTPUT);
    }
    digitalWrite(9, HIGH);
}

void loop() {
  if (digitalRead(12) == HIGH){
    ++num;
    if (num > 9) {
      num = 0;
      }
    }
    displayNumbers(num);
    delay(300);
}