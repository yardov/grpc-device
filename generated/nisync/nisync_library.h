//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-SYNC
//---------------------------------------------------------------------
#ifndef NISYNC_GRPC_LIBRARY_H
#define NISYNC_GRPC_LIBRARY_H

#include "nisync_library_interface.h"

#include <server/shared_library_interface.h>

#include <memory>

namespace nisync_grpc {

class NiSyncLibrary : public nisync_grpc::NiSyncLibraryInterface {
 public:
  NiSyncLibrary();
  explicit NiSyncLibrary(std::shared_ptr<nidevice_grpc::SharedLibraryInterface> shared_library);
  virtual ~NiSyncLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus Init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  ViStatus Close(ViSession vi);
  ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  ViStatus Reset(ViSession vi);
  ViStatus PersistConfig(ViSession vi);
  ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  ViStatus RevisionQuery(ViSession vi, ViChar driverRevision[256], ViChar firmwareRevision[256]);
  ViStatus ConnectTrigTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge);
  ViStatus DisconnectTrigTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  ViStatus ConnectSWTrigToTerminal(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge, ViReal64 delay);
  ViStatus DisconnectSWTrigFromTerminal(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  ViStatus SendSoftwareTrigger(ViSession vi, ViConstString srcTerminal);
  ViStatus ConnectClkTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  ViStatus DisconnectClkTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal);
  ViStatus MeasureFrequency(ViSession vi, ViConstString srcTerminal, ViReal64 duration, ViReal64* actualDuration, ViReal64* frequency, ViReal64* error);
  ViStatus MeasureFrequencyEx(ViSession vi, ViConstString srcTerminal, ViReal64 duration, ViUInt32 decimationCount, ViReal64* actualDuration, ViReal64* frequency, ViReal64* frequencyError);
  ViStatus Start1588(ViSession vi);
  ViStatus Stop1588(ViSession vi);
  ViStatus Start8021AS(ViSession vi);
  ViStatus Stop8021AS(ViSession vi);
  ViStatus SetTime(ViSession vi, ViInt32 timeSource, ViUInt32 timeSeconds, ViUInt32 timeNanoseconds, ViUInt16 timeFractionalNanoseconds);
  ViStatus GetTime(ViSession vi, ViUInt32* timeSeconds, ViUInt32* timeNanoseconds, ViUInt16* timeFractionalNanoseconds);
  ViStatus ResetFrequency(ViSession vi);
  ViStatus CreateFutureTimeEvent(ViSession vi, ViConstString terminal, ViInt32 outputLevel, ViUInt32 timeSeconds, ViUInt32 timeNanoseconds, ViUInt16 timeFractionalNanoseconds);
  ViStatus ClearFutureTimeEvents(ViSession vi, ViConstString terminal);
  ViStatus EnableTimeStampTrigger(ViSession vi, ViConstString terminal, ViInt32 activeEdge);
  ViStatus EnableTimeStampTriggerWithDecimation(ViSession vi, ViConstString terminal, ViInt32 activeEdge, ViUInt32 decimationCount);
  ViStatus ReadTriggerTimeStamp(ViSession vi, ViConstString terminal, ViReal64 timeout, ViUInt32* timeSeconds, ViUInt32* timeNanoseconds, ViUInt16* timeFractionalNanoseconds, ViInt32* detectedEdge);
  ViStatus ReadMultipleTriggerTimeStamp(ViSession vi, ViConstString terminal, ViUInt32 timestampsToRead, ViReal64 timeout, ViUInt32 timeSecondsBuffer[], ViUInt32 timeNanosecondsBuffer[], ViUInt16 timeFractionalNanosecondsBuffer[], ViInt32 detectedEdgeBuffer[], ViUInt32* timestampsRead);
  ViStatus DisableTimeStampTrigger(ViSession vi, ViConstString terminal);
  ViStatus CreateClock(ViSession vi, ViConstString terminal, ViUInt32 highTicks, ViUInt32 lowTicks, ViUInt32 startTimeSeconds, ViUInt32 startTimeNanoseconds, ViUInt16 startTimeFractionalNanoseconds, ViUInt32 stopTimeSeconds, ViUInt32 stopTimeNanoseconds, ViUInt16 stopTimeFractionalNanoseconds);
  ViStatus ClearClock(ViSession vi, ViConstString terminal);
  ViStatus SetTimeReferenceFreeRunning(ViSession vi);
  ViStatus SetTimeReferenceGPS(ViSession vi);
  ViStatus SetTimeReferenceIRIG(ViSession vi, ViInt32 irigType, ViConstString terminalName);
  ViStatus SetTimeReferencePPS(ViSession vi, ViConstString terminalName, ViBoolean useManualTime, ViUInt32 initialTimeSeconds, ViUInt32 initialTimeNanoseconds, ViUInt16 initialTimeFractionalNanoseconds);
  ViStatus SetTimeReference1588OrdinaryClock(ViSession vi);
  ViStatus SetTimeReference8021AS(ViSession vi);
  ViStatus EnableGPSTimestamping(ViSession vi);
  ViStatus EnableIRIGTimestamping(ViSession vi, ViInt32 irigType, ViConstString terminalName);
  ViStatus ReadLastGPSTimestamp(ViSession vi, ViUInt32* timestampSeconds, ViUInt32* timestampNanoseconds, ViUInt16* timestampFractionalNanoseconds, ViUInt32* gpsSeconds, ViUInt32* gpsNanoseconds, ViUInt16* gpsFractionalNanoseconds);
  ViStatus ReadLastIRIGTimestamp(ViSession vi, ViConstString terminal, ViUInt32* timestampSeconds, ViUInt32* timestampNanoseconds, ViUInt16* timestampFractionalNanoseconds, ViUInt32* irigbSeconds, ViUInt32* irigbNanoseconds, ViUInt16* irigbFractionalNanoseconds);
  ViStatus DisableGPSTimestamping(ViSession vi);
  ViStatus DisableIRIGTimestamping(ViSession vi, ViConstString terminalName);
  ViStatus GetVelocity(ViSession vi, ViReal64* eastVelocity, ViReal64* northVelocity, ViReal64* upVelocity);
  ViStatus GetLocation(ViSession vi, ViReal64* latitude, ViReal64* longitude, ViReal64* altitude);
  ViStatus GetTimeReferenceNames(ViSession vi, ViUInt32 bufferSize, ViChar timeReferenceNames[]);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32* value);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64* value);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean* value);
  ViStatus GetAttributeViString(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 bufferSize, ViChar value[]);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 value);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64 value);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean value);
  ViStatus SetAttributeViString(ViSession vi, ViConstString activeItem, ViAttr attribute, ViConstString value);
  ViStatus GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute);
  ViStatus GetExtCalLastTemp(ViSession vi, ViReal64* temp);
  ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months);
  ViStatus ChangeExtCalPassword(ViSession vi, ViConstString oldPassword, ViConstString newPassword);
  ViStatus ReadCurrentTemperature(ViSession vi, ViReal64* temperature);
  ViStatus CalGetOscillatorVoltage(ViSession vi, ViReal64* voltage);
  ViStatus CalGetClk10PhaseVoltage(ViSession vi, ViReal64* voltage);
  ViStatus CalGetDDSStartPulsePhaseVoltage(ViSession vi, ViReal64* voltage);
  ViStatus CalGetDDSInitialPhase(ViSession vi, ViReal64* phase);
  ViStatus InitExtCal(ViRsrc resourceName, ViConstString password, ViSession* vi);
  ViStatus CloseExtCal(ViSession vi, ViInt32 action);
  ViStatus CalAdjustOscillatorVoltage(ViSession vi, ViReal64 measuredVoltage, ViReal64* oldVoltage);
  ViStatus CalAdjustClk10PhaseVoltage(ViSession vi, ViReal64 measuredVoltage, ViReal64* oldVoltage);
  ViStatus CalAdjustDDSStartPulsePhaseVoltage(ViSession vi, ViReal64 measuredVoltage, ViReal64* oldVoltage);
  ViStatus CalAdjustDDSInitialPhase(ViSession vi, ViReal64 measuredPhase, ViReal64* oldPhase);

 private:
  using InitPtr = decltype(&niSync_init);
  using ClosePtr = decltype(&niSync_close);
  using ErrorMessagePtr = decltype(&niSync_error_message);
  using ResetPtr = decltype(&niSync_reset);
  using PersistConfigPtr = decltype(&niSync_PersistConfig);
  using SelfTestPtr = decltype(&niSync_self_test);
  using RevisionQueryPtr = decltype(&niSync_revision_query);
  using ConnectTrigTerminalsPtr = decltype(&niSync_ConnectTrigTerminals);
  using DisconnectTrigTerminalsPtr = decltype(&niSync_DisconnectTrigTerminals);
  using ConnectSWTrigToTerminalPtr = decltype(&niSync_ConnectSWTrigToTerminal);
  using DisconnectSWTrigFromTerminalPtr = decltype(&niSync_DisconnectSWTrigFromTerminal);
  using SendSoftwareTriggerPtr = decltype(&niSync_SendSoftwareTrigger);
  using ConnectClkTerminalsPtr = decltype(&niSync_ConnectClkTerminals);
  using DisconnectClkTerminalsPtr = decltype(&niSync_DisconnectClkTerminals);
  using MeasureFrequencyPtr = decltype(&niSync_MeasureFrequency);
  using MeasureFrequencyExPtr = decltype(&niSync_MeasureFrequencyEx);
  using Start1588Ptr = decltype(&niSync_Start1588);
  using Stop1588Ptr = decltype(&niSync_Stop1588);
  using Start8021ASPtr = decltype(&niSync_Start8021AS);
  using Stop8021ASPtr = decltype(&niSync_Stop8021AS);
  using SetTimePtr = decltype(&niSync_SetTime);
  using GetTimePtr = decltype(&niSync_GetTime);
  using ResetFrequencyPtr = decltype(&niSync_ResetFrequency);
  using CreateFutureTimeEventPtr = decltype(&niSync_CreateFutureTimeEvent);
  using ClearFutureTimeEventsPtr = decltype(&niSync_ClearFutureTimeEvents);
  using EnableTimeStampTriggerPtr = decltype(&niSync_EnableTimeStampTrigger);
  using EnableTimeStampTriggerWithDecimationPtr = decltype(&niSync_EnableTimeStampTriggerWithDecimation);
  using ReadTriggerTimeStampPtr = decltype(&niSync_ReadTriggerTimeStamp);
  using ReadMultipleTriggerTimeStampPtr = decltype(&niSync_ReadMultipleTriggerTimeStamp);
  using DisableTimeStampTriggerPtr = decltype(&niSync_DisableTimeStampTrigger);
  using CreateClockPtr = decltype(&niSync_CreateClock);
  using ClearClockPtr = decltype(&niSync_ClearClock);
  using SetTimeReferenceFreeRunningPtr = decltype(&niSync_SetTimeReferenceFreeRunning);
  using SetTimeReferenceGPSPtr = decltype(&niSync_SetTimeReferenceGPS);
  using SetTimeReferenceIRIGPtr = decltype(&niSync_SetTimeReferenceIRIG);
  using SetTimeReferencePPSPtr = decltype(&niSync_SetTimeReferencePPS);
  using SetTimeReference1588OrdinaryClockPtr = decltype(&niSync_SetTimeReference1588OrdinaryClock);
  using SetTimeReference8021ASPtr = decltype(&niSync_SetTimeReference8021AS);
  using EnableGPSTimestampingPtr = decltype(&niSync_EnableGPSTimestamping);
  using EnableIRIGTimestampingPtr = decltype(&niSync_EnableIRIGTimestamping);
  using ReadLastGPSTimestampPtr = decltype(&niSync_ReadLastGPSTimestamp);
  using ReadLastIRIGTimestampPtr = decltype(&niSync_ReadLastIRIGTimestamp);
  using DisableGPSTimestampingPtr = decltype(&niSync_DisableGPSTimestamping);
  using DisableIRIGTimestampingPtr = decltype(&niSync_DisableIRIGTimestamping);
  using GetVelocityPtr = decltype(&niSync_GetVelocity);
  using GetLocationPtr = decltype(&niSync_GetLocation);
  using GetTimeReferenceNamesPtr = decltype(&niSync_GetTimeReferenceNames);
  using GetAttributeViInt32Ptr = decltype(&niSync_GetAttributeViInt32);
  using GetAttributeViReal64Ptr = decltype(&niSync_GetAttributeViReal64);
  using GetAttributeViBooleanPtr = decltype(&niSync_GetAttributeViBoolean);
  using GetAttributeViStringPtr = decltype(&niSync_GetAttributeViString);
  using SetAttributeViInt32Ptr = decltype(&niSync_SetAttributeViInt32);
  using SetAttributeViReal64Ptr = decltype(&niSync_SetAttributeViReal64);
  using SetAttributeViBooleanPtr = decltype(&niSync_SetAttributeViBoolean);
  using SetAttributeViStringPtr = decltype(&niSync_SetAttributeViString);
  using GetExtCalLastDateAndTimePtr = decltype(&niSync_GetExtCalLastDateAndTime);
  using GetExtCalLastTempPtr = decltype(&niSync_GetExtCalLastTemp);
  using GetExtCalRecommendedIntervalPtr = decltype(&niSync_GetExtCalRecommendedInterval);
  using ChangeExtCalPasswordPtr = decltype(&niSync_ChangeExtCalPassword);
  using ReadCurrentTemperaturePtr = decltype(&niSync_ReadCurrentTemperature);
  using CalGetOscillatorVoltagePtr = decltype(&niSync_CalGetOscillatorVoltage);
  using CalGetClk10PhaseVoltagePtr = decltype(&niSync_CalGetClk10PhaseVoltage);
  using CalGetDDSStartPulsePhaseVoltagePtr = decltype(&niSync_CalGetDDSStartPulsePhaseVoltage);
  using CalGetDDSInitialPhasePtr = decltype(&niSync_CalGetDDSInitialPhase);
  using InitExtCalPtr = decltype(&niSync_InitExtCal);
  using CloseExtCalPtr = decltype(&niSync_CloseExtCal);
  using CalAdjustOscillatorVoltagePtr = decltype(&niSync_CalAdjustOscillatorVoltage);
  using CalAdjustClk10PhaseVoltagePtr = decltype(&niSync_CalAdjustClk10PhaseVoltage);
  using CalAdjustDDSStartPulsePhaseVoltagePtr = decltype(&niSync_CalAdjustDDSStartPulsePhaseVoltage);
  using CalAdjustDDSInitialPhasePtr = decltype(&niSync_CalAdjustDDSInitialPhase);

  typedef struct FunctionPointers {
    InitPtr Init;
    ClosePtr Close;
    ErrorMessagePtr ErrorMessage;
    ResetPtr Reset;
    PersistConfigPtr PersistConfig;
    SelfTestPtr SelfTest;
    RevisionQueryPtr RevisionQuery;
    ConnectTrigTerminalsPtr ConnectTrigTerminals;
    DisconnectTrigTerminalsPtr DisconnectTrigTerminals;
    ConnectSWTrigToTerminalPtr ConnectSWTrigToTerminal;
    DisconnectSWTrigFromTerminalPtr DisconnectSWTrigFromTerminal;
    SendSoftwareTriggerPtr SendSoftwareTrigger;
    ConnectClkTerminalsPtr ConnectClkTerminals;
    DisconnectClkTerminalsPtr DisconnectClkTerminals;
    MeasureFrequencyPtr MeasureFrequency;
    MeasureFrequencyExPtr MeasureFrequencyEx;
    Start1588Ptr Start1588;
    Stop1588Ptr Stop1588;
    Start8021ASPtr Start8021AS;
    Stop8021ASPtr Stop8021AS;
    SetTimePtr SetTime;
    GetTimePtr GetTime;
    ResetFrequencyPtr ResetFrequency;
    CreateFutureTimeEventPtr CreateFutureTimeEvent;
    ClearFutureTimeEventsPtr ClearFutureTimeEvents;
    EnableTimeStampTriggerPtr EnableTimeStampTrigger;
    EnableTimeStampTriggerWithDecimationPtr EnableTimeStampTriggerWithDecimation;
    ReadTriggerTimeStampPtr ReadTriggerTimeStamp;
    ReadMultipleTriggerTimeStampPtr ReadMultipleTriggerTimeStamp;
    DisableTimeStampTriggerPtr DisableTimeStampTrigger;
    CreateClockPtr CreateClock;
    ClearClockPtr ClearClock;
    SetTimeReferenceFreeRunningPtr SetTimeReferenceFreeRunning;
    SetTimeReferenceGPSPtr SetTimeReferenceGPS;
    SetTimeReferenceIRIGPtr SetTimeReferenceIRIG;
    SetTimeReferencePPSPtr SetTimeReferencePPS;
    SetTimeReference1588OrdinaryClockPtr SetTimeReference1588OrdinaryClock;
    SetTimeReference8021ASPtr SetTimeReference8021AS;
    EnableGPSTimestampingPtr EnableGPSTimestamping;
    EnableIRIGTimestampingPtr EnableIRIGTimestamping;
    ReadLastGPSTimestampPtr ReadLastGPSTimestamp;
    ReadLastIRIGTimestampPtr ReadLastIRIGTimestamp;
    DisableGPSTimestampingPtr DisableGPSTimestamping;
    DisableIRIGTimestampingPtr DisableIRIGTimestamping;
    GetVelocityPtr GetVelocity;
    GetLocationPtr GetLocation;
    GetTimeReferenceNamesPtr GetTimeReferenceNames;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    GetAttributeViStringPtr GetAttributeViString;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    SetAttributeViReal64Ptr SetAttributeViReal64;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    SetAttributeViStringPtr SetAttributeViString;
    GetExtCalLastDateAndTimePtr GetExtCalLastDateAndTime;
    GetExtCalLastTempPtr GetExtCalLastTemp;
    GetExtCalRecommendedIntervalPtr GetExtCalRecommendedInterval;
    ChangeExtCalPasswordPtr ChangeExtCalPassword;
    ReadCurrentTemperaturePtr ReadCurrentTemperature;
    CalGetOscillatorVoltagePtr CalGetOscillatorVoltage;
    CalGetClk10PhaseVoltagePtr CalGetClk10PhaseVoltage;
    CalGetDDSStartPulsePhaseVoltagePtr CalGetDDSStartPulsePhaseVoltage;
    CalGetDDSInitialPhasePtr CalGetDDSInitialPhase;
    InitExtCalPtr InitExtCal;
    CloseExtCalPtr CloseExtCal;
    CalAdjustOscillatorVoltagePtr CalAdjustOscillatorVoltage;
    CalAdjustClk10PhaseVoltagePtr CalAdjustClk10PhaseVoltage;
    CalAdjustDDSStartPulsePhaseVoltagePtr CalAdjustDDSStartPulsePhaseVoltage;
    CalAdjustDDSInitialPhasePtr CalAdjustDDSInitialPhase;
  } FunctionLoadStatus;

  std::shared_ptr<nidevice_grpc::SharedLibraryInterface> shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nisync_grpc

#endif  // NISYNC_GRPC_LIBRARY_H
