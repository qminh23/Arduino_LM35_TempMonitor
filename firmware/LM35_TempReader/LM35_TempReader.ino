int adcValues[2]; float nhietDo[2]; char chuoi[30];

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;
  
  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;
  
Serial.print("--- DU LIEU NHIET DO SV A ---"); // SV A sua dong nay  Serial.print(chuoi);
  delay(100);
  // Đọc cảm biến thứ 3 ở chân A2
  int val3 = analogRead(A2);
  float temp3 = (val3 * 5.0 * 100.0) / 1024.0; // Hoặc công thức bạn đang dùng
  
  Serial.print("Nhiet do 3: ");
  Serial.println(temp3);
}
