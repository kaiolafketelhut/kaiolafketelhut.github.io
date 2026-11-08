// main.ino - OMQ - BLAK FAT12 - D183 - SKY
// sol<pattern>omq - Arduino OMQ
String name = "OMQ - SKY - BLAK FAT12";
String pattern = "sol<pattern>omq";
String points[12] = {
  "What is Sky? - Sky = Blue Cloud Free",
  "Blue - Blue = Color Calm Sky",
  "Cloud - Cloud = White Soft Float",
  "Sun - Sun = Shine Warm Power",
  "Moon - Moon = Glow Night Dream",
  "Star - Star = Light Sky Dream",
  "Bird - Bird = Fly Free Sky",
  "Photo - Photo = Sky Light Memory",
  "Berlin - Berlin = Sky Blue Free",
  "Dream - Dream = Fly Sky Imagine",
  "Future - Future = Sky Drone AI",
  "Live - Build Sky App!"
};
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println(name);
  Serial.println(pattern);
  for(int i=0;i<12;i++){ Serial.print(i+1); Serial.print(". "); Serial.println(points[i]); }
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); delay(500);
  digitalWrite(LED_BUILTIN, LOW); delay(500);
  Serial.println("OMQ - SKY - LIVE!");
  delay(2000);
}
