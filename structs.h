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
    sDragPoint Points[DRAG_MAX_POINTS];
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
    char name[TABLE_STRING_MAX];

    eInjChannel inj_channel;

    float injector_performance;
    int32_t is_fuel_pressure_const;
    int32_t is_fuel_phase_by_end;
    int32_t enrichment_ph_async_enabled;
    int32_t enrichment_ph_sync_enabled;
    int32_t enrichment_pp_async_enabled;
    int32_t enrichment_pp_sync_enabled;
    float fuel_pressure;
    float fuel_mass_per_cc;
    float fuel_afr;

    int32_t cylinders_count;
    float cylinders[ECU_CYLINDERS_COUNT];

    int32_t voltages_count;
    float voltages[TABLE_VOLTAGES_MAX];

    int32_t densities_count;
    float densities[TABLE_DENSITIES_MAX];

    int32_t rotates_count;
    float rotates[TABLE_ROTATES_MAX];

    int32_t idle_rotates_count;
    float idle_rotates[TABLE_ROTATES_MAX];

    int32_t throttles_count;
    float throttles[TABLE_THROTTLES_MAX];

    float fill_by_density[TABLE_DENSITIES_MAX][TABLE_ROTATES_MAX];
    float map_by_thr[TABLE_THROTTLES_MAX][TABLE_ROTATES_MAX];

    int32_t use_idle_filling;
    int32_t idle_filling_rotates_count;
    int32_t idle_filling_densities_count;
    float idle_filling_rotates[TABLE_ROTATES_MAX];
    float idle_filling_densities[TABLE_DENSITIES_MAX];
    float idle_filling_by_density[TABLE_DENSITIES_MAX][TABLE_ROTATES_MAX];

    int32_t enrichment_load_type;
    float enrichment_load_dead_band;
    float enrichment_accel_dead_band;
    float enrichment_ign_corr_decay_time;
    float enrichment_detect_duration;

    int32_t enrichment_async_pulses_divider;
    float enrichment_injection_phase_decay_time;
    float enrichment_injection_phase[TABLE_ROTATES_MAX];
    float enrichment_end_injection_final_phase;
    int32_t enrichment_ph_post_injection_enabled;
    int32_t enrichment_pp_post_injection_enabled;
    float enrichment_end_injection_final_amount;

    int32_t enrichment_rate_start_load_count;
    int32_t enrichment_rate_load_derivative_count;
    float enrichment_rate_start_load[TABLE_ENRICHMENT_PERCENTS_MAX];
    float enrichment_rate_load_derivative[TABLE_ENRICHMENT_PERCENTS_MAX];
    float enrichment_rate[TABLE_ENRICHMENT_PERCENTS_MAX][TABLE_ENRICHMENT_PERCENTS_MAX];
    float enrichment_sync_amount[TABLE_ROTATES_MAX];
    float enrichment_async_amount[TABLE_ROTATES_MAX];
    float enrichment_ign_corr[TABLE_ROTATES_MAX][TABLE_ENRICHMENT_PERCENTS_MAX];
    float enrichment_temp_mult[TABLE_TEMPERATURES_MAX];

    int32_t fillings_count;
    float fillings[TABLE_FILLING_MAX];

    float ignitions[TABLE_FILLING_MAX][TABLE_ROTATES_MAX];
    float fuel_mixtures[TABLE_FILLING_MAX][TABLE_ROTATES_MAX];
    float injection_phase[TABLE_FILLING_MAX][TABLE_ROTATES_MAX];

    float injection_phase_lpf[TABLE_ROTATES_MAX];

    float ignition_time_rpm_mult[TABLE_ROTATES_MAX];
    float ignition_time[TABLE_VOLTAGES_MAX];
    float injector_lag[TABLE_VOLTAGES_MAX];

    int32_t engine_temp_count;
    float engine_temps[TABLE_TEMPERATURES_MAX];

    int32_t air_temp_count;
    float air_temps[TABLE_TEMPERATURES_MAX];
    float air_temp_mix_corr[TABLE_TEMPERATURES_MAX][TABLE_FILLING_MAX];
    float air_temp_ign_corr[TABLE_TEMPERATURES_MAX][TABLE_FILLING_MAX];
    float engine_temp_mix_corr[TABLE_TEMPERATURES_MAX][TABLE_FILLING_MAX];
    float engine_temp_ign_corr[TABLE_TEMPERATURES_MAX][TABLE_FILLING_MAX];

    float idle_wish_rotates[TABLE_TEMPERATURES_MAX];
    float idle_wish_massair[TABLE_TEMPERATURES_MAX];
    float idle_wish_ignition[TABLE_TEMPERATURES_MAX];
    float idle_wish_ignition_static[TABLE_ROTATES_MAX];
    float idle_valve_position[TABLE_TEMPERATURES_MAX];

    float idle_rpm_pid_act_1[TABLE_TEMPERATURES_MAX];
    float idle_rpm_pid_act_2[TABLE_TEMPERATURES_MAX];

    int32_t idle_pids_rpm_koffs_count;
    float idle_pids_rpm_koffs[TABLE_ROTATES_MAX];
    float idle_valve_to_massair_pid_p[TABLE_ROTATES_MAX];
    float idle_valve_to_massair_pid_i[TABLE_ROTATES_MAX];
    float idle_valve_to_massair_pid_d[TABLE_ROTATES_MAX];

    float idle_valve_to_rpm_pid_p[TABLE_ROTATES_MAX];
    float idle_valve_to_rpm_pid_i[TABLE_ROTATES_MAX];
    float idle_valve_to_rpm_pid_d[TABLE_ROTATES_MAX];

    float idle_ign_to_rpm_pid_p[TABLE_ROTATES_MAX];
    float idle_ign_to_rpm_pid_i[TABLE_ROTATES_MAX];
    float idle_ign_to_rpm_pid_d[TABLE_ROTATES_MAX];

    float short_term_corr_pid_p;
    float short_term_corr_pid_i;
    float short_term_corr_pid_d;

    float idle_ign_deviation_max;
    float idle_ign_deviation_min;

    float idle_ign_fan_high_corr;
    float idle_ign_fan_low_corr;

    float idle_air_fan_high_corr;
    float idle_air_fan_low_corr;

    float warmup_mixtures[TABLE_TEMPERATURES_MAX];
    float warmup_mix_koffs[TABLE_TEMPERATURES_MAX];
    float warmup_mix_corrs[TABLE_TEMPERATURES_MAX];

    float cold_start_idle_corrs[TABLE_TEMPERATURES_MAX];
    float cold_start_idle_times[TABLE_TEMPERATURES_MAX];
    float start_injection_phase[TABLE_TEMPERATURES_MAX];
    float start_idle_valve_pos[TABLE_TEMPERATURES_MAX];
    float start_ignition[TABLE_TEMPERATURES_MAX];
    float start_tps_corrs[TABLE_THROTTLES_MAX];
    float start_async_filling[TABLE_TEMPERATURES_MAX];
    float start_large_filling[TABLE_TEMPERATURES_MAX];
    float start_small_filling[TABLE_TEMPERATURES_MAX];
    float start_filling_time[TABLE_TEMPERATURES_MAX];
    int32_t start_large_count;

    int32_t speeds_count;
    float speeds[TABLE_SPEEDS_MAX];
    float idle_rpm_shift[TABLE_SPEEDS_MAX];

    float knock_ign_corr_max;
    float knock_inj_corr_max;
    float knock_noise_level[TABLE_ROTATES_MAX];
    float knock_threshold[TABLE_ROTATES_MAX];
    float knock_zone[TABLE_FILLING_MAX][TABLE_ROTATES_MAX];
    float knock_gain[TABLE_ROTATES_MAX];
    float knock_filter_frequency[TABLE_ROTATES_MAX];
    float knock_cy_level_multiplier[ECU_CYLINDERS_COUNT][TABLE_ROTATES_MAX];

    float cy_corr_injection[ECU_CYLINDERS_COUNT];
    float cy_corr_ignition[ECU_CYLINDERS_COUNT];

    float tsps_relative_pos[TABLE_ROTATES_MAX];
    float tsps_desync_thr[TABLE_ROTATES_MAX];

    float idle_ignition_time_by_tps[TABLE_THROTTLES_MAX];
    float idle_econ_delay[TABLE_TEMPERATURES_MAX];
    float start_econ_delay[TABLE_TEMPERATURES_MAX];

    float fan_advance_control_low;
    float fan_advance_control_mid;
    float fan_advance_control_high;

    float fan_advance_control[TABLE_TEMPERATURES_MAX][TABLE_SPEEDS_MAX];
    float idle_valve_econ_position[TABLE_ROTATES_MAX];

    int32_t reserved[745];
}sEcuTable;

typedef struct {
    int8_t ignitions[TABLE_FILLING_MAX][TABLE_ROTATES_MAX];
    int8_t fill_by_density[TABLE_DENSITIES_MAX][TABLE_ROTATES_MAX];
    int8_t map_by_thr[TABLE_THROTTLES_MAX][TABLE_ROTATES_MAX];
    int8_t idle_valve_position[TABLE_TEMPERATURES_MAX];
    int8_t knock_cy_level_multiplier[ECU_CYLINDERS_COUNT][TABLE_ROTATES_MAX];
    int8_t knock_detonation_counter[TABLE_FILLING_MAX][TABLE_ROTATES_MAX];
    int8_t idle_filling_by_density[TABLE_DENSITIES_MAX][TABLE_ROTATES_MAX];
    float long_term_correction;
    float idle_correction;
}sEcuCorrectionsBackup;

typedef struct {
    float ignitions[TABLE_FILLING_MAX][TABLE_ROTATES_MAX];
    float fill_by_density[TABLE_DENSITIES_MAX][TABLE_ROTATES_MAX];
    float map_by_thr[TABLE_THROTTLES_MAX][TABLE_ROTATES_MAX];
    float idle_valve_position[TABLE_TEMPERATURES_MAX];
    float knock_cy_level_multiplier[ECU_CYLINDERS_COUNT][TABLE_ROTATES_MAX];
    float knock_detonation_counter[TABLE_FILLING_MAX][TABLE_ROTATES_MAX];
    float idle_filling_by_density[TABLE_DENSITIES_MAX][TABLE_ROTATES_MAX];
    uint8_t progress_ignitions[TABLE_FILLING_MAX][TABLE_ROTATES_MAX];
    uint8_t progress_fill_by_density[TABLE_DENSITIES_MAX][TABLE_ROTATES_MAX];
    uint8_t progress_map_by_thr[TABLE_THROTTLES_MAX][TABLE_ROTATES_MAX];
    uint8_t progress_idle_valve_position[TABLE_TEMPERATURES_MAX];
    uint8_t progress_knock_cy_level_multiplier[ECU_CYLINDERS_COUNT][TABLE_ROTATES_MAX];
    uint8_t progress_idle_filling_by_density[TABLE_DENSITIES_MAX][TABLE_ROTATES_MAX];
    float knock_ignition_correctives[ECU_CYLINDERS_COUNT];
    float knock_injection_correctives[ECU_CYLINDERS_COUNT];
    float long_term_correction;
    float idle_correction;
}sEcuCorrections;

typedef struct {
    float progress_ignitions[TABLE_FILLING_MAX][TABLE_ROTATES_MAX];
    float progress_fill_by_density[TABLE_DENSITIES_MAX][TABLE_ROTATES_MAX];
    float progress_map_by_thr[TABLE_THROTTLES_MAX][TABLE_ROTATES_MAX];
    float progress_idle_valve_position[TABLE_TEMPERATURES_MAX];
    float progress_knock_cy_level_multiplier[ECU_CYLINDERS_COUNT][TABLE_ROTATES_MAX];
    float progress_idle_filling_by_density[TABLE_DENSITIES_MAX][TABLE_ROTATES_MAX];
}sEcuCorrectionsProgress;

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
    int32_t isLambdaForceEnabled;
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

    float res1;
    float res2;

    int32_t useShortTermCorr;
    int32_t useLongTermCorr;

    int32_t knockIntegratorTime;
    int32_t performIdleAdaptation;

    int32_t Reserved32[978];
}sEcuParams;

typedef struct {
    char CurrentTableName[TABLE_STRING_MAX];
    int32_t SwitchPosition;
    int32_t CurrentTable;
    int32_t InjectorChannel;

    float AdcKnockVoltage;
    float AdcAirTemp;
    float AdcEngineTemp;
    float AdcManifoldAirPressure;
    float AdcThrottlePosition;
    float AdcPowerVoltage;
    float AdcReferenceVoltage;
    float AdcLambdaUR;
    float AdcLambdaUA;

    float KnockSensor;
    float KnockSensorFiltered;
    float KnockSensorDetonate;
    float KnockZone;
    float KnockAdvance;
    int32_t KnockCount;
    int32_t KnockCountCy[ECU_CYLINDERS_COUNT];
    float AirTemp;
    float EngineTemp;
    float ManifoldAirPressure;
    float ThrottlePosition;
    float ReferenceVoltage;
    float PowerVoltage;
    float FuelRatio;
    float FuelRatioDiff;
    float LambdaValue;
    float LambdaTemperature;
    float LambdaHeaterVoltage;
    float LambdaTemperatureVoltage;
    float ShortTermCorrection;
    float LongTermCorrection;
    float IdleCorrection;

    int32_t IdleFlag;
    int32_t IdleCorrFlag;
    int32_t IdleEconFlag;
    float RPM;
    float Speed;
    float Acceleration;
    float MassAirFlow;
    float CyclicAirFlow;
    float EffectiveVolume;
    float AirDensity;
    float RelativeFilling;
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

    int32_t LambdaValid;

    int32_t OilSensor;
    int32_t FanForceSwitch;
    int32_t HandbrakeSensor;
    int32_t ChargeSensor;
    int32_t ClutchSensor;
    int32_t IgnSensor;

    int32_t FuelPumpRelay;
    int32_t FanRelay;
    int32_t CheckEngine;
    int32_t StarterRelay;
    int32_t FanSwitch;
    int32_t IgnOutput;

    int32_t StartAllowed;
    int32_t IsRunning;
    int32_t IsCheckEngine;

    int32_t CylinderIgnitionBitmask;
    int32_t CylinderInjectionBitmask;
}sParameters;

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
      uint8_t FanRelay;
      uint8_t FanSwitch;
      uint8_t FuelPumpRelay;
      uint8_t CheckEngine;
    } Enable;
    uint32_t pad;
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
