/******************************************************************
  Project name : PLC-DIO 1.3 - Example project 
  Author       : 
  Date Time    :
  Description  :   
  CPU BOARD    : Arduon Uno (Atmel328P)
  URL          : www.plc-expert.com
******************************************************************/
#include <PlcX_DIO13.h>
PlcX_DIO13 dio;

void setup()
{
}

void loop()
{ 
  dio.Output(1, true);
  delay(1000);
  dio.Output(1, false);

  dio.Output(5, dio.Input(3));  
  delay(500);
}
