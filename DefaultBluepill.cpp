/*
 *  © 2023 Peter Cole
 *
 *  This is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  It is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this code.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <Arduino.h>
#include "DeviceFunctions.h"

/// @brief Configuration of the IR sensors in this format:
///        {transmitPin, receivePin, beamBreak}
///        Set beamBreak to true if the transmitter and receiver are
///        facing each other in a beam break configuration
///        Default = false
#if defined(ARDUINO_BLUEPILL_F103C8) && !__has_include("MySensors.h")
IRSensor* sensors[SENSOR_COUNT]={
  new IRSensor(PC13,PC14,true,false,false,20000,100),
  new IRSensor(PC15,PA0,false,false,false,20000,100),
  new IRSensor(PA1,PA2,true,false,false,20000,100),
  new IRSensor(PA3,PA4,false,false,false,20000,100),
  new IRSensor(PA5,PA6,true,false,false,20000,100),
  new IRSensor(PA7,PB0,false,false,false,20000,100),
  new IRSensor(PB1,PB10,true,false,false,20000,100),
  new IRSensor(PB11,PB9,false,false,false,20000,100),
  new IRSensor(PB8,PB5,true,false,false,20000,100),
  new IRSensor(PB4,PB3,false,false,false,20000,100),
  new IRSensor(PA15,PA10,true,false,false,20000,100),
  new IRSensor(PA9,PA8,false,false,false,20000,100),
  new IRSensor(PB15,PB14,true,false,false,20000,100),
  new IRSensor(PB13,PB12,false,false,false,20000,100),
};
#endif
