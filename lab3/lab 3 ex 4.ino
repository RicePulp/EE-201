const int A = 3;
const int B = 2;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

bool segA[10] = {0, 0, 0, 1, 1, 0, 0, 0, 0, 0};
bool segB[10] = {0, 0, 0, 0, 0, 1, 0, 0, 1, 0};
bool segC[10] = {0, 0, 0, 0, 0, 0, 0, 1, 0, 0};
bool segD[10] = {0, 0, 1, 0, 0, 1, 0, 0, 1, 0};
bool segE[10] = {1, 0, 1, 0, 1, 1, 1, 0, 1, 0};
bool segF[10] = {0, 0, 1, 0, 0, 0, 1, 1, 1, 0};
bool segG[10] = {0, 0, 1, 0, 0, 0, 0, 0, 1, 1};

void setup() {
  // put your setup code here, to run once:
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i < 10; i++) {
    digitalWrite(A, segA[i]);
    digitalWrite(B, segB[i]);
    digitalWrite(C, segC[i]);
    digitalWrite(D, segD[i]);
    digitalWrite(E, segE[i]);
    digitalWrite(F, segF[i]);
    digitalWrite(G, segG[i]);
    delay(1500);
  }
  // for(int i = 0; i < 9; i++){
  //   for(int j = 6; j >= 0; j--){
  //     bool temp = not((seg[i]>>j)%2);
  //     Serial.print(temp);
  //     digitalWrite(A+j, temp);
  //   }
  //   Serial.println();
  //   delay(1000);
  // }
  delay(20000000);
}