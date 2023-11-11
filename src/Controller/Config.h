/*
	Config.h
	Header file that defines the top level configuration settings of the microcontroller.
	
	:version: 1.0
	:organization: University of North Dakota Advanced Rocketry Club
	:address: 
	:authors: Neko'z
	:date: November 11, 2023
*/

// Serial Pins
#define SERIAL_RX          0  // Debug serial recieve pin
#define SERIAL_TX          1  // Debug serial send pin

// SPI Pins
#define SPI_MOSI          11  // SPI master out slave in pin
#define SPI_MISO          12  // SPI master in slave out pin
#define SPI_SCK           13  // SPI clock pin

// HID Pins
#define ROT_ENCODER_0     A0  // Rotary encoder data pin 1
#define ROT_ENCODER_1     A1  // Rotary encoder data pin 2
#define ROT_ENCODER_BTN   A2  // Rotary encoder button pin
#define BTN_SECONDARY     A4  // Yellow button pin
#define BTN_PRIMARY       A5  // Red button pin
#define ARM_SWITCH         8  // Arm rocker switch pin

// Temperature Sensor pin
#define TEMP_SENS         A3  // Temperature sensor pin

// LCD Settings
#define LCD_SS            10  // LCD SPI select pin

// Radio Config
#define RF_SS              9  // Radio SPI select pin
#define RF_FLAG            2  // Radio event SPI request interrupt pin
#define NETWORK_ID         0  // Wireless network ID (0-255)
#define IGNITION_ADDR      2  // Ignition Box wireless network address (1-255)
#define CONTROLLER_ADDR    3  // Controller Box wireless network address (1-255)
#define ENCRYPT_KEY        "2CLOSE2THEROCKET"  // 16 character Packet encryption key

// SD Card Config
#define SD_SS              4  // SD card SPI select pin

// MP3 Sheild Config
#define MP3_DCS            6  // MP3 shield VS1053 SPI data select pin
#define MP3_MCS            7  // MP3 shield VS1053 SPI chip select pin
#define MP3_DREQ           3  // MP3 shield VS1053 SPI data request interrupt pin
