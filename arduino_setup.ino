#define DEBUG(a,b) Serial.println(a);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600,SERIAL_8N1);

}

void loop() {
   if (Serial.available())
   {
      char data[20];
      size_t count = Serial.readBytesUntil('\n', data, 20);
      DEBUG(data, count)
   }
}
