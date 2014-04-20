/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */

#pragma once

/**
 * @file
 * This file gets you access to the STM32 ADC peripheral.
 */

// adc depends on rcc, dma, meta-programming utils, smart ptr

#include "config/rcc.h"
#include "config/dma.h"
#include "config/smartptr.h"
#include "util/Meta.h"

// peripheral includes

#include "adc/AdcEventSource.h"

#if defined(STM32PLUS_F0)

  #include "adc/f0/Adc.h"
  #include "adc/f0/AdcPeripheral.h"
  #include "adc/Adc1.h"

#elif defined(STM32PLUS_F4)

  #include "adc/f4/Adc.h"
  #include "adc/f4/AdcPeripheral.h"
  #include "adc/Adc1.h"
  #include "adc/Adc2.h"
  #include "adc/Adc3.h"

#endif

#define USE_ADC_INTERRUPT

// feature includes

#include "adc/features/AdcFeatureBase.h"

#include "adc/features/AdcResolutionFeature.h"
#include "adc/features/AdcContinuousModeFeature.h"
#include "adc/features/AdcTriggerFeature.h"

// device specific feature includes

#if defined(STM32PLUS_F0)

  #include "adc/features/f0/AdcChannelGpioInitialiser.h"

  #include "adc/features/f0/AdcClockModeFeature.h"
  #include "adc/features/f0/AdcRegularChannelFeature.h"
  #include "adc/features/f0/AdcDownwardChannelOrderFeature.h"
  #include "adc/features/f0/AdcBatteryVoltageFeature.h"
  #include "adc/features/f0/AdcInternalReferenceVoltageFeature.h"
  #include "adc/features/f0/AdcTemperatureSensorFeature.h"
  #include "adc/features/f0/AdcInterruptFeature.h"

#elif defined(STM32PLUS_F4)

  #include "adc/features/f4/AdcChannelGpioInitialiser.h"

  #include "adc/features/f4/AdcClockPrescalerFeature.h"
  #include "adc/features/f4/AdcMultiFeature.h"
  #include "adc/features/f4/AdcDualFeature.h"
  #include "adc/features/f4/AdcTripleFeature.h"

  #include "adc/features/f4/AdcRegularChannelFeature.h"
  #include "adc/features/f4/AdcScanModeFeature.h"
  #include "adc/features/f4/AdcInterruptFeature.h"
  #include "adc/features/f4/AdcInjectedChannelFeatureBase.h"
  #include "adc/features/f4/AdcInjectedChannelFeature.h"
  #include "adc/features/f4/AdcInjectedTriggerFeature.h"
  #include "adc/features/f4/AdcBatteryVoltageFeature.h"
  #include "adc/features/f4/AdcInternalReferenceVoltageFeature.h"
  #include "adc/features/f4/AdcTemperatureSensorFeature.h"

#endif

