/*
 * failures.h
 *
 *  Created on: 24 мар. 2022 г.
 *      Author: VHEMaster
 */

#ifndef FAILURES_H_
#define FAILURES_H_

typedef enum {
  CheckNoFailure = 0,
  CheckFlashLoadFailure,
  CheckFlashSaveFailure,
  CheckFlashInitFailure,
  CheckBkpsramSaveFailure,
  CheckBkpsramLoadFailure,
  CheckSensorMapFailure,
  CheckSensorKnockFailure,
  CheckSensorCspsFailure,
  CheckSensorTspsFailure,
  CheckSensorAirTempFailure,
  CheckSensorEngineTempFailure,
  CheckSensorTPSFailure,
  CheckSensorRefVoltageFailure,
  CheckSensorPwrVoltageFailure,
  CheckSensorLambdaFailure,
  CheckOutputDriverFailure,
  CheckCanInitFailure,
  CheckCanTestFailure,
  CheckKlineProtocolFailure,
  CheckKlineLoopbackFailure,
  CheckInjector4OpenCircuit,
  CheckInjector4ShortToBatOrOverheat,
  CheckInjector4ShortToGND,
  CheckInjector3OpenCircuit,
  CheckInjector3ShortToBatOrOverheat,
  CheckInjector3ShortToGND,
  CheckInjector2OpenCircuit,
  CheckInjector2ShortToBatOrOverheat,
  CheckInjector2ShortToGND,
  CheckInjector1OpenCircuit,
  CheckInjector1ShortToBatOrOverheat,
  CheckInjector1ShortToGND,
  CheckInjectorCommunicationFailure,
  CheckCheckEngineOpenCirtuit,
  CheckCheckEngineShortToBatOrOverheat,
  CheckCheckEngineShortToGND,
  CheckSpeedMeterOpenCirtuit,
  CheckSpeedMeterShortToBatOrOverheat,
  CheckSpeedMeterShortToGND,
  CheckTachometerOpenCirtuit,
  CheckTachometerShortToBatOrOverheat,
  CheckTachometerShortToGND,
  CheckFuelPumpOpenCirtuit,
  CheckFuelPumpShortToBatOrOverheat,
  CheckFuelPumpShortToGND,
  CheckOutputs1CommunicationFailure,
  CheckOutIgnOpenCirtuit,
  CheckOutIgnShortToBatOrOverheat,
  CheckOutIgnShortToGND,
  CheckFanSwitchOpenCirtuit,
  CheckFanSwitchShortToBatOrOverheat,
  CheckFanSwitchShortToGND,
  CheckStarterRelayOpenCirtuit,
  CheckStarterRelayShortToBatOrOverheat,
  CheckStarterRelayShortToGND,
  CheckFanRelayOpenCirtuit,
  CheckFanRelayShortToBatOrOverheat,
  CheckFanRelayShortToGND,
  CheckOutputs2CommunicationFailure,
  CheckIdleValveFailure,
  CheckIdleValveDriverFailure,
  CheckInjectionUnderflow,
  CheckAdcFailure,
  CheckLambdaCommunicationFailure,
  CheckLambdaVMShortToBat,
  CheckLambdaVMLowBattery,
  CheckLambdaVMShortToGND,
  CheckLambdaUNShortToBat,
  CheckLambdaUNLowBattery,
  CheckLambdaUNShortToGND,
  CheckLambdaIAIPShortToBat,
  CheckLambdaIAIPLowBattery,
  CheckLambdaIAIPShortToGND,
  CheckLambdaDIAHGDShortToBat,
  CheckLambdaDIAHGDOpenCirtuit,
  CheckLambdaDIAHGDShortToGND,
  CheckLambdaTemperatureFailure,
  CheckLambdaHeaterFailure,
  CheckKnockDetonationFound,
  CheckKnockLowNoiseLevel,
  CheckTspsDesynchronized,
  CheckHardFaultException,
  CheckSensorMapTpsMismatch,
  CheckEngineLeanMixture,
  CheckEngineRichMixture,
  CheckEngineLeanIdleMixture,
  CheckEngineRichIdleMixture,
  CheckNoOilPressure,
  CheckNoBatteryCharge,
  CheckBootLoaderMode,
}eCheckDataErrorCode;

extern const char * const gCheckDataErrorString[];

#endif /* FAILURES_H_ */
