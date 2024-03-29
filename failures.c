/*
 * failures.c
 *
 *  Created on: 24 мар. 2022 г.
 *      Author: VHEMaster
 */


const char * const gCheckDataErrorString[] = {
    "Invalid",
    "Flash: Load failure",
    "Flash: Save failure",
    "Flash: Init failure",
    "Bkpsram: Save failure",
    "Bkpsram: Load failure",
    "Sensor: MAP failure",
    "Sensor: Knock failure",
    "Sensor: CSPS failure",
    "Sensor: TSPS failure",
    "Sensor: AirTemp failure",
    "Sensor: EngineTemp failure",
    "Sensor: TPS failure",
    "Sensor: RefVoltage failure",
    "Sensor: PwrVoltage failure",
    "Sensor: Lambda failure",

    "Output: Driver failure",
    "CAN: Init failure",
    "CAN: Test failure",
    "KLine: Protocol failure",
    "KLine: Loopback failure",

    "Injector 4: OpenCircuit",
    "Injector 4: ShortToBatOrOverheat",
    "Injector 4: ShortToGND",
    "Injector 3: OpenCircuit",
    "Injector 3: ShortToBatOrOverheat",
    "Injector 3: ShortToGND",
    "Injector 2: OpenCircuit",
    "Injector 2: ShortToBatOrOverheat",
    "Injector 2: ShortToGND",
    "Injector 1: OpenCircuit",
    "Injector 1: ShortToBatOrOverheat",
    "Injector 1: ShortToGND",
    "Injector: Communication failure",

    "CheckEngine: OpenCircuit",
    "CheckEngine: ShortToBatOrOverheat",
    "CheckEngine: ShortToGND",
    "SpeedMeter: OpenCircuit",
    "SpeedMeter: ShortToBatOrOverheat",
    "SpeedMeter: ShortToGND",
    "Tachometer: OpenCircuit",
    "Tachometer: ShortToBatOrOverheat",
    "Tachometer: ShortToGND",
    "FuelPump: OpenCircuit",
    "FuelPump: ShortToBatOrOverheat",
    "FuelPump: ShortToGND",
    "Outputs1: CommFailure",

    "OutIgn: OpenCircuit",
    "OutIgn: ShortToBatOrOverheat",
    "OutIgn: ShortToGND",
    "FanSwitch: OpenCircuit",
    "FanSwitch: ShortToBatOrOverheat",
    "FanSwitch: ShortToGND",
    "StarterRelay: OpenCircuit",
    "StarterRelay: ShortToBatOrOverheat",
    "StarterRelay: ShortToGND",
    "FanRelay: OpenCircuit",
    "FanRelay: ShortToBatOrOverheat",
    "FanRelay: ShortToGND",
    "Outputs2: CommFailure",

    "IdleValve: Failure",
    "IdleValve: Driver failure",
    "Injection: Fuel underflow",
    "ADC: Communication Failure",

    "Lambda: CommFailure",
    "Lambda: VM ShortToBat",
    "Lambda: VM LowBattery",
    "Lambda: VM ShortToGnd",
    "Lambda: UN ShortToBat",
    "Lambda: UN LowBattery",
    "Lambda: UN ShortToGnd",
    "Lambda: IAIP ShortToBat",
    "Lambda: IAIP LowBattery",
    "Lambda: IAIP ShortToGnd",
    "Lambda: DIAHGD ShortToBat",
    "Lambda: DIAHGD OpenCircuit",
    "Lambda: DIAHGD ShortToGnd",
    "Lambda: Temp.failure",
    "Lambda: Heater failure",

    "Knock: Detonation",
    "Knock: Low Noise",

    "TSPS: Phase Desynch",
    "CPU: HardFault",
    "Sensor: MAP/TPS Mismatch",
    "Sensor: Lean Mixture",
    "Sensor: Rich Mixture",
    "Sensor: Lean Idle Mixture",
    "Sensor: Rich Idle Mixture",

    "Engine: No Oil Pressure",
    "Engine: No Battery Charge",

    "ECU: BootLoader Mode",

    "Knock: Cylinder 1",
    "Knock: Cylinder 2",
    "Knock: Cylinder 3",
    "Knock: Cylinder 4",

    "ETC: Comm Error",
    "ETC: Pedal1",
    "ETC: Pedal2",
    "ETC: Pedal Mismatch",
    "ETC: TPS1",
    "ETC: TPS2",
    "ETC: TPS Mismatch",
    "ETC: Adc Error",
    "ETC: Internal Comm",
    "ETC:Motor: Availability",
    "ETC:Motor: OpenLoad",
    "ETC:Motor: ShortToGND",
    "ETC:Motor: ShortToSupply",
    "ETC:Motor: Temperature",
    "ETC:Motor: SupplyFailure",
    "ETC:Motor: ErrorFlag",
    "ETC:Motor: AlwaysHigh",
};
