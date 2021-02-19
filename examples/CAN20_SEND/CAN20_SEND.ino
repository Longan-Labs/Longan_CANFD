// MCP2517/8 send a CAN frame

#include <SPI.h>
#include "mcp2518fd_can.h"

// pin for CAN-FD Shield
const int SPI_CS_PIN = 9;
const int CAN_INT_PIN = 2;

// pin for CANBed FD
// const int SPI_CS_PIN = 17;
// const int CAN_INT_PIN = 7;

mcp2518fd CAN(SPI_CS_PIN); // Set CS pin

void setup() {
    Serial.begin(115200);
    while(!Serial){};

    while (CAN_OK != CAN.begin(CAN_500KBPS)) {             // init can bus : baudrate = 500k
        Serial.println("CAN init fail, retry...");
        delay(100);
    }
    Serial.println("CAN init ok!");
}

unsigned char stmp[8] = {0, 1, 2, 3, 4, 5, 6, 7};

void loop() {

    CAN.sendMsgBuf(0x01, 0, 8, stmp);
    delay(10);
    CAN.sendMsgBuf(0x04, 0, 8, stmp);
    delay(100);                       // send data per 100ms
    Serial.println("CAN BUS sendMsgBuf ok!");
}

// END FILE
