"# CaoHuuLinh_6051071065" 
"# CaoHuuLinh_6051071065" 

Bước 1: Tải Arduino IDE và khởi động chạy trình duyệt 
Bước 2: Tải thư viện Arduino AVR Boards by Arduino, Wire, Serial sau đó thoát khỏi chương trình rồi vào lại.
Bước 3: Kết nối board mạch với máy tính thông qua Cap USB
Bước 4: Kiểm tra cổng COM -> Nhấp chuột trái vào This PC -> Manage -> Device Manager -> Ports
Bước 5: Mở giao diện Arduino IDE - > Vào Tools (Trên thanh công cụ) -> Port (Chọn cổng COM4 hoặc COM3)
Bước 6: Chọn Select Board - > Gõ tìm và chọn Arduino Uno -> OK
Bước 7: Nạp code vào board và gắn các thiết bị điện tử theo đúng vị trị trong Board
Bước 8: Chạy chương trình.


- Đối với bước 7 -> quá trình gắn các thiết bị điện tử theo đúng vị trị trong Board

	* Đối với Chuyển động bật đèn:

Bước 1: Kết nối Module cảm biến siêu âm HC-SR04 với mạch Arduino

	- Chân VCC kết nối nguồn 5V
	- Chân trigger kết nối với Digital 9 (D9)
	- Chân Echo kết nối với Digital 8 (D8)
	- Chân GND kết nối với GND

Bước 2: Kết nối Module relay với mạch Arduino:

	- Chân DC+ và chân DC- lần lượt lắp vào nguồn 3.5V và GND
	- Chân IN kết nối với Digital 2 (D2)
	- Chân COM kết nối với 1 dây của bóng đèn
	- NC nối với 1 bên của nguồn điện và nối 2 dây còn lại của bóng đèn và nguồn điện với nhau

Bước 3: Kết nối mạch Arduino với máy tính qua dây cáp USB và nạp code vào nguồn



	* Đối với chuyển động theo âm thanh:

Bước 1: Kết nối Module cảm biến âm thanh KY-037 với mạch Arduino

	- Chân VCC kết nối nguồn 5V
	- Chân Sensor (DO) kết nối với Digital 10 (D10)
	- Chân GND kết nối với GND

Bước 2: Kết nối Module relay với mạch Arduino

	- Chân DC+ và chân DC- lần lượt lắp vào nguồn 3.5V và GND
	- Chân IN kết nối với Digital 2 (D2)
	- Chân COM kết nối với 1 dây của bóng đèn
	- NC nối với 1 bên của nguồn điện và nối 2 dây còn lại của bóng đèn và nguồn điện với nhau

Bước 3: Kết nối mạch Arduino với máy tính qua dây cáp USB và nạp code vào nguồn


					Em Xin Chân Thành Cảm Ơn

