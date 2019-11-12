
int inp_val,temp;
void setup() {
    Serial.begin(9600);
    pinMode(A0,INPUT);
}

void loop() {
    inp_val=analogRead(A0);
  temp=(5.0*inp_val*100.0)/1024;
  Serial.println(temp);
}
