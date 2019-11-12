
int inp_val, temp;
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop() {
  inp_val = analogRead(A0);
  temp = (5.0 * inp_val * 100.0) / 1024;
  Serial.print("Temp is :");
  Serial.print(temp);
  Serial.println();
  inp_val = analogRead(A1);
  Serial.print("Light amount is:");
  Serial.print(inp_val);
  Serial.println();  
}
