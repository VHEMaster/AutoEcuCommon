/*
 * structs.h
 *
 *  Created on: 3 мар. 2022 г.
 *      Author: VHEMaster
 */

#ifndef STRUCTS_H_
#define STRUCTS_H_

#include "defines.h"

typedef struct {
    float RPM;
    float Speed;
    float Acceleration;
    float Pressure;
    float MassAirFlow;
    float CycleAirFlow;
    float Throttle;
    float Ignition;
    float Mixture;
    uint32_t Time;
}sDragPoint;

typedef struct {
    sDragPoint Points[DRAG_POINTS];
    uint32_t PointsCount;
    float FromSpeed;
    float ToSpeed;
    uint8_t Ready;
    uint8_t Started;
    uint8_t Completed;
    uint8_t Status;
    uint32_t TimeLast;
    uint32_t StartTime;
    uint32_t StopTime;
}sDrag;

typedef enum {
  O2DiagOK = 0,
  O2DiagShortToBat,
  O2DiagNoPower,
  O2DiagShortToGnd,
}eO2DiagCode;

typedef struct {
    eO2DiagCode VM : 2;
    eO2DiagCode UN : 2;
    eO2DiagCode IAIP : 2;
    eO2DiagCode DIAHGD : 2;
}sO2Diagnostic;

typedef enum {
  InjectorChannel1 = 0,
  InjectorChannel2,
  InjectorChannelCount
}eInjChannel;

typedef enum {
  OutputDiagNoFailure = 0,
  OutputDiagOpenCircuit = 1,
  OutputDiagShortToBatOrOvertemp = 2,
  OutputDiagShortToGnd = 3
}eOutputDiagnosticStatus;

typedef enum {
  MotorTemperatureNormal = 0,
  MotorTemperaturePrewarn = 1,
  MotorTemperatureWarning = 2,
  MotorTemperatureShutdown = 3
}eMotorTemperatureStatus;

typedef enum {
  MotorChopperLimitIL00 = 0,
  MotorChopperLimitIL01 = 1,
  MotorChopperLimitIL10 = 2,
  MotorChopperLimitIL11 = 3,
}eMotorChopperCurrentLimit;

typedef enum {
  eMotorChopperTimeOff00 = 0,
  eMotorChopperTimeOff01 = 1,
  eMotorChopperTimeOff10 = 2,
  eMotorChopperTimeOff11 = 3,
}eMotorChopperOffTime;

typedef struct {
    eMotorChopperCurrentLimit ChopperCurrentLimit : 2;
    uint8_t PwmOperationMode : 1;
    eMotorChopperOffTime ChopperOffTime : 2;
    uint8_t NotUsed : 1;
    uint8_t OVLO : 1;
    uint8_t StatusReset : 1;
}sMotorConfig;

typedef enum {
  PhasedModeDisabled = 0,
  PhasedModeWithSensor,
  PhasedModeWithoutSensor,
}ePhasedMode;

typedef struct {
  struct {
    union {
      struct {
        eOutputDiagnosticStatus InjCy4 : 2;
        eOutputDiagnosticStatus InjCy3 : 2;
        eOutputDiagnosticStatus InjCy2 : 2;
        eOutputDiagnosticStatus InjCy1 : 2;
      }Data;
      uint8_t Byte;
    }Diagnostic;
    HAL_StatusTypeDef Availability;
  }Injectors;
  struct {
    union {
      struct {
        eOutputDiagnosticStatus FuelPumpRelay : 2;
        eOutputDiagnosticStatus Tachometer : 2;
        eOutputDiagnosticStatus Speedmeeter : 2;
        eOutputDiagnosticStatus CheckEngine : 2;
      }Data;
      uint8_t Byte;
    }Diagnostic;
    HAL_StatusTypeDef Availability;
  }Outs1;
  struct {
    union {
      struct {
        eOutputDiagnosticStatus FanRelay : 2;
        eOutputDiagnosticStatus StarterRelay : 2;
        eOutputDiagnosticStatus FanSwitch : 2;
        eOutputDiagnosticStatus OutIgn : 2;
      }Data;
      uint8_t Byte;
    }Diagnostic;
    HAL_StatusTypeDef Availability;
  }Outs2;
  struct {
    HAL_StatusTypeDef Status;
  }IdleValvePosition;
}sOutputDiagnostic;

typedef struct {
  struct {
    union {
      struct {
        eOutputDiagnosticStatus Out1 : 2;
        eOutputDiagnosticStatus Out2 : 2;
        eOutputDiagnosticStatus Out3 : 2;
        eOutputDiagnosticStatus Out4 : 2;
      }Data;
      uint8_t Byte;
    }Diagnostic;
    HAL_StatusTypeDef Availability;
  }Outs;
  struct {
    union {
      uint8_t Byte;
      struct {
        uint8_t ErrorFlag : 1;
        eMotorTemperatureStatus Temperature : 2;
        uint8_t OpenLoad : 1;
        uint8_t ShortToGND : 1;
        uint8_t ShortToSupply : 1;
        uint8_t AlwaysHigh : 1;
        uint8_t SupplyFailure : 1;
      }Data;
    }Diagnostic;
    HAL_StatusTypeDef Availability;
  }Motor;
}sEtcOutputDiagnostic;

typedef struct {
    float gain;
    float offset;
}sEcuParamTransform;

typedef struct {
    sEcuParamTransform cylinders;
    sEcuParamTransform voltages;
    sEcuParamTransform pressures_16;
    sEcuParamTransform pressures_32;
    sEcuParamTransform rotates_16;
    sEcuParamTransform rotates_32;
    sEcuParamTransform idle_rotates;
    sEcuParamTransform throttles_16;
    sEcuParamTransform throttles_32;
    sEcuParamTransform pedals;
    sEcuParamTransform filling_gbc_map;
    sEcuParamTransform filling_gbc_tps;
    sEcuParamTransform throttle_position;
    sEcuParamTransform stop_throttle_position;
    sEcuParamTransform filling_select_koff_tps;
    sEcuParamTransform enrichment_injection_phase;
    sEcuParamTransform enrichment_rate_start_load;
    sEcuParamTransform enrichment_rate_load_derivative;
    sEcuParamTransform enrichment_rate;
    sEcuParamTransform enrichment_sync_amount;
    sEcuParamTransform enrichment_async_amount;
    sEcuParamTransform enrichment_ign_corr;
    sEcuParamTransform enrichment_temp_mult;
    sEcuParamTransform fillings_16;
    sEcuParamTransform fillings_32;
    sEcuParamTransform ignitions;
    sEcuParamTransform ignition_corr_cy;
    sEcuParamTransform injection_corr_cy;
    sEcuParamTransform fuel_mixtures;
    sEcuParamTransform injection_phase;
    sEcuParamTransform ignition_time_rpm_mult;
    sEcuParamTransform ignition_time;
    sEcuParamTransform injector_lag;
    sEcuParamTransform engine_temps;
    sEcuParamTransform air_temps;
    sEcuParamTransform air_temp_mix_corr;
    sEcuParamTransform air_temp_ign_corr;
    sEcuParamTransform engine_temp_mix_corr;
    sEcuParamTransform engine_temp_ign_corr;
    sEcuParamTransform idle_wish_rotates;
    sEcuParamTransform idle_wish_massair;
    sEcuParamTransform idle_wish_ignition;
    sEcuParamTransform idle_wish_ignition_static;
    sEcuParamTransform idle_valve_position;
    sEcuParamTransform idle_throttle_position;
    sEcuParamTransform idle_rpm_pid_act_1;
    sEcuParamTransform idle_rpm_pid_act_2;
    sEcuParamTransform idle_pids_rpm_koffs;
    sEcuParamTransform idle_valve_to_massair_pid_p;
    sEcuParamTransform idle_valve_to_massair_pid_i;
    sEcuParamTransform idle_valve_to_massair_pid_d;
    sEcuParamTransform idle_valve_to_rpm_pid_p;
    sEcuParamTransform idle_valve_to_rpm_pid_i;
    sEcuParamTransform idle_valve_to_rpm_pid_d;
    sEcuParamTransform idle_throttle_to_massair_pid_p;
    sEcuParamTransform idle_throttle_to_massair_pid_i;
    sEcuParamTransform idle_throttle_to_massair_pid_d;
    sEcuParamTransform idle_throttle_to_rpm_pid_p;
    sEcuParamTransform idle_throttle_to_rpm_pid_i;
    sEcuParamTransform idle_throttle_to_rpm_pid_d;
    sEcuParamTransform idle_ign_to_rpm_pid_p;
    sEcuParamTransform idle_ign_to_rpm_pid_i;
    sEcuParamTransform idle_ign_to_rpm_pid_d;
    sEcuParamTransform warmup_mixtures;
    sEcuParamTransform warmup_mix_koffs;
    sEcuParamTransform warmup_mix_corrs;
    sEcuParamTransform cold_start_idle_corrs;
    sEcuParamTransform cold_start_idle_times;
    sEcuParamTransform start_injection_phase;
    sEcuParamTransform start_idle_valve_pos;
    sEcuParamTransform start_throttle_position;
    sEcuParamTransform start_ignition;
    sEcuParamTransform start_tps_corrs;
    sEcuParamTransform start_async_filling;
    sEcuParamTransform start_large_filling;
    sEcuParamTransform start_small_filling;
    sEcuParamTransform start_filling_time;
    sEcuParamTransform speeds;
    sEcuParamTransform idle_rpm_shift;
    sEcuParamTransform knock_noise_level;
    sEcuParamTransform knock_threshold;
    sEcuParamTransform knock_zone;
    sEcuParamTransform knock_gain;
    sEcuParamTransform knock_filter_frequency;
    sEcuParamTransform knock_cy_level_multiplier;
    sEcuParamTransform cy_corr_injection;
    sEcuParamTransform cy_corr_ignition;
    sEcuParamTransform tsps_relative_pos;
    sEcuParamTransform tsps_desync_thr;
    sEcuParamTransform idle_ignition_time_by_tps;
    sEcuParamTransform idle_econ_delay;
    sEcuParamTransform start_econ_delay;
    sEcuParamTransform fan_advance_control;
    sEcuParamTransform idle_valve_econ_position;
    sEcuParamTransform idle_throttle_econ_position;
    sEcuParamTransform pedal_ignition_control;
    sEcuParamTransform throttle_position_1d;
    sEcuParamTransform throttle_startup_move_time;
    sEcuParamTransform knock_detect_phase_start;
    sEcuParamTransform knock_detect_phase_end;
    sEcuParamTransform knock_integrator_time;
    sEcuParamTransform enrichment_tps_selection;
    sEcuParamTransform enrichment_accel_dead_band;
    sEcuParamTransform dynamic_fuel_corr_gbc;
    sEcuParamTransform dynamic_fuel_corr_temp;
    sEcuParamTransform dynamic_fuel_corr_lpf;
}sEcuTableTransform;


typedef struct {
    sEcuParamTransform ignitions;
    sEcuParamTransform filling_gbc_map;
    sEcuParamTransform filling_gbc_tps;
    sEcuParamTransform idle_valve_position;
    sEcuParamTransform knock_cy_level_multiplier;
    sEcuParamTransform ignition_corr_cy;
    sEcuParamTransform injection_corr_cy;
    sEcuParamTransform knock_detonation_counter;
    sEcuParamTransform progress;
}sEcuCorrectionsTransform;

typedef struct {
    sEcuTableTransform transform;

    char name[TABLE_STRING_MAX];

    eInjChannel inj_channel;

    float injector_performance;
    int32_t is_fuel_phase_by_end;
    int32_t enrichment_ph_async_enabled;
    int32_t enrichment_ph_sync_enabled;
    int32_t enrichment_pp_async_enabled;
    int32_t enrichment_pp_sync_enabled;
    float fuel_mass_per_cc;
    float fuel_afr;

    uint8_t cylinders[ECU_CYLINDERS_COUNT];

    uint8_t voltages[TABLE_VOLTAGES];

    uint16_t pressures_16[TABLE_PRESSURES_16];
    uint16_t pressures_32[TABLE_PRESSURES_32];

    uint16_t rotates_16[TABLE_ROTATES_16];
    uint16_t rotates_32[TABLE_ROTATES_32];

    uint16_t idle_rotates[TABLE_ROTATES_16];

    uint16_t throttles_16[TABLE_THROTTLES_16];
    uint16_t throttles_32[TABLE_THROTTLES_32];

    uint16_t pedals[TABLE_PEDALS];

    uint16_t filling_gbc_map[TABLE_PRESSURES_32][TABLE_ROTATES_32];
    uint16_t filling_gbc_tps[TABLE_THROTTLES_32][TABLE_ROTATES_32];
    uint16_t throttle_position[TABLE_ROTATES_16][TABLE_PEDALS];
    uint16_t stop_throttle_position[TABLE_PEDALS];

    int32_t idle_valve_pos_min;
    int32_t idle_valve_pos_max;
    float idle_throttle_pos_min;
    float idle_throttle_pos_max;
    uint8_t filling_select_koff_tps[TABLE_ROTATES_16];


    int32_t enrichment_load_type;
    float enrichment_load_dead_band;
    float enrichment_ign_corr_decay_time;
    float enrichment_detect_duration;

    int32_t enrichment_async_pulses_divider;
    float enrichment_injection_phase_decay_time;
    uint8_t enrichment_injection_phase[TABLE_ROTATES_16];
    float enrichment_end_injection_final_phase;
    int32_t enrichment_ph_post_injection_enabled;
    int32_t enrichment_pp_post_injection_enabled;
    float enrichment_end_injection_final_amount;

    uint8_t enrichment_rate_start_load[TABLE_ENRICHMENT_PERCENTS];
    uint8_t enrichment_rate_load_derivative[TABLE_ENRICHMENT_PERCENTS];
    uint8_t enrichment_rate[TABLE_ENRICHMENT_PERCENTS][TABLE_ENRICHMENT_PERCENTS];
    uint8_t enrichment_sync_amount[TABLE_ROTATES_16];
    uint8_t enrichment_async_amount[TABLE_ROTATES_16];
    uint8_t enrichment_ign_corr[TABLE_ROTATES_16][TABLE_ENRICHMENT_PERCENTS];
    uint8_t enrichment_temp_mult[TABLE_TEMPERATURES];

    uint8_t fillings_16[TABLE_FILLING_16];
    uint8_t fillings_32[TABLE_FILLING_32];

    uint8_t ignitions[TABLE_FILLING_32][TABLE_ROTATES_32];
    int8_t ignition_corr_cy[ECU_CYLINDERS_COUNT][TABLE_FILLING_32][TABLE_ROTATES_32];
    int8_t injection_corr_cy[ECU_CYLINDERS_COUNT][TABLE_FILLING_32][TABLE_ROTATES_32];
    uint8_t fuel_mixtures[TABLE_FILLING_16][TABLE_ROTATES_16];
    uint8_t injection_phase[TABLE_FILLING_16][TABLE_ROTATES_16];

    uint8_t ignition_time_rpm_mult[TABLE_ROTATES_16];
    uint8_t ignition_time[TABLE_VOLTAGES];
    uint8_t injector_lag[TABLE_VOLTAGES];

    int8_t engine_temps[TABLE_TEMPERATURES];

    int8_t air_temps[TABLE_TEMPERATURES];
    int8_t air_temp_mix_corr[TABLE_TEMPERATURES][TABLE_FILLING_16];
    int8_t air_temp_ign_corr[TABLE_TEMPERATURES][TABLE_FILLING_16];

    int8_t engine_temp_mix_corr[TABLE_TEMPERATURES][TABLE_FILLING_16];
    int8_t engine_temp_ign_corr[TABLE_TEMPERATURES][TABLE_FILLING_16];

    uint8_t idle_wish_rotates[TABLE_TEMPERATURES];
    uint8_t idle_wish_massair[TABLE_TEMPERATURES];
    uint8_t idle_wish_ignition[TABLE_TEMPERATURES];
    uint8_t idle_wish_ignition_static[TABLE_ROTATES_16];
    uint8_t idle_valve_position[TABLE_TEMPERATURES];
    uint8_t idle_throttle_position[TABLE_TEMPERATURES];

    uint8_t idle_rpm_pid_act_1[TABLE_TEMPERATURES];
    uint8_t idle_rpm_pid_act_2[TABLE_TEMPERATURES];

    uint8_t idle_pids_rpm_koffs[TABLE_ROTATES_16];
    int16_t idle_valve_to_massair_pid_p[TABLE_ROTATES_16];
    int16_t idle_valve_to_massair_pid_i[TABLE_ROTATES_16];
    int16_t idle_valve_to_massair_pid_d[TABLE_ROTATES_16];

    int16_t idle_valve_to_rpm_pid_p[TABLE_ROTATES_16];
    int16_t idle_valve_to_rpm_pid_i[TABLE_ROTATES_16];
    int16_t idle_valve_to_rpm_pid_d[TABLE_ROTATES_16];

    int16_t idle_throttle_to_massair_pid_p[TABLE_ROTATES_16];
    int16_t idle_throttle_to_massair_pid_i[TABLE_ROTATES_16];
    int16_t idle_throttle_to_massair_pid_d[TABLE_ROTATES_16];

    int16_t idle_throttle_to_rpm_pid_p[TABLE_ROTATES_16];
    int16_t idle_throttle_to_rpm_pid_i[TABLE_ROTATES_16];
    int16_t idle_throttle_to_rpm_pid_d[TABLE_ROTATES_16];

    int16_t idle_ign_to_rpm_pid_p[TABLE_ROTATES_16];
    int16_t idle_ign_to_rpm_pid_i[TABLE_ROTATES_16];
    int16_t idle_ign_to_rpm_pid_d[TABLE_ROTATES_16];

    float short_term_corr_pid_p;
    float short_term_corr_pid_i;
    float short_term_corr_pid_d;

    float idle_ign_deviation_max;
    float idle_ign_deviation_min;

    float idle_ign_fan_low_corr;
    float idle_ign_fan_high_corr;

    float idle_air_fan_low_corr;
    float idle_air_fan_high_corr;

    uint8_t warmup_mixtures[TABLE_TEMPERATURES];
    uint8_t warmup_mix_koffs[TABLE_TEMPERATURES];
    uint8_t warmup_mix_corrs[TABLE_TEMPERATURES];

    uint8_t cold_start_idle_corrs[TABLE_TEMPERATURES];
    uint8_t cold_start_idle_times[TABLE_TEMPERATURES];
    uint8_t start_injection_phase[TABLE_TEMPERATURES];
    uint8_t start_idle_valve_pos[TABLE_TEMPERATURES];
    uint8_t start_throttle_position[TABLE_TEMPERATURES];
    uint8_t start_ignition[TABLE_TEMPERATURES];
    uint8_t start_tps_corrs[TABLE_THROTTLES_16];
    uint16_t start_async_filling[TABLE_TEMPERATURES];
    uint16_t start_large_filling[TABLE_TEMPERATURES];
    uint16_t start_small_filling[TABLE_TEMPERATURES];
    uint8_t start_filling_time[TABLE_TEMPERATURES];
    int32_t start_large_count;

    uint8_t speeds[TABLE_SPEEDS];
    uint8_t idle_rpm_shift[TABLE_SPEEDS];

    float knock_ign_corr_max;
    float knock_inj_corr_max;
    uint8_t knock_noise_level[TABLE_ROTATES_32];
    uint8_t knock_threshold[TABLE_ROTATES_32];
    uint8_t knock_zone[TABLE_FILLING_16][TABLE_ROTATES_16];
    uint8_t knock_gain[TABLE_ROTATES_32];
    uint8_t knock_filter_frequency[TABLE_ROTATES_32];
    uint8_t knock_cy_level_multiplier[ECU_CYLINDERS_COUNT][TABLE_ROTATES_32];

    int8_t cy_corr_injection[ECU_CYLINDERS_COUNT];
    int8_t cy_corr_ignition[ECU_CYLINDERS_COUNT];

    int8_t tsps_relative_pos[TABLE_ROTATES_32];
    uint8_t tsps_desync_thr[TABLE_ROTATES_16];

    uint8_t idle_ignition_time_by_tps[TABLE_THROTTLES_32];
    uint8_t idle_econ_delay[TABLE_TEMPERATURES];
    uint8_t start_econ_delay[TABLE_TEMPERATURES];

    float fan_advance_control_low;
    float fan_advance_control_mid;
    float fan_advance_control_high;

    int8_t fan_advance_control[TABLE_TEMPERATURES][TABLE_SPEEDS];
    uint8_t idle_valve_econ_position[TABLE_ROTATES_32];
    uint8_t idle_throttle_econ_position[TABLE_ROTATES_32];
    uint8_t pedal_ignition_control[TABLE_ROTATES_16];
    int32_t throttle_position_use_1d;
    uint16_t throttle_position_1d[TABLE_PEDALS];
    uint8_t throttle_startup_move_time[TABLE_TEMPERATURES];

    int8_t knock_detect_phase_start[TABLE_ROTATES_32];
    int8_t knock_detect_phase_end[TABLE_ROTATES_32];
    uint8_t knock_integrator_time[TABLE_ROTATES_32];
    uint8_t enrichment_tps_selection[TABLE_ENRICHMENT_PERCENTS][TABLE_ENRICHMENT_PERCENTS];
    uint8_t enrichment_accel_dead_band[TABLE_ROTATES_16];

    uint8_t dynamic_fuel_corr_gbc[TABLE_FILLING_16];
    uint8_t dynamic_fuel_corr_temp[TABLE_TEMPERATURES];
    uint8_t dynamic_fuel_corr_lpf[TABLE_ROTATES_16];
}sEcuTable;

typedef struct {
    sEcuCorrectionsTransform transform;
    int8_t ignitions[TABLE_FILLING_32][TABLE_ROTATES_32];
    int8_t filling_gbc_map[TABLE_PRESSURES_32][TABLE_ROTATES_32];
    int8_t filling_gbc_tps[TABLE_THROTTLES_32][TABLE_ROTATES_32];
    int8_t idle_valve_position[TABLE_TEMPERATURES];
    int8_t knock_cy_level_multiplier[ECU_CYLINDERS_COUNT][TABLE_ROTATES_32];
    int8_t ignition_corr_cy[ECU_CYLINDERS_COUNT][TABLE_FILLING_32][TABLE_ROTATES_32];
    int8_t injection_corr_cy[ECU_CYLINDERS_COUNT][TABLE_FILLING_32][TABLE_ROTATES_32];
    uint8_t knock_detonation_counter[TABLE_FILLING_32][TABLE_ROTATES_32];
    uint8_t progress_ignitions[TABLE_FILLING_32][TABLE_ROTATES_32];
    uint8_t progress_filling_gbc_map[TABLE_PRESSURES_32][TABLE_ROTATES_32];
    uint8_t progress_filling_gbc_tps[TABLE_THROTTLES_32][TABLE_ROTATES_32];
    uint8_t progress_idle_valve_position[TABLE_TEMPERATURES];
    uint8_t progress_knock_cy_level_multiplier[ECU_CYLINDERS_COUNT][TABLE_ROTATES_32];
    float long_term_correction;
    float idle_correction;
}sEcuCorrections;

typedef struct {
    float engineVolume;

    int32_t isForceTable;
    int32_t isSwitchByExternal;
    int32_t startupTableNumber;
    int32_t switchPos1Table;
    int32_t switchPos0Table;
    int32_t switchPos2Table;
    int32_t forceTable;

    int32_t cutoffMode;
    float cutoffRPM;
    float cutoffAdvance;
    float cutoffMixture;
    float oilPressureCutoffRPM;

    float speedInputCorrection;
    float speedOutputCorrection;

    int32_t useLambdaSensor;
    int32_t res1;
    int32_t phasedMode;
    int32_t useKnockSensor;
    int32_t performAdaptation;
    int32_t isSingleCoil;
    int32_t isIndividualCoils;
    int32_t isEconEnabled;

    float fanHighTemperature;
    float fanMidTemperature;
    float fanLowTemperature;

    int32_t isBluetoothEnabled;
    int32_t bluetoothPin;
    char bluetoothName[TABLE_STRING_MAX];

    int32_t shiftMode;
    float shiftThrThr;
    float shiftRpmThr;
    float shiftRpmTill;
    float shiftAdvance;
    float shiftMixture;

    int32_t useIdleValve;
    int32_t useEtc;
    float etcPedalDeadZone;

    int32_t useShortTermCorr;
    int32_t useLongTermCorr;

    int32_t res3;
    int32_t performIdleAdaptation;
    float learn_cycles_delay_mult;
    float air_temp_corr_koff_min;
    float air_temp_corr_koff_max;

    float tps_voltage_low;
    float tps_voltage_high;

    float map_pressure_gain;
    float map_pressure_offset;
}sEcuParams;

typedef struct {
    uint16_t Tps1Min;
    uint16_t Tps1Max;
    uint16_t Tps1Limit;
    uint16_t Tps2Min;
    uint16_t Tps2Max;
    uint16_t Tps2Limit;
    uint16_t Pedal1Min;
    uint16_t Pedal1Max;
    uint16_t Pedal2Min;
    uint16_t Pedal2Max;
    int16_t PidP;
    int16_t PidI;
    int16_t PidD;
    uint16_t TimPsc;
}sEtcConfig;

typedef struct {
    uint16_t AdcTps1;
    uint16_t AdcTps2;
    uint16_t AdcPedal1;
    uint16_t AdcPedal2;
    uint16_t AdcRsvd5;
    uint16_t AdcRsvd6;
    uint16_t AdcReferenceVoltage;
    uint16_t AdcPowerVoltage;
    uint16_t Tps1;
    uint16_t Tps2;
    uint16_t Pedal1;
    uint16_t Pedal2;
    uint16_t ThrottlePosition;
    uint16_t DefaultPosition;
    uint16_t TargetPosition;
    uint16_t PedalPosition;
    uint8_t StandaloneMode : 1;
    uint8_t MotorActive : 1;
    uint8_t FullCloseRequest : 1;
    uint8_t AdaptationProcess : 1;
    HAL_StatusTypeDef TpsError : 2;
    HAL_StatusTypeDef PedalError : 2;
    HAL_StatusTypeDef MotorError : 2;
    HAL_StatusTypeDef CommError : 2;
    uint8_t OutsDiagByte;
    uint8_t MotorDiagByte;
}sEtcParametersInt;

typedef struct {
    char CurrentTableName[TABLE_STRING_MAX];

    float AdcKnockVoltage;
    float AdcAirTemp;
    float AdcEngineTemp;
    float AdcManifoldAirPressure;
    float AdcThrottlePosition;
    float AdcPowerVoltage;
    float AdcReferenceVoltage;
    float AdcLambdaUR;
    float AdcLambdaUA;

    float AdcEtcTps1;
    float AdcEtcTps2;
    float AdcEtcPedal1;
    float AdcEtcPedal2;
    float AdcEtcRsvd5;
    float AdcEtcRsvd6;
    float AdcEtcReferenceVoltage;
    float AdcEtcPowerVoltage;

    float ThrottlePosition;
    float PedalPosition;
    float ThrottleDefaultPosition;
    float ThrottleTargetPosition;
    float WishThrottleTargetPosition;
    float MaximumThrottlePosition;

    float KnockSensor;
    float KnockSensorFiltered;
    float KnockSensorDetonate;
    float KnockZone;
    float KnockAdvance;

    float KnockSaturation;
    float AirTemp;
    float EngineTemp;
    float CalculatedAirTemp;
    float ManifoldAirPressure;
    float ReferenceVoltage;
    float PowerVoltage;
    float FuelRatio;
    float FuelRatioDiff;
    float LambdaValue;
    float LambdaTemperature;
    float LambdaHeaterVoltage;
    float ShortTermCorrection;
    float LongTermCorrection;
    float IdleCorrection;

    float RPM;
    float Speed;
    float MassAirFlow;
    float CyclicAirFlow;
    float EffectiveVolume;
    float EngineLoad;
    float EstimatedPower;
    float EstimatedTorque;
    float WishFuelRatio;
    float IdleValvePosition;
    float IdleRegThrRPM;
    float WishIdleRPM;
    float WishIdleMassAirFlow;
    float WishIdleValvePosition;
    float WishIdleIgnitionAdvance;
    float IgnitionAdvance;
    float InjectionPhase;
    float InjectionPhaseDuration;
    float InjectionPulse;
    float InjectionDutyCycle;
    float InjectionEnrichment;
    float InjectionLag;
    float IgnitionPulse;
    float IdleSpeedShift;

    float EnrichmentSyncAmount;
    float EnrichmentAsyncAmount;
    float EnrichmentStartLoad;
    float EnrichmentLoadDerivative;

    float DrivenKilometers;
    float FuelConsumed;
    float FuelConsumption;
    float FuelHourly;
    float TspsRelativePosition;
    float IdleWishToRpmRelation;

    uint16_t KnockCount;
    uint16_t KnockCountCy[ECU_CYLINDERS_COUNT];

    uint8_t SwitchPosition;
    uint8_t CurrentTable;
    uint8_t InjectorChannel;

    uint8_t IdleFlag;
    uint8_t IdleCorrFlag;
    uint8_t IdleEconFlag;

    uint8_t LambdaValid;

    uint8_t OilSensor;
    uint8_t FanForceSwitch;
    uint8_t HandbrakeSensor;
    uint8_t ChargeSensor;
    uint8_t ClutchSensor;
    uint8_t IgnSensor;

    uint8_t FuelPumpRelay;
    uint8_t FanRelay;
    uint8_t CheckEngine;
    uint8_t StarterRelay;
    uint8_t FanSwitch;
    uint8_t IgnOutput;

    uint8_t StartAllowed;
    uint8_t IsRunning;
    uint8_t IsCheckEngine;

    uint8_t EtcMotorActiveFlag;
    uint8_t EtcStandaloneFlag;
    uint8_t EtcMotorFullCloseFlag;

    uint8_t EtcOutCruizeG;
    uint8_t EtcOutCruizeR;
    uint8_t EtcOutRsvd3;
    uint8_t EtcOutRsvd4;
    uint8_t EtcInCruizeStart;
    uint8_t EtcInCruizeStop;
    uint8_t EtcInBrake;
    uint8_t EtcInRsvd4;
    uint8_t EtcInRsvd5;
    uint8_t EtcInRsvd6;

    uint8_t CylinderIgnitionBitmask;
    uint8_t CylinderInjectionBitmask;
}sParameters;

typedef struct {
    float RPM;
    float ManifoldAirPressure;
    float ThrottlePosition;
    float FuelRatio;
    float WishFuelRatio;
    uint32_t Timestamp;
}sLearnParameters;

typedef struct {
    float IgnitionAdvance;
    float InjectionPhase;
    float IgnitionOctane;
    float IgnitionPulse;
    float InjectionPulse;
    float WishFuelRatio;
    float WishIdleRPM;
    float WishIdleValvePosition;
    float WishIdleIgnitionAdvance;
    float WishIdleMassAirFlow;
    float WishThrottleTargetPosition;
    float MaximumThrottlePosition;
    int32_t FanRelay;
    int32_t FanSwitch;
    int32_t FuelPumpRelay;
    int32_t CheckEngine;
    struct {
      uint8_t IgnitionAdvance;
      uint8_t InjectionPhase;
      uint8_t IgnitionOctane;
      uint8_t IgnitionPulse;
      uint8_t InjectionPulse;
      uint8_t WishFuelRatio;
      uint8_t WishIdleRPM;
      uint8_t WishIdleValvePosition;
      uint8_t WishIdleIgnitionAdvance;
      uint8_t WishIdleMassAirFlow;
      uint8_t WishThrottleTargetPosition;
      uint8_t MaximumThrottlePosition;
      uint8_t FanRelay;
      uint8_t FanSwitch;
      uint8_t FuelPumpRelay;
      uint8_t CheckEngine;
    } Enable;
    uint32_t pad1;
    uint8_t LambdaForceEnabled;
    uint32_t pad2;
}sForceParameters;

typedef struct {
    float km_driven;
    float fuel_consumed;
    uint8_t CheckBitmapRecorded[CHECK_BITMAP_SIZE];
    uint8_t idle_valve_position;
}sEcuCriticalBackup;

typedef struct {
    uint32_t code;
    const char *str;
    uint8_t active;
}sEcuCheckItem;

typedef struct {
    uint32_t Count;
    uint32_t Max;
    sEcuCheckItem Items[CHECK_ITEMS_MAX];
}sEcuCheckData;

#endif /* STRUCTS_H_ */
