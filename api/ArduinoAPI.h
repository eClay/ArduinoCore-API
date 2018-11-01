/*
  Arduino API main include
  Copyright (c) 2016 Arduino LLC. All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#ifndef ARDUINO_API_H
#define ARDUINO_API_H

// version 1.0.0
#define ARDUINO_API_VERSION 10000

#include "WTypes.h"

#include "WAnalog.h"
#include "WCharacter.h"
#include "WDelay.h"
#include "WDigital.h"
#include "WInterrupts.h"
#include "WMath.h"
#include "WMemory.h"
#include "WPulse.h"
#include "WRandom.h"
#include "WShift.h"
#include "WTime.h"
#include "WTone.h"

#include "Binary.h"

#ifdef __cplusplus
#include "Client.h"
#include "HardwareI2C.h"
#include "HardwareSerial.h"
#include "Interrupts.h"
#include "IPAddress.h"
#include "Print.h"
#include "Printable.h"
#include "PluggableUSB.h"
#include "Server.h"
#include "String.h"
#include "Stream.h"
#include "Udp.h"
#include "USBAPI.h"
#endif

#endif
