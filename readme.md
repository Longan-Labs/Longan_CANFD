![](https://www.longan-labs.cc/media/catalog/category/Categories-32.png)

# Longan Labs CAN FD Library

Arduino library for MCP2517/MCP2518, it's available for most of theArduino boards, we test it with Arduino UNO, Leonardo, Mega as well as Zero.

With this library, you can,

1. Send a CAN2.0 frame
2. Receive a CAN2.0 frame
3. Send a CAN FD frame
4. Send a CAN FD frame
5. Set the masks and filters, there're 32 masks and filters. 

## Installation

1. [Download the library](https://github.com/Longan-Labs/Longan_CANFD/archive/refs/heads/master.zip)
2. Extract the zip file
3. In the Arduino IDe, navigate to Sketch > Include Library > Add .ZIP Library

## CAN Baudrate

### CAN2.0

- CAN_5KBPS,
- CAN_10KBPS
- CAN_20KBPS
- CAN_25KBPS
- CAN_31K25BPS
- CAN_33KBPS  
- CAN_40KBPS  
- CAN_50KBPS  
- CAN_80KBPS  
- CAN_83K3BPS 
- CAN_95KBPS  
- CAN_100KBPS 
- CAN_125KBPS 
- CAN_200KBPS 
- CAN_250KBPS 
- CAN_500KBPS 
- CAN_666KBPS 
- CAN_800KBPS 
- CAN_1000KBPS

### CAN FD

- CAN_125K_500K
- CAN_250K_500K
- CAN_250K_750K
- CAN_250K_1M
- CAN_250K_1M5
- CAN_250K_2M
- CAN_250K_3M
- CAN_250K_4M
- CAN_500K_1M
- CAN_500K_2M
- CAN_500K_3M
- CAN_500K_4M
- CAN_1000K_4M

## Functions

- begin()
- init_Mask()
- init_filt()
- checkReceive()
- readMsgBufID()
- readMsgBuf()
- getCanId()
- sendMsgBuf()
- isRemoteRequest()
- isExtendedFrame()

## Respository Contents

* [**/examples**](./examples) - Example sketches for the library (.ino). Run these from the Arduino IDE.
* [**/src**](./src) - Source files for the library (.cpp, .h).
* [**keywords.txt**](./keywords.txt) - Keywords from this library that will be highlighted in the Arduino IDE.
* [**library.properties**](./library.properties) - General library properties for the Arduino package manager.

## License Information

Please see [LICENSE](./LICENSE) for more details.

## Dev board by Longan Labs

If you need a Dev board, plese try,

[CAN FD Shield for Arduino](https://www.longan-labs.cc/1030012.html)

[![](https://www.longan-labs.cc/media/catalog/product/cache/ecd051e9670bd57df35c8f0b122d8aea/1/0/1030012-2_2.jpg)](https://www.longan-labs.cc/1030012.html)

[CANBed FD](https://www.longan-labs.cc/1030009.html)

[![](https://www.longan-labs.cc/media/catalog/product/cache/ecd051e9670bd57df35c8f0b122d8aea/1/0/1030009-1.jpg)](https://www.longan-labs.cc/1030009.html)

## Contact us

If you have any question, please feel free to contact [support@longan-labs.cc](support@longan-labs.cc)


[![Analytics](https://ga-beacon.appspot.com/UA-101965714-1/Longan_CANFD)](https://github.com/igrigorik/ga-beacon)
