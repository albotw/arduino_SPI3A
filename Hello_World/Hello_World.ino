boolean display = true;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("###= Communication initialisée =###");

}

void loop() {
  // put your main code here, to run repeatedly:
  if (display == true){
    Serial.println("Hello, World !");
    display = false;
  }
}
