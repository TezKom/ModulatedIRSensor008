/*
 *  © 2023 Peter Cole
 *  © 2024 Peter Cole
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
///        Set beamBreak to true if the transmitter and receiver
///        are facing each other in a beam break configuration
///        Default = false
#if (defined(ARDUINO_AVR_UNO)) && !__has_include("MySensors.h")
IRSensor* sensors[SENSOR_COUNT]={
  new IRSensor(2,3,false,false,false,20000,100),
  new IRSensor(4,5,false,false,false,20000,100),
  new IRSensor(6,7,false,false,false,20000,100),
  new IRSensor(8,9,false,false,false,20000,100),
  new IRSensor(10,11,false,false,false,20000,100),
  new IRSensor(12,13,false,false,false,20000,100),
  new IRSensor(A0,A1,false,false,false,20000,100),
  new IRSensor(A2,A3,false,false,false,20000,100),
};
#endif
