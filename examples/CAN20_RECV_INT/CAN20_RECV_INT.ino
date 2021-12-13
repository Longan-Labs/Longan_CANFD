// MCP2517/8 receive a frame under CAN2.0
// CAN FD Shield - https://www.longan-labs.cc/1030012.html
// CANBed FD - https://www.longan-labs.cc/1030009.html

#include <SPI.h>
#include "mcp2518fd_can.h"

// pinS for CAN-FD Shield, 
//const int SPI_CS_PIN = 9;
//const int CAN_INT_PIN = 2;

// pinS for CANBed FD
const int SPI_CS_PIN = 17;
const int CAN_INT_PIN = 7;

mcp2518fd CAN(SPI_CS_PIN); // Set CS pin
unsigned char flagRecv = 0;

void setup() {
    Serial.begin(115200);

    while (CAN_OK != CAN.begin(CANFD_500KBPS)) {             // init can bus : baudrate = 500k
        Serial.println("CAN init fail, retry...");
        delay(100);
    }
    attachInterrupt(digitalPinToInterrupt(CAN_INT_PIN), CAN_ISR, FALLING); // start interrupt
    Serial.println("CAN init ok!");
}

void CAN_ISR() {
    flagRecv = 1;
}

void loop() {
    unsigned char len = 0;
    unsigned char buf[8];

    if (flagRecv) 
    {         
        
        flagRecv = 0;
        CAN.readMsgBuf(&len, buf);            // You should call readMsgBuff before getCanId
        unsigned long id = CAN.getCanId();
        unsigned char ext = CAN.isExtendedFrame();
        
        Serial.print(ext ? "GET EXTENDED FRAME FROM ID: 0X" : "GET STANDARD FRAME FROM ID: 0X");
        Serial.println(id, HEX);
        
        Serial.print("Len = ");
        Serial.println(len);
            // print the data
        for (int i = 0; i < len; i++) {
            Serial.print(buf[i]); 
            Serial.print("\t");
        }
        Serial.println();
    }
}

// END FILE
