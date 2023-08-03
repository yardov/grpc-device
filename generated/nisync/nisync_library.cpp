//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-SYNC Metadata
//---------------------------------------------------------------------
#include "nisync_library.h"
#include <server/shared_library.h>

#include <memory>

#if defined(_MSC_VER)
static const char* kLibraryName = "nisync.dll";
#else
static const char* kLibraryName = "libnisync.so";
#endif

namespace nisync_grpc {

NiSyncLibrary::NiSyncLibrary() : NiSyncLibrary(std::make_shared<nidevice_grpc::SharedLibrary>()) {}

NiSyncLibrary::NiSyncLibrary(std::shared_ptr<nidevice_grpc::SharedLibraryInterface> shared_library) : shared_library_(shared_library)
{
  shared_library_->set_library_name(kLibraryName);
  shared_library_->load();
  bool loaded = shared_library_->is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.Init = reinterpret_cast<InitPtr>(shared_library_->get_function_pointer("niSync_init"));
  function_pointers_.Close = reinterpret_cast<ClosePtr>(shared_library_->get_function_pointer("niSync_close"));
  function_pointers_.ErrorMessage = reinterpret_cast<ErrorMessagePtr>(shared_library_->get_function_pointer("niSync_error_message"));
  function_pointers_.Reset = reinterpret_cast<ResetPtr>(shared_library_->get_function_pointer("niSync_reset"));
  function_pointers_.PersistConfig = reinterpret_cast<PersistConfigPtr>(shared_library_->get_function_pointer("niSync_PersistConfig"));
  function_pointers_.SelfTest = reinterpret_cast<SelfTestPtr>(shared_library_->get_function_pointer("niSync_self_test"));
  function_pointers_.RevisionQuery = reinterpret_cast<RevisionQueryPtr>(shared_library_->get_function_pointer("niSync_revision_query"));
  function_pointers_.ConnectTrigTerminals = reinterpret_cast<ConnectTrigTerminalsPtr>(shared_library_->get_function_pointer("niSync_ConnectTrigTerminals"));
  function_pointers_.DisconnectTrigTerminals = reinterpret_cast<DisconnectTrigTerminalsPtr>(shared_library_->get_function_pointer("niSync_DisconnectTrigTerminals"));
  function_pointers_.ConnectSWTrigToTerminal = reinterpret_cast<ConnectSWTrigToTerminalPtr>(shared_library_->get_function_pointer("niSync_ConnectSWTrigToTerminal"));
  function_pointers_.DisconnectSWTrigFromTerminal = reinterpret_cast<DisconnectSWTrigFromTerminalPtr>(shared_library_->get_function_pointer("niSync_DisconnectSWTrigFromTerminal"));
  function_pointers_.SendSoftwareTrigger = reinterpret_cast<SendSoftwareTriggerPtr>(shared_library_->get_function_pointer("niSync_SendSoftwareTrigger"));
  function_pointers_.ConnectClkTerminals = reinterpret_cast<ConnectClkTerminalsPtr>(shared_library_->get_function_pointer("niSync_ConnectClkTerminals"));
  function_pointers_.DisconnectClkTerminals = reinterpret_cast<DisconnectClkTerminalsPtr>(shared_library_->get_function_pointer("niSync_DisconnectClkTerminals"));
  function_pointers_.MeasureFrequency = reinterpret_cast<MeasureFrequencyPtr>(shared_library_->get_function_pointer("niSync_MeasureFrequency"));
  function_pointers_.MeasureFrequencyEx = reinterpret_cast<MeasureFrequencyExPtr>(shared_library_->get_function_pointer("niSync_MeasureFrequencyEx"));
  function_pointers_.Start1588 = reinterpret_cast<Start1588Ptr>(shared_library_->get_function_pointer("niSync_Start1588"));
  function_pointers_.Stop1588 = reinterpret_cast<Stop1588Ptr>(shared_library_->get_function_pointer("niSync_Stop1588"));
  function_pointers_.Start8021AS = reinterpret_cast<Start8021ASPtr>(shared_library_->get_function_pointer("niSync_Start8021AS"));
  function_pointers_.Stop8021AS = reinterpret_cast<Stop8021ASPtr>(shared_library_->get_function_pointer("niSync_Stop8021AS"));
  function_pointers_.SetTime = reinterpret_cast<SetTimePtr>(shared_library_->get_function_pointer("niSync_SetTime"));
  function_pointers_.GetTime = reinterpret_cast<GetTimePtr>(shared_library_->get_function_pointer("niSync_GetTime"));
  function_pointers_.ResetFrequency = reinterpret_cast<ResetFrequencyPtr>(shared_library_->get_function_pointer("niSync_ResetFrequency"));
  function_pointers_.CreateFutureTimeEvent = reinterpret_cast<CreateFutureTimeEventPtr>(shared_library_->get_function_pointer("niSync_CreateFutureTimeEvent"));
  function_pointers_.ClearFutureTimeEvents = reinterpret_cast<ClearFutureTimeEventsPtr>(shared_library_->get_function_pointer("niSync_ClearFutureTimeEvents"));
  function_pointers_.EnableTimeStampTrigger = reinterpret_cast<EnableTimeStampTriggerPtr>(shared_library_->get_function_pointer("niSync_EnableTimeStampTrigger"));
  function_pointers_.EnableTimeStampTriggerWithDecimation = reinterpret_cast<EnableTimeStampTriggerWithDecimationPtr>(shared_library_->get_function_pointer("niSync_EnableTimeStampTriggerWithDecimation"));
  function_pointers_.ReadTriggerTimeStamp = reinterpret_cast<ReadTriggerTimeStampPtr>(shared_library_->get_function_pointer("niSync_ReadTriggerTimeStamp"));
  function_pointers_.ReadMultipleTriggerTimeStamp = reinterpret_cast<ReadMultipleTriggerTimeStampPtr>(shared_library_->get_function_pointer("niSync_ReadMultipleTriggerTimeStamp"));
  function_pointers_.DisableTimeStampTrigger = reinterpret_cast<DisableTimeStampTriggerPtr>(shared_library_->get_function_pointer("niSync_DisableTimeStampTrigger"));
  function_pointers_.CreateClock = reinterpret_cast<CreateClockPtr>(shared_library_->get_function_pointer("niSync_CreateClock"));
  function_pointers_.ClearClock = reinterpret_cast<ClearClockPtr>(shared_library_->get_function_pointer("niSync_ClearClock"));
  function_pointers_.SetTimeReferenceFreeRunning = reinterpret_cast<SetTimeReferenceFreeRunningPtr>(shared_library_->get_function_pointer("niSync_SetTimeReferenceFreeRunning"));
  function_pointers_.SetTimeReferenceGPS = reinterpret_cast<SetTimeReferenceGPSPtr>(shared_library_->get_function_pointer("niSync_SetTimeReferenceGPS"));
  function_pointers_.SetTimeReferenceIRIG = reinterpret_cast<SetTimeReferenceIRIGPtr>(shared_library_->get_function_pointer("niSync_SetTimeReferenceIRIG"));
  function_pointers_.SetTimeReferencePPS = reinterpret_cast<SetTimeReferencePPSPtr>(shared_library_->get_function_pointer("niSync_SetTimeReferencePPS"));
  function_pointers_.SetTimeReference1588OrdinaryClock = reinterpret_cast<SetTimeReference1588OrdinaryClockPtr>(shared_library_->get_function_pointer("niSync_SetTimeReference1588OrdinaryClock"));
  function_pointers_.SetTimeReference8021AS = reinterpret_cast<SetTimeReference8021ASPtr>(shared_library_->get_function_pointer("niSync_SetTimeReference8021AS"));
  function_pointers_.EnableGPSTimestamping = reinterpret_cast<EnableGPSTimestampingPtr>(shared_library_->get_function_pointer("niSync_EnableGPSTimestamping"));
  function_pointers_.EnableIRIGTimestamping = reinterpret_cast<EnableIRIGTimestampingPtr>(shared_library_->get_function_pointer("niSync_EnableIRIGTimestamping"));
  function_pointers_.ReadLastGPSTimestamp = reinterpret_cast<ReadLastGPSTimestampPtr>(shared_library_->get_function_pointer("niSync_ReadLastGPSTimestamp"));
  function_pointers_.ReadLastIRIGTimestamp = reinterpret_cast<ReadLastIRIGTimestampPtr>(shared_library_->get_function_pointer("niSync_ReadLastIRIGTimestamp"));
  function_pointers_.DisableGPSTimestamping = reinterpret_cast<DisableGPSTimestampingPtr>(shared_library_->get_function_pointer("niSync_DisableGPSTimestamping"));
  function_pointers_.DisableIRIGTimestamping = reinterpret_cast<DisableIRIGTimestampingPtr>(shared_library_->get_function_pointer("niSync_DisableIRIGTimestamping"));
  function_pointers_.GetVelocity = reinterpret_cast<GetVelocityPtr>(shared_library_->get_function_pointer("niSync_GetVelocity"));
  function_pointers_.GetLocation = reinterpret_cast<GetLocationPtr>(shared_library_->get_function_pointer("niSync_GetLocation"));
  function_pointers_.GetTimeReferenceNames = reinterpret_cast<GetTimeReferenceNamesPtr>(shared_library_->get_function_pointer("niSync_GetTimeReferenceNames"));
  function_pointers_.GetAttributeViInt32 = reinterpret_cast<GetAttributeViInt32Ptr>(shared_library_->get_function_pointer("niSync_GetAttributeViInt32"));
  function_pointers_.GetAttributeViReal64 = reinterpret_cast<GetAttributeViReal64Ptr>(shared_library_->get_function_pointer("niSync_GetAttributeViReal64"));
  function_pointers_.GetAttributeViBoolean = reinterpret_cast<GetAttributeViBooleanPtr>(shared_library_->get_function_pointer("niSync_GetAttributeViBoolean"));
  function_pointers_.GetAttributeViString = reinterpret_cast<GetAttributeViStringPtr>(shared_library_->get_function_pointer("niSync_GetAttributeViString"));
  function_pointers_.SetAttributeViInt32 = reinterpret_cast<SetAttributeViInt32Ptr>(shared_library_->get_function_pointer("niSync_SetAttributeViInt32"));
  function_pointers_.SetAttributeViReal64 = reinterpret_cast<SetAttributeViReal64Ptr>(shared_library_->get_function_pointer("niSync_SetAttributeViReal64"));
  function_pointers_.SetAttributeViBoolean = reinterpret_cast<SetAttributeViBooleanPtr>(shared_library_->get_function_pointer("niSync_SetAttributeViBoolean"));
  function_pointers_.SetAttributeViString = reinterpret_cast<SetAttributeViStringPtr>(shared_library_->get_function_pointer("niSync_SetAttributeViString"));
  function_pointers_.GetExtCalLastDateAndTime = reinterpret_cast<GetExtCalLastDateAndTimePtr>(shared_library_->get_function_pointer("niSync_GetExtCalLastDateAndTime"));
  function_pointers_.GetExtCalLastTemp = reinterpret_cast<GetExtCalLastTempPtr>(shared_library_->get_function_pointer("niSync_GetExtCalLastTemp"));
  function_pointers_.GetExtCalRecommendedInterval = reinterpret_cast<GetExtCalRecommendedIntervalPtr>(shared_library_->get_function_pointer("niSync_GetExtCalRecommendedInterval"));
  function_pointers_.ChangeExtCalPassword = reinterpret_cast<ChangeExtCalPasswordPtr>(shared_library_->get_function_pointer("niSync_ChangeExtCalPassword"));
  function_pointers_.ReadCurrentTemperature = reinterpret_cast<ReadCurrentTemperaturePtr>(shared_library_->get_function_pointer("niSync_ReadCurrentTemperature"));
  function_pointers_.CalGetOscillatorVoltage = reinterpret_cast<CalGetOscillatorVoltagePtr>(shared_library_->get_function_pointer("niSync_CalGetOscillatorVoltage"));
  function_pointers_.CalGetClk10PhaseVoltage = reinterpret_cast<CalGetClk10PhaseVoltagePtr>(shared_library_->get_function_pointer("niSync_CalGetClk10PhaseVoltage"));
  function_pointers_.CalGetDDSStartPulsePhaseVoltage = reinterpret_cast<CalGetDDSStartPulsePhaseVoltagePtr>(shared_library_->get_function_pointer("niSync_CalGetDDSStartPulsePhaseVoltage"));
  function_pointers_.CalGetDDSInitialPhase = reinterpret_cast<CalGetDDSInitialPhasePtr>(shared_library_->get_function_pointer("niSync_CalGetDDSInitialPhase"));
  function_pointers_.InitExtCal = reinterpret_cast<InitExtCalPtr>(shared_library_->get_function_pointer("niSync_InitExtCal"));
  function_pointers_.CloseExtCal = reinterpret_cast<CloseExtCalPtr>(shared_library_->get_function_pointer("niSync_CloseExtCal"));
  function_pointers_.CalAdjustOscillatorVoltage = reinterpret_cast<CalAdjustOscillatorVoltagePtr>(shared_library_->get_function_pointer("niSync_CalAdjustOscillatorVoltage"));
  function_pointers_.CalAdjustClk10PhaseVoltage = reinterpret_cast<CalAdjustClk10PhaseVoltagePtr>(shared_library_->get_function_pointer("niSync_CalAdjustClk10PhaseVoltage"));
  function_pointers_.CalAdjustDDSStartPulsePhaseVoltage = reinterpret_cast<CalAdjustDDSStartPulsePhaseVoltagePtr>(shared_library_->get_function_pointer("niSync_CalAdjustDDSStartPulsePhaseVoltage"));
  function_pointers_.CalAdjustDDSInitialPhase = reinterpret_cast<CalAdjustDDSInitialPhasePtr>(shared_library_->get_function_pointer("niSync_CalAdjustDDSInitialPhase"));
}

NiSyncLibrary::~NiSyncLibrary()
{
}

::grpc::Status NiSyncLibrary::check_function_exists(std::string functionName)
{
  return shared_library_->function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

ViStatus NiSyncLibrary::Init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi)
{
  if (!function_pointers_.Init) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_init.");
  }
  return function_pointers_.Init(resourceName, idQuery, resetDevice, vi);
}

ViStatus NiSyncLibrary::Close(ViSession vi)
{
  if (!function_pointers_.Close) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_close.");
  }
  return function_pointers_.Close(vi);
}

ViStatus NiSyncLibrary::ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256])
{
  if (!function_pointers_.ErrorMessage) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_error_message.");
  }
  return function_pointers_.ErrorMessage(vi, errorCode, errorMessage);
}

ViStatus NiSyncLibrary::Reset(ViSession vi)
{
  if (!function_pointers_.Reset) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_reset.");
  }
  return function_pointers_.Reset(vi);
}

ViStatus NiSyncLibrary::PersistConfig(ViSession vi)
{
  if (!function_pointers_.PersistConfig) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_PersistConfig.");
  }
  return function_pointers_.PersistConfig(vi);
}

ViStatus NiSyncLibrary::SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256])
{
  if (!function_pointers_.SelfTest) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_self_test.");
  }
  return function_pointers_.SelfTest(vi, selfTestResult, selfTestMessage);
}

ViStatus NiSyncLibrary::RevisionQuery(ViSession vi, ViChar driverRevision[256], ViChar firmwareRevision[256])
{
  if (!function_pointers_.RevisionQuery) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_revision_query.");
  }
  return function_pointers_.RevisionQuery(vi, driverRevision, firmwareRevision);
}

ViStatus NiSyncLibrary::ConnectTrigTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge)
{
  if (!function_pointers_.ConnectTrigTerminals) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ConnectTrigTerminals.");
  }
  return function_pointers_.ConnectTrigTerminals(vi, srcTerminal, destTerminal, syncClock, invert, updateEdge);
}

ViStatus NiSyncLibrary::DisconnectTrigTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal)
{
  if (!function_pointers_.DisconnectTrigTerminals) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_DisconnectTrigTerminals.");
  }
  return function_pointers_.DisconnectTrigTerminals(vi, srcTerminal, destTerminal);
}

ViStatus NiSyncLibrary::ConnectSWTrigToTerminal(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal, ViConstString syncClock, ViInt32 invert, ViInt32 updateEdge, ViReal64 delay)
{
  if (!function_pointers_.ConnectSWTrigToTerminal) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ConnectSWTrigToTerminal.");
  }
  return function_pointers_.ConnectSWTrigToTerminal(vi, srcTerminal, destTerminal, syncClock, invert, updateEdge, delay);
}

ViStatus NiSyncLibrary::DisconnectSWTrigFromTerminal(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal)
{
  if (!function_pointers_.DisconnectSWTrigFromTerminal) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_DisconnectSWTrigFromTerminal.");
  }
  return function_pointers_.DisconnectSWTrigFromTerminal(vi, srcTerminal, destTerminal);
}

ViStatus NiSyncLibrary::SendSoftwareTrigger(ViSession vi, ViConstString srcTerminal)
{
  if (!function_pointers_.SendSoftwareTrigger) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SendSoftwareTrigger.");
  }
  return function_pointers_.SendSoftwareTrigger(vi, srcTerminal);
}

ViStatus NiSyncLibrary::ConnectClkTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal)
{
  if (!function_pointers_.ConnectClkTerminals) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ConnectClkTerminals.");
  }
  return function_pointers_.ConnectClkTerminals(vi, srcTerminal, destTerminal);
}

ViStatus NiSyncLibrary::DisconnectClkTerminals(ViSession vi, ViConstString srcTerminal, ViConstString destTerminal)
{
  if (!function_pointers_.DisconnectClkTerminals) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_DisconnectClkTerminals.");
  }
  return function_pointers_.DisconnectClkTerminals(vi, srcTerminal, destTerminal);
}

ViStatus NiSyncLibrary::MeasureFrequency(ViSession vi, ViConstString srcTerminal, ViReal64 duration, ViReal64* actualDuration, ViReal64* frequency, ViReal64* error)
{
  if (!function_pointers_.MeasureFrequency) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_MeasureFrequency.");
  }
  return function_pointers_.MeasureFrequency(vi, srcTerminal, duration, actualDuration, frequency, error);
}

ViStatus NiSyncLibrary::MeasureFrequencyEx(ViSession vi, ViConstString srcTerminal, ViReal64 duration, ViUInt32 decimationCount, ViReal64* actualDuration, ViReal64* frequency, ViReal64* frequencyError)
{
  if (!function_pointers_.MeasureFrequencyEx) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_MeasureFrequencyEx.");
  }
  return function_pointers_.MeasureFrequencyEx(vi, srcTerminal, duration, decimationCount, actualDuration, frequency, frequencyError);
}

ViStatus NiSyncLibrary::Start1588(ViSession vi)
{
  if (!function_pointers_.Start1588) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_Start1588.");
  }
  return function_pointers_.Start1588(vi);
}

ViStatus NiSyncLibrary::Stop1588(ViSession vi)
{
  if (!function_pointers_.Stop1588) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_Stop1588.");
  }
  return function_pointers_.Stop1588(vi);
}

ViStatus NiSyncLibrary::Start8021AS(ViSession vi)
{
  if (!function_pointers_.Start8021AS) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_Start8021AS.");
  }
  return function_pointers_.Start8021AS(vi);
}

ViStatus NiSyncLibrary::Stop8021AS(ViSession vi)
{
  if (!function_pointers_.Stop8021AS) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_Stop8021AS.");
  }
  return function_pointers_.Stop8021AS(vi);
}

ViStatus NiSyncLibrary::SetTime(ViSession vi, ViInt32 timeSource, ViUInt32 timeSeconds, ViUInt32 timeNanoseconds, ViUInt16 timeFractionalNanoseconds)
{
  if (!function_pointers_.SetTime) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SetTime.");
  }
  return function_pointers_.SetTime(vi, timeSource, timeSeconds, timeNanoseconds, timeFractionalNanoseconds);
}

ViStatus NiSyncLibrary::GetTime(ViSession vi, ViUInt32* timeSeconds, ViUInt32* timeNanoseconds, ViUInt16* timeFractionalNanoseconds)
{
  if (!function_pointers_.GetTime) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_GetTime.");
  }
  return function_pointers_.GetTime(vi, timeSeconds, timeNanoseconds, timeFractionalNanoseconds);
}

ViStatus NiSyncLibrary::ResetFrequency(ViSession vi)
{
  if (!function_pointers_.ResetFrequency) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ResetFrequency.");
  }
  return function_pointers_.ResetFrequency(vi);
}

ViStatus NiSyncLibrary::CreateFutureTimeEvent(ViSession vi, ViConstString terminal, ViInt32 outputLevel, ViUInt32 timeSeconds, ViUInt32 timeNanoseconds, ViUInt16 timeFractionalNanoseconds)
{
  if (!function_pointers_.CreateFutureTimeEvent) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_CreateFutureTimeEvent.");
  }
  return function_pointers_.CreateFutureTimeEvent(vi, terminal, outputLevel, timeSeconds, timeNanoseconds, timeFractionalNanoseconds);
}

ViStatus NiSyncLibrary::ClearFutureTimeEvents(ViSession vi, ViConstString terminal)
{
  if (!function_pointers_.ClearFutureTimeEvents) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ClearFutureTimeEvents.");
  }
  return function_pointers_.ClearFutureTimeEvents(vi, terminal);
}

ViStatus NiSyncLibrary::EnableTimeStampTrigger(ViSession vi, ViConstString terminal, ViInt32 activeEdge)
{
  if (!function_pointers_.EnableTimeStampTrigger) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_EnableTimeStampTrigger.");
  }
  return function_pointers_.EnableTimeStampTrigger(vi, terminal, activeEdge);
}

ViStatus NiSyncLibrary::EnableTimeStampTriggerWithDecimation(ViSession vi, ViConstString terminal, ViInt32 activeEdge, ViUInt32 decimationCount)
{
  if (!function_pointers_.EnableTimeStampTriggerWithDecimation) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_EnableTimeStampTriggerWithDecimation.");
  }
  return function_pointers_.EnableTimeStampTriggerWithDecimation(vi, terminal, activeEdge, decimationCount);
}

ViStatus NiSyncLibrary::ReadTriggerTimeStamp(ViSession vi, ViConstString terminal, ViReal64 timeout, ViUInt32* timeSeconds, ViUInt32* timeNanoseconds, ViUInt16* timeFractionalNanoseconds, ViInt32* detectedEdge)
{
  if (!function_pointers_.ReadTriggerTimeStamp) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ReadTriggerTimeStamp.");
  }
  return function_pointers_.ReadTriggerTimeStamp(vi, terminal, timeout, timeSeconds, timeNanoseconds, timeFractionalNanoseconds, detectedEdge);
}

ViStatus NiSyncLibrary::ReadMultipleTriggerTimeStamp(ViSession vi, ViConstString terminal, ViUInt32 timestampsToRead, ViReal64 timeout, ViUInt32 timeSecondsBuffer[], ViUInt32 timeNanosecondsBuffer[], ViUInt16 timeFractionalNanosecondsBuffer[], ViInt32 detectedEdgeBuffer[], ViUInt32* timestampsRead)
{
  if (!function_pointers_.ReadMultipleTriggerTimeStamp) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ReadMultipleTriggerTimeStamp.");
  }
  return function_pointers_.ReadMultipleTriggerTimeStamp(vi, terminal, timestampsToRead, timeout, timeSecondsBuffer, timeNanosecondsBuffer, timeFractionalNanosecondsBuffer, detectedEdgeBuffer, timestampsRead);
}

ViStatus NiSyncLibrary::DisableTimeStampTrigger(ViSession vi, ViConstString terminal)
{
  if (!function_pointers_.DisableTimeStampTrigger) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_DisableTimeStampTrigger.");
  }
  return function_pointers_.DisableTimeStampTrigger(vi, terminal);
}

ViStatus NiSyncLibrary::CreateClock(ViSession vi, ViConstString terminal, ViUInt32 highTicks, ViUInt32 lowTicks, ViUInt32 startTimeSeconds, ViUInt32 startTimeNanoseconds, ViUInt16 startTimeFractionalNanoseconds, ViUInt32 stopTimeSeconds, ViUInt32 stopTimeNanoseconds, ViUInt16 stopTimeFractionalNanoseconds)
{
  if (!function_pointers_.CreateClock) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_CreateClock.");
  }
  return function_pointers_.CreateClock(vi, terminal, highTicks, lowTicks, startTimeSeconds, startTimeNanoseconds, startTimeFractionalNanoseconds, stopTimeSeconds, stopTimeNanoseconds, stopTimeFractionalNanoseconds);
}

ViStatus NiSyncLibrary::ClearClock(ViSession vi, ViConstString terminal)
{
  if (!function_pointers_.ClearClock) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ClearClock.");
  }
  return function_pointers_.ClearClock(vi, terminal);
}

ViStatus NiSyncLibrary::SetTimeReferenceFreeRunning(ViSession vi)
{
  if (!function_pointers_.SetTimeReferenceFreeRunning) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SetTimeReferenceFreeRunning.");
  }
  return function_pointers_.SetTimeReferenceFreeRunning(vi);
}

ViStatus NiSyncLibrary::SetTimeReferenceGPS(ViSession vi)
{
  if (!function_pointers_.SetTimeReferenceGPS) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SetTimeReferenceGPS.");
  }
  return function_pointers_.SetTimeReferenceGPS(vi);
}

ViStatus NiSyncLibrary::SetTimeReferenceIRIG(ViSession vi, ViInt32 irigType, ViConstString terminalName)
{
  if (!function_pointers_.SetTimeReferenceIRIG) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SetTimeReferenceIRIG.");
  }
  return function_pointers_.SetTimeReferenceIRIG(vi, irigType, terminalName);
}

ViStatus NiSyncLibrary::SetTimeReferencePPS(ViSession vi, ViConstString terminalName, ViBoolean useManualTime, ViUInt32 initialTimeSeconds, ViUInt32 initialTimeNanoseconds, ViUInt16 initialTimeFractionalNanoseconds)
{
  if (!function_pointers_.SetTimeReferencePPS) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SetTimeReferencePPS.");
  }
  return function_pointers_.SetTimeReferencePPS(vi, terminalName, useManualTime, initialTimeSeconds, initialTimeNanoseconds, initialTimeFractionalNanoseconds);
}

ViStatus NiSyncLibrary::SetTimeReference1588OrdinaryClock(ViSession vi)
{
  if (!function_pointers_.SetTimeReference1588OrdinaryClock) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SetTimeReference1588OrdinaryClock.");
  }
  return function_pointers_.SetTimeReference1588OrdinaryClock(vi);
}

ViStatus NiSyncLibrary::SetTimeReference8021AS(ViSession vi)
{
  if (!function_pointers_.SetTimeReference8021AS) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SetTimeReference8021AS.");
  }
  return function_pointers_.SetTimeReference8021AS(vi);
}

ViStatus NiSyncLibrary::EnableGPSTimestamping(ViSession vi)
{
  if (!function_pointers_.EnableGPSTimestamping) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_EnableGPSTimestamping.");
  }
  return function_pointers_.EnableGPSTimestamping(vi);
}

ViStatus NiSyncLibrary::EnableIRIGTimestamping(ViSession vi, ViInt32 irigType, ViConstString terminalName)
{
  if (!function_pointers_.EnableIRIGTimestamping) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_EnableIRIGTimestamping.");
  }
  return function_pointers_.EnableIRIGTimestamping(vi, irigType, terminalName);
}

ViStatus NiSyncLibrary::ReadLastGPSTimestamp(ViSession vi, ViUInt32* timestampSeconds, ViUInt32* timestampNanoseconds, ViUInt16* timestampFractionalNanoseconds, ViUInt32* gpsSeconds, ViUInt32* gpsNanoseconds, ViUInt16* gpsFractionalNanoseconds)
{
  if (!function_pointers_.ReadLastGPSTimestamp) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ReadLastGPSTimestamp.");
  }
  return function_pointers_.ReadLastGPSTimestamp(vi, timestampSeconds, timestampNanoseconds, timestampFractionalNanoseconds, gpsSeconds, gpsNanoseconds, gpsFractionalNanoseconds);
}

ViStatus NiSyncLibrary::ReadLastIRIGTimestamp(ViSession vi, ViConstString terminal, ViUInt32* timestampSeconds, ViUInt32* timestampNanoseconds, ViUInt16* timestampFractionalNanoseconds, ViUInt32* irigbSeconds, ViUInt32* irigbNanoseconds, ViUInt16* irigbFractionalNanoseconds)
{
  if (!function_pointers_.ReadLastIRIGTimestamp) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ReadLastIRIGTimestamp.");
  }
  return function_pointers_.ReadLastIRIGTimestamp(vi, terminal, timestampSeconds, timestampNanoseconds, timestampFractionalNanoseconds, irigbSeconds, irigbNanoseconds, irigbFractionalNanoseconds);
}

ViStatus NiSyncLibrary::DisableGPSTimestamping(ViSession vi)
{
  if (!function_pointers_.DisableGPSTimestamping) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_DisableGPSTimestamping.");
  }
  return function_pointers_.DisableGPSTimestamping(vi);
}

ViStatus NiSyncLibrary::DisableIRIGTimestamping(ViSession vi, ViConstString terminalName)
{
  if (!function_pointers_.DisableIRIGTimestamping) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_DisableIRIGTimestamping.");
  }
  return function_pointers_.DisableIRIGTimestamping(vi, terminalName);
}

ViStatus NiSyncLibrary::GetVelocity(ViSession vi, ViReal64* eastVelocity, ViReal64* northVelocity, ViReal64* upVelocity)
{
  if (!function_pointers_.GetVelocity) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_GetVelocity.");
  }
  return function_pointers_.GetVelocity(vi, eastVelocity, northVelocity, upVelocity);
}

ViStatus NiSyncLibrary::GetLocation(ViSession vi, ViReal64* latitude, ViReal64* longitude, ViReal64* altitude)
{
  if (!function_pointers_.GetLocation) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_GetLocation.");
  }
  return function_pointers_.GetLocation(vi, latitude, longitude, altitude);
}

ViStatus NiSyncLibrary::GetTimeReferenceNames(ViSession vi, ViUInt32 bufferSize, ViChar timeReferenceNames[])
{
  if (!function_pointers_.GetTimeReferenceNames) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_GetTimeReferenceNames.");
  }
  return function_pointers_.GetTimeReferenceNames(vi, bufferSize, timeReferenceNames);
}

ViStatus NiSyncLibrary::GetAttributeViInt32(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32* value)
{
  if (!function_pointers_.GetAttributeViInt32) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_GetAttributeViInt32.");
  }
  return function_pointers_.GetAttributeViInt32(vi, activeItem, attribute, value);
}

ViStatus NiSyncLibrary::GetAttributeViReal64(ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64* value)
{
  if (!function_pointers_.GetAttributeViReal64) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_GetAttributeViReal64.");
  }
  return function_pointers_.GetAttributeViReal64(vi, activeItem, attribute, value);
}

ViStatus NiSyncLibrary::GetAttributeViBoolean(ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean* value)
{
  if (!function_pointers_.GetAttributeViBoolean) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_GetAttributeViBoolean.");
  }
  return function_pointers_.GetAttributeViBoolean(vi, activeItem, attribute, value);
}

ViStatus NiSyncLibrary::GetAttributeViString(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 bufferSize, ViChar value[])
{
  if (!function_pointers_.GetAttributeViString) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_GetAttributeViString.");
  }
  return function_pointers_.GetAttributeViString(vi, activeItem, attribute, bufferSize, value);
}

ViStatus NiSyncLibrary::SetAttributeViInt32(ViSession vi, ViConstString activeItem, ViAttr attribute, ViInt32 value)
{
  if (!function_pointers_.SetAttributeViInt32) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SetAttributeViInt32.");
  }
  return function_pointers_.SetAttributeViInt32(vi, activeItem, attribute, value);
}

ViStatus NiSyncLibrary::SetAttributeViReal64(ViSession vi, ViConstString activeItem, ViAttr attribute, ViReal64 value)
{
  if (!function_pointers_.SetAttributeViReal64) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SetAttributeViReal64.");
  }
  return function_pointers_.SetAttributeViReal64(vi, activeItem, attribute, value);
}

ViStatus NiSyncLibrary::SetAttributeViBoolean(ViSession vi, ViConstString activeItem, ViAttr attribute, ViBoolean value)
{
  if (!function_pointers_.SetAttributeViBoolean) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SetAttributeViBoolean.");
  }
  return function_pointers_.SetAttributeViBoolean(vi, activeItem, attribute, value);
}

ViStatus NiSyncLibrary::SetAttributeViString(ViSession vi, ViConstString activeItem, ViAttr attribute, ViConstString value)
{
  if (!function_pointers_.SetAttributeViString) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_SetAttributeViString.");
  }
  return function_pointers_.SetAttributeViString(vi, activeItem, attribute, value);
}

ViStatus NiSyncLibrary::GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute)
{
  if (!function_pointers_.GetExtCalLastDateAndTime) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_GetExtCalLastDateAndTime.");
  }
  return function_pointers_.GetExtCalLastDateAndTime(vi, year, month, day, hour, minute);
}

ViStatus NiSyncLibrary::GetExtCalLastTemp(ViSession vi, ViReal64* temp)
{
  if (!function_pointers_.GetExtCalLastTemp) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_GetExtCalLastTemp.");
  }
  return function_pointers_.GetExtCalLastTemp(vi, temp);
}

ViStatus NiSyncLibrary::GetExtCalRecommendedInterval(ViSession vi, ViInt32* months)
{
  if (!function_pointers_.GetExtCalRecommendedInterval) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_GetExtCalRecommendedInterval.");
  }
  return function_pointers_.GetExtCalRecommendedInterval(vi, months);
}

ViStatus NiSyncLibrary::ChangeExtCalPassword(ViSession vi, ViConstString oldPassword, ViConstString newPassword)
{
  if (!function_pointers_.ChangeExtCalPassword) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ChangeExtCalPassword.");
  }
  return function_pointers_.ChangeExtCalPassword(vi, oldPassword, newPassword);
}

ViStatus NiSyncLibrary::ReadCurrentTemperature(ViSession vi, ViReal64* temperature)
{
  if (!function_pointers_.ReadCurrentTemperature) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_ReadCurrentTemperature.");
  }
  return function_pointers_.ReadCurrentTemperature(vi, temperature);
}

ViStatus NiSyncLibrary::CalGetOscillatorVoltage(ViSession vi, ViReal64* voltage)
{
  if (!function_pointers_.CalGetOscillatorVoltage) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_CalGetOscillatorVoltage.");
  }
  return function_pointers_.CalGetOscillatorVoltage(vi, voltage);
}

ViStatus NiSyncLibrary::CalGetClk10PhaseVoltage(ViSession vi, ViReal64* voltage)
{
  if (!function_pointers_.CalGetClk10PhaseVoltage) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_CalGetClk10PhaseVoltage.");
  }
  return function_pointers_.CalGetClk10PhaseVoltage(vi, voltage);
}

ViStatus NiSyncLibrary::CalGetDDSStartPulsePhaseVoltage(ViSession vi, ViReal64* voltage)
{
  if (!function_pointers_.CalGetDDSStartPulsePhaseVoltage) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_CalGetDDSStartPulsePhaseVoltage.");
  }
  return function_pointers_.CalGetDDSStartPulsePhaseVoltage(vi, voltage);
}

ViStatus NiSyncLibrary::CalGetDDSInitialPhase(ViSession vi, ViReal64* phase)
{
  if (!function_pointers_.CalGetDDSInitialPhase) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_CalGetDDSInitialPhase.");
  }
  return function_pointers_.CalGetDDSInitialPhase(vi, phase);
}

ViStatus NiSyncLibrary::InitExtCal(ViRsrc resourceName, ViConstString password, ViSession* vi)
{
  if (!function_pointers_.InitExtCal) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_InitExtCal.");
  }
  return function_pointers_.InitExtCal(resourceName, password, vi);
}

ViStatus NiSyncLibrary::CloseExtCal(ViSession vi, ViInt32 action)
{
  if (!function_pointers_.CloseExtCal) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_CloseExtCal.");
  }
  return function_pointers_.CloseExtCal(vi, action);
}

ViStatus NiSyncLibrary::CalAdjustOscillatorVoltage(ViSession vi, ViReal64 measuredVoltage, ViReal64* oldVoltage)
{
  if (!function_pointers_.CalAdjustOscillatorVoltage) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_CalAdjustOscillatorVoltage.");
  }
  return function_pointers_.CalAdjustOscillatorVoltage(vi, measuredVoltage, oldVoltage);
}

ViStatus NiSyncLibrary::CalAdjustClk10PhaseVoltage(ViSession vi, ViReal64 measuredVoltage, ViReal64* oldVoltage)
{
  if (!function_pointers_.CalAdjustClk10PhaseVoltage) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_CalAdjustClk10PhaseVoltage.");
  }
  return function_pointers_.CalAdjustClk10PhaseVoltage(vi, measuredVoltage, oldVoltage);
}

ViStatus NiSyncLibrary::CalAdjustDDSStartPulsePhaseVoltage(ViSession vi, ViReal64 measuredVoltage, ViReal64* oldVoltage)
{
  if (!function_pointers_.CalAdjustDDSStartPulsePhaseVoltage) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_CalAdjustDDSStartPulsePhaseVoltage.");
  }
  return function_pointers_.CalAdjustDDSStartPulsePhaseVoltage(vi, measuredVoltage, oldVoltage);
}

ViStatus NiSyncLibrary::CalAdjustDDSInitialPhase(ViSession vi, ViReal64 measuredPhase, ViReal64* oldPhase)
{
  if (!function_pointers_.CalAdjustDDSInitialPhase) {
    throw nidevice_grpc::LibraryLoadException("Could not find niSync_CalAdjustDDSInitialPhase.");
  }
  return function_pointers_.CalAdjustDDSInitialPhase(vi, measuredPhase, oldPhase);
}

}  // namespace nisync_grpc
