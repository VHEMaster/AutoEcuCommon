/*
 * can_signals_db.c
 *
 *  Created on: 1 дек. 2023 г.
 *      Author: VHEMaster
 */

#include "can_signals_db.h"

sCanMessage g_can_message_id020_ECU = { 0x020, 8 }; // ADC

sCanSignal g_can_signal_id020_ECU_AdcKnockVoltage = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.023529f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 8
};

sCanSignal g_can_signal_id020_ECU_AdcAirTemp = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.023529f,
    .Offset = 0,
    .StartBit = 8,
    .LengthBit = 8
};

sCanSignal g_can_signal_id020_ECU_AdcEngineTemp = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.023529f,
    .Offset = 0,
    .StartBit = 16,
    .LengthBit = 8
};

sCanSignal g_can_signal_id020_ECU_AdcManifoldAirPressure = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.023529f,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 8
};

sCanSignal g_can_signal_id020_ECU_AdcThrottlePosition = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.023529f,
    .Offset = 0,
    .StartBit = 32,
    .LengthBit = 8
};

sCanSignal g_can_signal_id020_ECU_AdcReferenceVoltage = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.023529f,
    .Offset = 0,
    .StartBit = 40,
    .LengthBit = 8
};

sCanSignal g_can_signal_id020_ECU_AdcLambdaUR = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.023529f,
    .Offset = 0,
    .StartBit = 48,
    .LengthBit = 8
};

sCanSignal g_can_signal_id020_ECU_AdcLambdaUA = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.023529f,
    .Offset = 0,
    .StartBit = 56,
    .LengthBit = 8
};

sCanMessage g_can_message_id021_ECU = { 0x021, 8 }; // Knock

sCanSignal g_can_signal_id021_ECU_KnockSensor = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.023529f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 8
};

sCanSignal g_can_signal_id021_ECU_KnockSensorFiltered = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.023529f,
    .Offset = 0,
    .StartBit = 8,
    .LengthBit = 8
};

sCanSignal g_can_signal_id021_ECU_KnockSensorDetonate = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.023529f,
    .Offset = 0,
    .StartBit = 16,
    .LengthBit = 8
};

sCanSignal g_can_signal_id021_ECU_KnockSaturation = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.024414f,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 12
};

sCanSignal g_can_signal_id021_ECU_KnockAdvance = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.5f,
    .Offset = 0,
    .StartBit = 36,
    .LengthBit = 4
};

sCanSignal g_can_signal_id021_ECU_KnockCountCy1 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 40,
    .LengthBit = 4
};

sCanSignal g_can_signal_id021_ECU_KnockCountCy2 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 44,
    .LengthBit = 4
};

sCanSignal g_can_signal_id021_ECU_KnockCountCy3 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 48,
    .LengthBit = 4
};

sCanSignal g_can_signal_id021_ECU_KnockCountCy4 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 52,
    .LengthBit = 4
};

sCanSignal g_can_signal_id021_ECU_KnockCount = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 56,
    .LengthBit = 8
};


sCanMessage g_can_message_id022_ECU = { 0x022, 8 }; // Parameters

sCanSignal g_can_signal_id022_ECU_AirTemp = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.2f,
    .Offset = -50,
    .StartBit = 0,
    .LengthBit = 10
};

sCanSignal g_can_signal_id022_ECU_EngineTemp = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.2f,
    .Offset = -50,
    .StartBit = 10,
    .LengthBit = 10
};

sCanSignal g_can_signal_id022_ECU_CalculatedAirTemp = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.2f,
    .Offset = -50,
    .StartBit = 20,
    .LengthBit = 10
};

sCanSignal g_can_signal_id022_ECU_ManifoldAirPressure = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 30,
    .Offset = 0,
    .StartBit = 30,
    .LengthBit = 12
};

sCanSignal g_can_signal_id022_ECU_ThrottlePosition = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.1f,
    .Offset = 0,
    .StartBit = 42,
    .LengthBit = 10
};

sCanSignal g_can_signal_id022_ECU_RPM = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 2.4414f,
    .Offset = 0,
    .StartBit = 52,
    .LengthBit = 12
};

sCanMessage g_can_message_id023_ECU = { 0x023, 8 }; // Lambda & Correction

sCanSignal g_can_signal_id023_ECU_FuelRatio = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.1f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 8
};

sCanSignal g_can_signal_id023_ECU_FuelRatioDiff = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0078125f,
    .Offset = 0,
    .StartBit = 8,
    .LengthBit = 8
};

sCanSignal g_can_signal_id023_ECU_LambdaValue = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0078125f,
    .Offset = 0,
    .StartBit = 16,
    .LengthBit = 8
};

sCanSignal g_can_signal_id023_ECU_LambdaTemperature = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 4,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 8
};

sCanSignal g_can_signal_id023_ECU_LambdaHeaterVoltage = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.06f,
    .Offset = 0,
    .StartBit = 32,
    .LengthBit = 8
};

sCanSignal g_can_signal_id023_ECU_ShortTermCorrection = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.00390625,
    .Offset = -0.5f,
    .StartBit = 40,
    .LengthBit = 8
};

sCanSignal g_can_signal_id023_ECU_LongTermCorrection = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.00390625,
    .Offset = -0.5f,
    .StartBit = 48,
    .LengthBit = 8
};

sCanSignal g_can_signal_id023_ECU_IdleCorrection = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.00390625,
    .Offset = -0.5f,
    .StartBit = 56,
    .LengthBit = 8
};


sCanMessage g_can_message_id024_ECU = { 0x024, 8 }; // Air and Power

sCanSignal g_can_signal_id024_ECU_Speed = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.25f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 10
};

sCanSignal g_can_signal_id024_ECU_MassAirFlow = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.25f,
    .Offset = 0,
    .StartBit = 10,
    .LengthBit = 11
};

sCanSignal g_can_signal_id024_ECU_CyclicAirFlow = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.4f,
    .Offset = 0,
    .StartBit = 21,
    .LengthBit = 11
};

sCanSignal g_can_signal_id024_ECU_EffectiveVolume = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 10.0f,
    .Offset = 0,
    .StartBit = 32,
    .LengthBit = 8
};

sCanSignal g_can_signal_id024_ECU_EngineLoad = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.5f,
    .Offset = 0,
    .StartBit = 40,
    .LengthBit = 8
};

sCanSignal g_can_signal_id024_ECU_EstimatedPower = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 48,
    .LengthBit = 8
};

sCanSignal g_can_signal_id024_ECU_EstimatedTorque = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 56,
    .LengthBit = 8
};


sCanMessage g_can_message_id025_ECU = { 0x025, 8 }; // Ignition and Idle

sCanSignal g_can_signal_id025_ECU_WishFuelRatio = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.1f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 8
};

sCanSignal g_can_signal_id025_ECU_IdleValvePosition = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 8,
    .LengthBit = 8
};

sCanSignal g_can_signal_id025_ECU_IdleRegThrRPM = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 12,
    .Offset = 0,
    .StartBit = 16,
    .LengthBit = 8
};

sCanSignal g_can_signal_id025_ECU_WishIdleRPM = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 12,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 8
};

sCanSignal g_can_signal_id025_ECU_WishIdleMassAirFlow = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.25f,
    .Offset = 0,
    .StartBit = 32,
    .LengthBit = 8
};

sCanSignal g_can_signal_id025_ECU_WishIdleValvePosition = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 40,
    .LengthBit = 8
};

sCanSignal g_can_signal_id025_ECU_WishIdleIgnitionAdvance = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.3f,
    .Offset = -20,
    .StartBit = 48,
    .LengthBit = 8
};

sCanSignal g_can_signal_id025_ECU_IdleSpeedShift = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.12f,
    .Offset = 0,
    .StartBit = 56,
    .LengthBit = 8
};


sCanMessage g_can_message_id026_ECU = { 0x026, 8 }; // Injection and Ignition

sCanSignal g_can_signal_id026_ECU_InjectionPhase = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 2.8125f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 8
};

sCanSignal g_can_signal_id026_ECU_InjectionPhaseDuration = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 2.8125f,
    .Offset = 0,
    .StartBit = 8,
    .LengthBit = 8
};

sCanSignal g_can_signal_id026_ECU_InjectionPulse = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 50,
    .Offset = 0,
    .StartBit = 16,
    .LengthBit = 10
};

sCanSignal g_can_signal_id026_ECU_InjectionDutyCycle = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.016f,
    .Offset = 0,
    .StartBit = 26,
    .LengthBit = 6
};

sCanSignal g_can_signal_id026_ECU_IgnitionPulse = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 40,
    .Offset = 0,
    .StartBit = 32,
    .LengthBit = 8
};

sCanSignal g_can_signal_id026_ECU_InjectionLag = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.02f,
    .Offset = 0,
    .StartBit = 40,
    .LengthBit = 8
};

sCanSignal g_can_signal_id026_ECU_TspsRelativePosition = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.2f,
    .Offset = -25,
    .StartBit = 48,
    .LengthBit = 8
};

sCanSignal g_can_signal_id026_ECU_IgnitionAdvance = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.3f,
    .Offset = -20,
    .StartBit = 56,
    .LengthBit = 8
};


sCanMessage g_can_message_id027_ECU = { 0x027, 8 }; // Enrichment

sCanSignal g_can_signal_id027_ECU_EnrichmentSyncAmount = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0005f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 12
};

sCanSignal g_can_signal_id027_ECU_EnrichmentAsyncAmount = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0005f,
    .Offset = 0,
    .StartBit = 12,
    .LengthBit = 12
};

sCanSignal g_can_signal_id027_ECU_EnrichmentStartLoad = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.5f,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 8
};

sCanSignal g_can_signal_id027_ECU_EnrichmentLoadDerivative = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 5,
    .Offset = 0,
    .StartBit = 32,
    .LengthBit = 12
};

sCanSignal g_can_signal_id027_ECU_InjectionEnrichment = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0005,
    .Offset = 0,
    .StartBit = 44,
    .LengthBit = 12
};

sCanSignal g_can_signal_id027_ECU_IdleWishToRpmRelation = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.02f,
    .Offset = 0,
    .StartBit = 56,
    .LengthBit = 8
};

sCanMessage g_can_message_id028_ECU = { 0x028, 8 }; // Odo and Fuel

sCanSignal g_can_signal_id028_ECU_DrivenKilometers = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.001f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 24
};

sCanSignal g_can_signal_id028_ECU_FuelConsumption = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.1f,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 10
};

sCanSignal g_can_signal_id028_ECU_FuelConsumed = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.001f,
    .Offset = 0,
    .StartBit = 34,
    .LengthBit = 16
};

sCanSignal g_can_signal_id028_ECU_FuelHourly = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.1f,
    .Offset = 0,
    .StartBit = 50,
    .LengthBit = 14
};


sCanMessage g_can_message_id029_ECU = { 0x029, 8 }; // Flags

sCanSignal g_can_signal_id029_ECU_LambdaValid = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_OilSensor = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 1,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_FanForceSwitch = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 2,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_HandbrakeSensor = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 3,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_ChargeSensor = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 4,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_ClutchSensor = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 5,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_IgnSensor = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 6,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_FuelPumpRelay = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 7,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_FanRelay = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 8,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_CheckEngine = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 9,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_StarterRelay = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 10,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_FanSwitch = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 11,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_IgnOutput = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 12,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_StartAllowed = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 13,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_IsRunning = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 14,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_IsCheckEngine = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 15,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_CylinderIgnitionBitmask = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 16,
    .LengthBit = 4
};

sCanSignal g_can_signal_id029_ECU_CylinderInjectionBitmask = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 20,
    .LengthBit = 4
};

sCanSignal g_can_signal_id029_ECU_PowerVoltage = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.08f,
    .Offset = 5,
    .StartBit = 24,
    .LengthBit = 8
};

sCanSignal g_can_signal_id029_ECU_IdleFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 32,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_IdleCorrFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 33,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_IdleEconFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 34,
    .LengthBit = 1
};

sCanSignal g_can_signal_id029_ECU_SwitchPosition = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 35,
    .LengthBit = 3
};

sCanSignal g_can_signal_id029_ECU_CurrentTable = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 38,
    .LengthBit = 3
};

sCanSignal g_can_signal_id029_ECU_InjectorChannel = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 41,
    .LengthBit = 3
};


sCanMessage g_can_message_id010_ETC = { 0x010, 8 }; // ETC ADC1

sCanSignal g_can_signal_id010_ETC_Tps1 = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 9.155413e-5f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 16
};

sCanSignal g_can_signal_id010_ETC_Tps2 = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 9.155413e-5f,
    .Offset = 0,
    .StartBit = 16,
    .LengthBit = 16
};

sCanSignal g_can_signal_id010_ETC_Pedal1 = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 9.155413e-5f,
    .Offset = 0,
    .StartBit = 32,
    .LengthBit = 16
};

sCanSignal g_can_signal_id010_ETC_Pedal2 = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 9.155413e-5f,
    .Offset = 0,
    .StartBit = 48,
    .LengthBit = 16
};


sCanMessage g_can_message_id011_ETC = { 0x011, 8 }; // ETC ADC2

sCanSignal g_can_signal_id011_ETC_Rsvd5 = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 9.155413e-5f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 16
};

sCanSignal g_can_signal_id011_ETC_Rsvd6 = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 9.155413e-5f,
    .Offset = 0,
    .StartBit = 16,
    .LengthBit = 16
};

sCanSignal g_can_signal_id011_ETC_ReferenceVoltage = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 9.155413e-5f,
    .Offset = 0,
    .StartBit = 32,
    .LengthBit = 16
};

sCanSignal g_can_signal_id011_ETC_PowerVoltage = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 3.11284e-4f,
    .Offset = 0,
    .StartBit = 48,
    .LengthBit = 16
};


sCanMessage g_can_message_id012_ETC = { 0x012, 8 }; // ETC Values

sCanSignal g_can_signal_id012_ETC_ThrottlePosition = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.01465f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 13
};

sCanSignal g_can_signal_id012_ETC_TargetPosition = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.01465f,
    .Offset = 0,
    .StartBit = 13,
    .LengthBit = 13
};

sCanSignal g_can_signal_id012_ETC_DefaultPosition = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.01465f,
    .Offset = 0,
    .StartBit = 26,
    .LengthBit = 13
};

sCanSignal g_can_signal_id012_ETC_PedalPosition = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.01465f,
    .Offset = 0,
    .StartBit = 39,
    .LengthBit = 13
};

sCanSignal g_can_signal_id012_ETC_Tps1ErrorFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 56,
    .LengthBit = 1
};

sCanSignal g_can_signal_id012_ETC_Tps2ErrorFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 57,
    .LengthBit = 1
};

sCanSignal g_can_signal_id012_ETC_Pedal1ErrorFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 58,
    .LengthBit = 1
};

sCanSignal g_can_signal_id012_ETC_Pedal2ErrorFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 59,
    .LengthBit = 1
};

sCanSignal g_can_signal_id012_ETC_TpsMismatchFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 60,
    .LengthBit = 1
};

sCanSignal g_can_signal_id012_ETC_PedalMismatchFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 61,
    .LengthBit = 1
};

sCanSignal g_can_signal_id012_ETC_MotorErrorFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 62,
    .LengthBit = 1
};

sCanSignal g_can_signal_id012_ETC_StandaloneFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 63,
    .LengthBit = 1
};


sCanMessage g_can_message_id013_ETC = { 0x013, 4 }; // ETC I/O DTC

sCanSignal g_can_signal_id013_ETC_InCruizeStart = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_InCruizeStop = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 1,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_InBrake = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 2,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_InRsvd4 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 3,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_InRsvd5 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 4,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_InRsvd6 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 5,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_OutCruizeG = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 6,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_OutCruizeR = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 7,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_OutRsvd3 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 8,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_OutRsvd4 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 9,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_OutCruizeGState = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 10,
    .LengthBit = 2
};

sCanSignal g_can_signal_id013_ETC_OutCruizeRState = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 12,
    .LengthBit = 2
};

sCanSignal g_can_signal_id013_ETC_OutRsvd3State = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 14,
    .LengthBit = 2
};

sCanSignal g_can_signal_id013_ETC_OutRsvd4State = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 16,
    .LengthBit = 2
};

sCanSignal g_can_signal_id013_ETC_OutputsAvailability = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 27,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_MotorErrorFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 18,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_MotorTemperature = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 19,
    .LengthBit = 2
};

sCanSignal g_can_signal_id013_ETC_MotorOpenLoad = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 21,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_MotorShortToGND = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 22,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_MotorShortToSupply = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 23,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_MotorSupplyFailure = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_MotorAlwaysHigh = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 25,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_MotorAvailability = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 26,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_AdcErrorFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 27,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_CommErrorFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 28,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_CanInitFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 29,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_CanTestFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 30,
    .LengthBit = 1
};

sCanSignal g_can_signal_id013_ETC_AdaptationCompletedFlag = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 31,
    .LengthBit = 1
};


sCanMessage g_can_message_id018_ETC_ECU = { 0x018, 2 }; // ETC->ECU config apply acknowledge

sCanSignal g_can_signal_id018_ETC_ECU_ConfigApplyIdAck = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 11
};


sCanMessage g_can_message_id019_ETC_ECU = { 0x019, 6 }; // ETC->ECU config response 1

sCanSignal g_can_signal_id019_ETC_ECU_Tps1Min = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 12
};

sCanSignal g_can_signal_id019_ETC_ECU_Tps1Max = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 12,
    .LengthBit = 12
};

sCanSignal g_can_signal_id019_ETC_ECU_Tps1Limit = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 12
};

sCanSignal g_can_signal_id019_ETC_ECU_Rsvd = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 36,
    .LengthBit = 12
};


sCanMessage g_can_message_id01A_ETC_ECU = { 0x01A, 6 }; // ETC->ECU config response 2

sCanSignal g_can_signal_id01A_ETC_ECU_Tps2Min = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 12
};

sCanSignal g_can_signal_id01A_ETC_ECU_Tps2Max = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 12,
    .LengthBit = 12
};

sCanSignal g_can_signal_id01A_ETC_ECU_Tps2Limit = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 12
};

sCanSignal g_can_signal_id01A_ETC_ECU_Rsvd = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 36,
    .LengthBit = 12
};


sCanMessage g_can_message_id01B_ETC_ECU = { 0x01B, 6 }; // ETC->ECU config response 3

sCanSignal g_can_signal_id01B_ETC_ECU_Pedal1Min = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 12
};

sCanSignal g_can_signal_id01B_ETC_ECU_Pedal1Max = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 12,
    .LengthBit = 12
};

sCanSignal g_can_signal_id01B_ETC_ECU_Pedal2Min = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 12
};

sCanSignal g_can_signal_id01B_ETC_ECU_Pedal2Max = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 36,
    .LengthBit = 12
};


sCanMessage g_can_message_id01C_ETC_ECU = { 0x01C, 6 }; // ETC->ECU config response 4

sCanSignal g_can_signal_id01C_ETC_ECU_PidP = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0001f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 14
};

sCanSignal g_can_signal_id01C_ETC_ECU_PidI = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0001f,
    .Offset = 0,
    .StartBit = 14,
    .LengthBit = 14
};

sCanSignal g_can_signal_id01C_ETC_ECU_PidD = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0001f,
    .Offset = 0,
    .StartBit = 28,
    .LengthBit = 14
};

sCanSignal g_can_signal_id01C_ETC_ECU_TimPsc = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 42,
    .LengthBit = 8
};

sCanSignal g_can_signal_id01C_ETC_ECU_Rsvd = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 50,
    .LengthBit = 14
};


sCanMessage g_can_message_id080_ECU_ETC = { 0x080, 3 }; // ECU->ETC runtime request

sCanSignal g_can_signal_id080_ECU_ETC_StandaloneMode = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 1
};

sCanSignal g_can_signal_id080_ECU_ETC_MotorActive = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 1,
    .LengthBit = 1
};

sCanSignal g_can_signal_id080_ECU_ETC_TargetPosition = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.01221f,
    .Offset = 0,
    .StartBit = 2,
    .LengthBit = 13
};

sCanSignal g_can_signal_id080_ECU_ETC_MotorErrorReset = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 15,
    .LengthBit = 1
};

sCanSignal g_can_signal_id080_ECU_ETC_MotorFullCloseRequest = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 16,
    .LengthBit = 1
};

sCanSignal g_can_signal_id080_ECU_ETC_AdaptationRequest = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 17,
    .LengthBit = 1
};

sCanSignal g_can_signal_id080_ECU_ETC_Rsvd1 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 18,
    .LengthBit = 1
};

sCanSignal g_can_signal_id080_ECU_ETC_Rsvd2 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 19,
    .LengthBit = 1
};

sCanSignal g_can_signal_id080_ECU_ETC_OutCruizeR = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 20,
    .LengthBit = 1
};

sCanSignal g_can_signal_id080_ECU_ETC_OutCruizeG = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 21,
    .LengthBit = 1
};

sCanSignal g_can_signal_id080_ECU_ETC_OutRsvd3 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 22,
    .LengthBit = 1
};

sCanSignal g_can_signal_id080_ECU_ETC_OutRsvd4 = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 23,
    .LengthBit = 1
};


sCanMessage g_can_message_id088_ECU_ETC = { 0x088, 2 }; // ECU->ETC config data request

sCanSignal g_can_signal_id088_ECU_ETC_ConfigIdRequest = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 11
};

sCanMessage g_can_message_id089_ECU_ETC = { 0x089, 6 }; // ECU->ETC config request 1

sCanSignal g_can_signal_id089_ECU_ETC_Tps1Min = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 12
};

sCanSignal g_can_signal_id089_ECU_ETC_Tps1Max = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 12,
    .LengthBit = 12
};

sCanSignal g_can_signal_id089_ECU_ETC_Tps1Limit = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 12
};

sCanSignal g_can_signal_id089_ECU_ETC_Rsvd = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 36,
    .LengthBit = 12
};


sCanMessage g_can_message_id08A_ECU_ETC = { 0x08A, 6 }; // ECU->ETC config request 2

sCanSignal g_can_signal_id08A_ECU_ETC_Tps2Min = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 12
};

sCanSignal g_can_signal_id08A_ECU_ETC_Tps2Max = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 12,
    .LengthBit = 12
};

sCanSignal g_can_signal_id08A_ECU_ETC_Tps2Limit = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 12
};

sCanSignal g_can_signal_id08A_ECU_ETC_Rsvd = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 36,
    .LengthBit = 12
};


sCanMessage g_can_message_id08B_ECU_ETC = { 0x08B, 6 }; // ECU->ETC config request 3

sCanSignal g_can_signal_id08B_ECU_ETC_Pedal1Min = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 12
};

sCanSignal g_can_signal_id08B_ECU_ETC_Pedal1Max = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 12,
    .LengthBit = 12
};

sCanSignal g_can_signal_id08B_ECU_ETC_Pedal2Min = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 24,
    .LengthBit = 12
};

sCanSignal g_can_signal_id08B_ECU_ETC_Pedal2Max = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0014652f,
    .Offset = 0,
    .StartBit = 36,
    .LengthBit = 12
};


sCanMessage g_can_message_id08C_ECU_ETC = { 0x08C, 6 }; // ECU->ETC config request 4

sCanSignal g_can_signal_id08C_ECU_ETC_PidP = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0001f,
    .Offset = 0,
    .StartBit = 0,
    .LengthBit = 14
};

sCanSignal g_can_signal_id08C_ECU_ETC_PidI = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0001f,
    .Offset = 0,
    .StartBit = 14,
    .LengthBit = 14
};

sCanSignal g_can_signal_id08C_ECU_ETC_PidD = {
    .SignalType = CAN_SIGNAL_TYPE_FLOAT,
    .Gain = 0.0001f,
    .Offset = 0,
    .StartBit = 28,
    .LengthBit = 14
};

sCanSignal g_can_signal_id08C_ECU_ETC_TimPsc = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 42,
    .LengthBit = 8
};

sCanSignal g_can_signal_id08C_ECU_ETC_Rsvd = {
    .SignalType = CAN_SIGNAL_TYPE_UNSIGNED,
    .Gain = 1,
    .Offset = 0,
    .StartBit = 50,
    .LengthBit = 14
};

