/*
 * can_signals_db.h
 *
 *  Created on: 1 дек. 2023 г.
 *      Author: VHEMaster
 */

#ifndef CAN_SIGNALS_DB_H_
#define CAN_SIGNALS_DB_H_

#include "can_signals.h"

extern sCanMessage g_can_message_id020_ECU;
extern sCanSignal g_can_signal_id020_ECU_AdcKnockVoltage;
extern sCanSignal g_can_signal_id020_ECU_AdcAirTemp;
extern sCanSignal g_can_signal_id020_ECU_AdcEngineTemp;
extern sCanSignal g_can_signal_id020_ECU_AdcManifoldAirPressure;
extern sCanSignal g_can_signal_id020_ECU_AdcThrottlePosition;
extern sCanSignal g_can_signal_id020_ECU_AdcReferenceVoltage;
extern sCanSignal g_can_signal_id020_ECU_AdcLambdaUR;
extern sCanSignal g_can_signal_id020_ECU_AdcLambdaUA;

extern sCanMessage g_can_message_id021_ECU;
extern sCanSignal g_can_signal_id021_ECU_KnockSensor;
extern sCanSignal g_can_signal_id021_ECU_KnockSensorFiltered;
extern sCanSignal g_can_signal_id021_ECU_KnockSensorDetonate;
extern sCanSignal g_can_signal_id021_ECU_KnockSaturation;
extern sCanSignal g_can_signal_id021_ECU_KnockAdvance;
extern sCanSignal g_can_signal_id021_ECU_KnockCountCy1;
extern sCanSignal g_can_signal_id021_ECU_KnockCountCy2;
extern sCanSignal g_can_signal_id021_ECU_KnockCountCy3;
extern sCanSignal g_can_signal_id021_ECU_KnockCountCy4;
extern sCanSignal g_can_signal_id021_ECU_KnockCount;

extern sCanMessage g_can_message_id022_ECU;
extern sCanSignal g_can_signal_id022_ECU_AirTemp;
extern sCanSignal g_can_signal_id022_ECU_EngineTemp;
extern sCanSignal g_can_signal_id022_ECU_CalculatedAirTemp;
extern sCanSignal g_can_signal_id022_ECU_ManifoldAirPressure;
extern sCanSignal g_can_signal_id022_ECU_ThrottlePosition;
extern sCanSignal g_can_signal_id022_ECU_RPM;

extern sCanMessage g_can_message_id023_ECU;
extern sCanSignal g_can_signal_id023_ECU_FuelRatio;
extern sCanSignal g_can_signal_id023_ECU_FuelRatioDiff;
extern sCanSignal g_can_signal_id023_ECU_LambdaValue;
extern sCanSignal g_can_signal_id023_ECU_LambdaTemperature;
extern sCanSignal g_can_signal_id023_ECU_LambdaHeaterVoltage;
extern sCanSignal g_can_signal_id023_ECU_ShortTermCorrection;
extern sCanSignal g_can_signal_id023_ECU_LongTermCorrection;
extern sCanSignal g_can_signal_id023_ECU_IdleCorrection;

extern sCanMessage g_can_message_id024_ECU;
extern sCanSignal g_can_signal_id024_ECU_Speed;
extern sCanSignal g_can_signal_id024_ECU_MassAirFlow;
extern sCanSignal g_can_signal_id024_ECU_CyclicAirFlow;
extern sCanSignal g_can_signal_id024_ECU_EffectiveVolume;
extern sCanSignal g_can_signal_id024_ECU_EngineLoad;
extern sCanSignal g_can_signal_id024_ECU_EstimatedPower;
extern sCanSignal g_can_signal_id024_ECU_EstimatedTorque;

extern sCanMessage g_can_message_id025_ECU;
extern sCanSignal g_can_signal_id025_ECU_WishFuelRatio;
extern sCanSignal g_can_signal_id025_ECU_IdleValvePosition;
extern sCanSignal g_can_signal_id025_ECU_IdleRegThrRPM;
extern sCanSignal g_can_signal_id025_ECU_WishIdleRPM;
extern sCanSignal g_can_signal_id025_ECU_WishIdleMassAirFlow;
extern sCanSignal g_can_signal_id025_ECU_WishIdleValvePosition;
extern sCanSignal g_can_signal_id025_ECU_WishIdleIgnitionAdvance;
extern sCanSignal g_can_signal_id025_ECU_IdleSpeedShift;

extern sCanMessage g_can_message_id026_ECU;
extern sCanSignal g_can_signal_id026_ECU_InjectionPhase;
extern sCanSignal g_can_signal_id026_ECU_InjectionPhaseDuration;
extern sCanSignal g_can_signal_id026_ECU_InjectionPulse;
extern sCanSignal g_can_signal_id026_ECU_InjectionDutyCycle;
extern sCanSignal g_can_signal_id026_ECU_IgnitionPulse;
extern sCanSignal g_can_signal_id026_ECU_InjectionLag;
extern sCanSignal g_can_signal_id026_ECU_TspsRelativePosition;
extern sCanSignal g_can_signal_id026_ECU_IgnitionAdvance;

extern sCanMessage g_can_message_id027_ECU;
extern sCanSignal g_can_signal_id027_ECU_EnrichmentSyncAmount;
extern sCanSignal g_can_signal_id027_ECU_EnrichmentAsyncAmount;
extern sCanSignal g_can_signal_id027_ECU_EnrichmentStartLoad;
extern sCanSignal g_can_signal_id027_ECU_EnrichmentLoadDerivative;
extern sCanSignal g_can_signal_id027_ECU_InjectionEnrichment;
extern sCanSignal g_can_signal_id027_ECU_IdleWishToRpmRelation;

extern sCanMessage g_can_message_id028_ECU;
extern sCanSignal g_can_signal_id028_ECU_DrivenKilometers;
extern sCanSignal g_can_signal_id028_ECU_FuelConsumption;
extern sCanSignal g_can_signal_id028_ECU_FuelConsumed;
extern sCanSignal g_can_signal_id028_ECU_FuelHourly;

extern sCanMessage g_can_message_id029_ECU;
extern sCanSignal g_can_signal_id029_ECU_LambdaValid;
extern sCanSignal g_can_signal_id029_ECU_OilSensor;
extern sCanSignal g_can_signal_id029_ECU_FanForceSwitch;
extern sCanSignal g_can_signal_id029_ECU_HandbrakeSensor;
extern sCanSignal g_can_signal_id029_ECU_ChargeSensor;
extern sCanSignal g_can_signal_id029_ECU_ClutchSensor;
extern sCanSignal g_can_signal_id029_ECU_IgnSensor;
extern sCanSignal g_can_signal_id029_ECU_FuelPumpRelay;
extern sCanSignal g_can_signal_id029_ECU_FanRelay;
extern sCanSignal g_can_signal_id029_ECU_CheckEngine;
extern sCanSignal g_can_signal_id029_ECU_StarterRelay;
extern sCanSignal g_can_signal_id029_ECU_FanSwitch;
extern sCanSignal g_can_signal_id029_ECU_IgnOutput;
extern sCanSignal g_can_signal_id029_ECU_StartAllowed;
extern sCanSignal g_can_signal_id029_ECU_IsRunning;
extern sCanSignal g_can_signal_id029_ECU_IsCheckEngine;
extern sCanSignal g_can_signal_id029_ECU_CylinderIgnitionBitmask;
extern sCanSignal g_can_signal_id029_ECU_CylinderInjectionBitmask;
extern sCanSignal g_can_signal_id029_ECU_PowerVoltage;
extern sCanSignal g_can_signal_id029_ECU_IdleFlag;
extern sCanSignal g_can_signal_id029_ECU_IdleCorrFlag;
extern sCanSignal g_can_signal_id029_ECU_IdleEconFlag;
extern sCanSignal g_can_signal_id029_ECU_SwitchPosition;
extern sCanSignal g_can_signal_id029_ECU_CurrentTable;
extern sCanSignal g_can_signal_id029_ECU_InjectorChannel;

extern sCanMessage g_can_message_id010_ETC;
extern sCanSignal g_can_signal_id010_ETC_Tps1;
extern sCanSignal g_can_signal_id010_ETC_Tps2;
extern sCanSignal g_can_signal_id010_ETC_Pedal1;
extern sCanSignal g_can_signal_id010_ETC_Pedal2;

extern sCanMessage g_can_message_id011_ETC;
extern sCanSignal g_can_signal_id011_ETC_Rsvd5;
extern sCanSignal g_can_signal_id011_ETC_Rsvd6;
extern sCanSignal g_can_signal_id011_ETC_ReferenceVoltage;
extern sCanSignal g_can_signal_id011_ETC_PowerVoltage;

extern sCanMessage g_can_message_id012_ETC;
extern sCanSignal g_can_signal_id012_ETC_ThrottlePosition;
extern sCanSignal g_can_signal_id012_ETC_TargetPosition;
extern sCanSignal g_can_signal_id012_ETC_DefaultPosition;
extern sCanSignal g_can_signal_id012_ETC_PedalPosition;
extern sCanSignal g_can_signal_id012_ETC_Tps1ErrorFlag;
extern sCanSignal g_can_signal_id012_ETC_Tps2ErrorFlag;
extern sCanSignal g_can_signal_id012_ETC_Pedal1ErrorFlag;
extern sCanSignal g_can_signal_id012_ETC_Pedal2ErrorFlag;
extern sCanSignal g_can_signal_id012_ETC_TpsMismatchFlag;
extern sCanSignal g_can_signal_id012_ETC_PedalMismatchFlag;
extern sCanSignal g_can_signal_id012_ETC_MotorErrorFlag;
extern sCanSignal g_can_signal_id012_ETC_StandaloneFlag;

extern sCanMessage g_can_message_id013_ETC;
extern sCanSignal g_can_signal_id013_ETC_InCruizeStart;
extern sCanSignal g_can_signal_id013_ETC_InCruizeStop;
extern sCanSignal g_can_signal_id013_ETC_InBrake;
extern sCanSignal g_can_signal_id013_ETC_InRsvd4;
extern sCanSignal g_can_signal_id013_ETC_InRsvd5;
extern sCanSignal g_can_signal_id013_ETC_InRsvd6;
extern sCanSignal g_can_signal_id013_ETC_OutCruizeG;
extern sCanSignal g_can_signal_id013_ETC_OutCruizeR;
extern sCanSignal g_can_signal_id013_ETC_OutRsvd3;
extern sCanSignal g_can_signal_id013_ETC_OutRsvd4;
extern sCanSignal g_can_signal_id013_ETC_OutCruizeGState;
extern sCanSignal g_can_signal_id013_ETC_OutCruizeRState;
extern sCanSignal g_can_signal_id013_ETC_OutRsvd3State;
extern sCanSignal g_can_signal_id013_ETC_OutRsvd4State;
extern sCanSignal g_can_signal_id013_ETC_OutputsAvailability;
extern sCanSignal g_can_signal_id013_ETC_MotorErrorFlag;
extern sCanSignal g_can_signal_id013_ETC_MotorTemperature;
extern sCanSignal g_can_signal_id013_ETC_MotorOpenLoad;
extern sCanSignal g_can_signal_id013_ETC_MotorShortToGND;
extern sCanSignal g_can_signal_id013_ETC_MotorShortToSupply;
extern sCanSignal g_can_signal_id013_ETC_MotorSupplyFailure;
extern sCanSignal g_can_signal_id013_ETC_MotorAlwaysHigh;
extern sCanSignal g_can_signal_id013_ETC_MotorAvailability;
extern sCanSignal g_can_signal_id013_ETC_AdcErrorFlag;
extern sCanSignal g_can_signal_id013_ETC_CommErrorFlag;
extern sCanSignal g_can_signal_id013_ETC_CanInitFlag;
extern sCanSignal g_can_signal_id013_ETC_CanTestFlag;
extern sCanSignal g_can_signal_id013_ETC_AdaptationCompletedFlag;

extern sCanMessage g_can_message_id018_ETC_ECU;
extern sCanSignal g_can_signal_id018_ETC_ECU_ConfigApplyIdAck;

extern sCanMessage g_can_message_id019_ETC_ECU;
extern sCanSignal g_can_signal_id019_ETC_ECU_Tps1Min;
extern sCanSignal g_can_signal_id019_ETC_ECU_Tps1Max;
extern sCanSignal g_can_signal_id019_ETC_ECU_Tps1Limit;
extern sCanSignal g_can_signal_id019_ETC_ECU_Rsvd;

extern sCanMessage g_can_message_id01A_ETC_ECU;
extern sCanSignal g_can_signal_id01A_ETC_ECU_Tps2Min;
extern sCanSignal g_can_signal_id01A_ETC_ECU_Tps2Max;
extern sCanSignal g_can_signal_id01A_ETC_ECU_Tps2Limit;
extern sCanSignal g_can_signal_id01A_ETC_ECU_Rsvd;

extern sCanMessage g_can_message_id01B_ETC_ECU;
extern sCanSignal g_can_signal_id01B_ETC_ECU_Pedal1Min;
extern sCanSignal g_can_signal_id01B_ETC_ECU_Pedal1Max;
extern sCanSignal g_can_signal_id01B_ETC_ECU_Pedal2Min;
extern sCanSignal g_can_signal_id01B_ETC_ECU_Pedal2Max;

extern sCanMessage g_can_message_id01C_ETC_ECU;
extern sCanSignal g_can_signal_id01C_ETC_ECU_PidP;
extern sCanSignal g_can_signal_id01C_ETC_ECU_PidI;
extern sCanSignal g_can_signal_id01C_ETC_ECU_PidD;
extern sCanSignal g_can_signal_id01C_ETC_ECU_TimPsc;
extern sCanSignal g_can_signal_id01C_ETC_ECU_Rsvd;

extern sCanMessage g_can_message_id080_ECU_ETC;
extern sCanSignal g_can_signal_id080_ECU_ETC_StandaloneMode;
extern sCanSignal g_can_signal_id080_ECU_ETC_MotorActive;
extern sCanSignal g_can_signal_id080_ECU_ETC_TargetPosition;
extern sCanSignal g_can_signal_id080_ECU_ETC_MotorErrorReset;
extern sCanSignal g_can_signal_id080_ECU_ETC_MotorFullCloseRequest;
extern sCanSignal g_can_signal_id080_ECU_ETC_AdaptationRequest;
extern sCanSignal g_can_signal_id080_ECU_ETC_Rsvd1;
extern sCanSignal g_can_signal_id080_ECU_ETC_Rsvd2;
extern sCanSignal g_can_signal_id080_ECU_ETC_OutCruizeR;
extern sCanSignal g_can_signal_id080_ECU_ETC_OutCruizeG;
extern sCanSignal g_can_signal_id080_ECU_ETC_OutRsvd3;
extern sCanSignal g_can_signal_id080_ECU_ETC_OutRsvd4;

extern sCanMessage g_can_message_id088_ECU_ETC;
extern sCanSignal g_can_signal_id088_ECU_ETC_ConfigIdRequest;

extern sCanMessage g_can_message_id089_ECU_ETC;
extern sCanSignal g_can_signal_id089_ECU_ETC_Tps1Min;
extern sCanSignal g_can_signal_id089_ECU_ETC_Tps1Max;
extern sCanSignal g_can_signal_id089_ECU_ETC_Tps1Limit;
extern sCanSignal g_can_signal_id089_ECU_ETC_Rsvd;

extern sCanMessage g_can_message_id08A_ECU_ETC;
extern sCanSignal g_can_signal_id08A_ECU_ETC_Tps2Min;
extern sCanSignal g_can_signal_id08A_ECU_ETC_Tps2Max;
extern sCanSignal g_can_signal_id08A_ECU_ETC_Tps2Limit;
extern sCanSignal g_can_signal_id08A_ECU_ETC_Rsvd;

extern sCanMessage g_can_message_id08B_ECU_ETC;
extern sCanSignal g_can_signal_id08B_ECU_ETC_Pedal1Min;
extern sCanSignal g_can_signal_id08B_ECU_ETC_Pedal1Max;
extern sCanSignal g_can_signal_id08B_ECU_ETC_Pedal2Min;
extern sCanSignal g_can_signal_id08B_ECU_ETC_Pedal2Max;

extern sCanMessage g_can_message_id08C_ECU_ETC;
extern sCanSignal g_can_signal_id08C_ECU_ETC_PidP;
extern sCanSignal g_can_signal_id08C_ECU_ETC_PidI;
extern sCanSignal g_can_signal_id08C_ECU_ETC_PidD;
extern sCanSignal g_can_signal_id08C_ECU_ETC_TimPsc;
extern sCanSignal g_can_signal_id08C_ECU_ETC_Rsvd;

extern sCanMessage g_can_message_id110_LOG_ECU;
extern sCanSignal g_can_signal_id110_LOG_ECU_Unique;

#endif /* CAN_SIGNALS_DB_H_ */
