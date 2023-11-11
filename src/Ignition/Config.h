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

// Channel Config
#define NUM_CHANNELS       8
#define NUM_SELECTS        2

// channel group selectors
#define SELECT_PIN_0       3
#define SELECT_PIN_1       4

// channel group relay controls
#define CTRL_PIN_0         5
#define CTRL_PIN_1         6
#define CTRL_PIN_2         7
#define CTRL_PIN_3         8

// channel group continuity sensor inputs
#define SENS_PIN_0        A1
#define SENS_PIN_1        A2
#define SENS_PIN_2        A0
#define SENS_PIN_3        A3

// Radio Config
#define RF_SS             10  // Radio SPI select pin
#define RF_FLAG            2  // Radio event SPI request interrupt pin
#define NETWORK_ID         0  // Wireless network ID (0-255)
#define IGNITION_ADDR      2  // Ignition Box wireless network address (1-255)
#define CONTROLLER_ADDR    3  // Controller Box wireless network address (1-255)
#define ENCRYPT_KEY        "2CLOSE2THEROCKET"  // 16 character Packet encryption key
