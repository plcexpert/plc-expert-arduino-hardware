/******************************************************************
  Project name : PlcX-DIO 1.4 - Example project 
  Author       : 
  Date Time    :
  Description  :   
  CPU BOARD    : Arduon Nano (Atmel328P)
  URL          : www.plc-expert.com
******************************************************************/
#include <PlcX_DIO14.h>
PlcX_DIO14 dio;

void setup()
{
}

void loop()
{ 
  if(dio.Input(10))
  {
    dio.Output(1, true);
  }
  else
  {
    dio.Output(1, false);
  }
   
  delay(100);
}
