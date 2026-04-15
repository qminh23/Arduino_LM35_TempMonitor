# 🌡️ Hệ thống Giám sát Nhiệt độ Đa kênh (Arduino LM35)        Tác giả:  https://qminh23.github.io

## 📖 Mô tả dự án
Dự án IoT cơ bản sử dụng vi điều khiển Arduino để đọc dữ liệu nhiệt độ từ 3 cảm biến LM35. Dữ liệu sau khi thu thập và tính toán sẽ được đóng gói dưới định dạng JSON và gửi qua cổng Serial, giúp các hệ thống phần mềm cấp cao (như Web/App) dễ dàng bóc tách và giám sát theo thời gian thực.

## ✨ Tính năng nổi bật
* **Đọc đa kênh:** Hỗ trợ thu thập dữ liệu đồng thời từ 3 cảm biến nhiệt độ độc lập (Chân A0, A1, A2).
* **Định dạng chuẩn:** Xuất dữ liệu ra Serial Monitor dưới cấu trúc **JSON** thân thiện.
* **Tối ưu hóa:** Sử dụng mảng để quản lý dữ liệu, dễ dàng mở rộng thêm cảm biến trong tương lai.

## 🛠 Phần cứng yêu cầu

| STT | Tên linh kiện | Số lượng | Ghi chú |
|:---:|:---|:---:|:---|
| 1 | Mạch Arduino UNO R3 | 1 | Vi điều khiển trung tâm |
| 2 | Cảm biến nhiệt độ LM35 | 3 | Nối vào các chân Analog A0, A1, A2 |
| 3 | Dây cắm cắm (Jumper) | N/A | Dây đực-đực, đực-cái |
| 4 | Testboard (Breadboard) | 1 | Để đi dây cắm cảm biến |

## 🚀 Hướng dẫn sử dụng
1. **Kết nối phần cứng:** Nối chân VCC và GND của 3 cảm biến LM35 vào nguồn 5V của Arduino. Nối chân Data của 3 cảm biến lần lượt vào `A0`, `A1`, `A2`.
2. **Nạp code:** Mở file `firmware/LM35_TempReader/LM35_TempReader.ino` bằng Arduino IDE và nạp (Upload) xuống mạch.
3. **Giám sát:** Mở Serial Monitor, chọn Baudrate là `9600`. Dữ liệu sẽ hiển thị dưới dạng: `{"temp1": 25.5, "temp2": 26.0, "temp3": 24.8}`

## 📁 Cấu trúc thư mục 
```text
Arduino_LM35_TempMonitor/
├── firmware/
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino   # Mã nguồn chính của hệ thống
├── README.md                     # Tài liệu giới thiệu dự án



