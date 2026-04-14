int adcValues[3]; 
float nhietDo[3]; 

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // --- PHẦN ĐỌC DỮ LIỆU (Giữ logic của SV A bổ sung kênh A2) ---
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;
  
  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;

  adcValues[2] = analogRead(A2); 
  nhietDo[2] = (adcValues[2] * 500.0) / 1023.0;

  // --- PHẦN XUẤT DỮ LIỆU (Giữ định dạng JSON của SV B và nâng cấp lên 3 kênh) ---
  Serial.print("{");
  Serial.print("\"temp1\": "); Serial.print(nhietDo[0]);
  Serial.print(", \"temp2\": "); Serial.print(nhietDo[1]);
  Serial.print(", \"temp3\": "); Serial.print(nhietDo[2]); // Thêm temp3 vào JSON
  Serial.println("}");

  delay(100);
}