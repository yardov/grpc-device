//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-XNET Metadata
//---------------------------------------------------------------------
#include "nixnet_library.h"

#if defined(_MSC_VER)
static const char* kLibraryName = "nixnet.dll";
#else
static const char* kLibraryName = "libnixnet.so";
#endif

namespace nixnet_grpc {

NiXnetLibrary::NiXnetLibrary() : shared_library_(kLibraryName)
{
  shared_library_.load();
  bool loaded = shared_library_.is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.Blink = reinterpret_cast<BlinkPtr>(shared_library_.get_function_pointer("nxBlink"));
  function_pointers_.Clear = reinterpret_cast<ClearPtr>(shared_library_.get_function_pointer("nxClear"));
  function_pointers_.ConnectTerminals = reinterpret_cast<ConnectTerminalsPtr>(shared_library_.get_function_pointer("nxConnectTerminals"));
  function_pointers_.ConvertTimestamp100nsTo1ns = reinterpret_cast<ConvertTimestamp100nsTo1nsPtr>(shared_library_.get_function_pointer("nxConvertTimestamp100nsTo1ns"));
  function_pointers_.ConvertTimestamp1nsTo100ns = reinterpret_cast<ConvertTimestamp1nsTo100nsPtr>(shared_library_.get_function_pointer("nxConvertTimestamp1nsTo100ns"));
  function_pointers_.CreateSession = reinterpret_cast<CreateSessionPtr>(shared_library_.get_function_pointer("nxCreateSession"));
  function_pointers_.CreateSessionByRef = reinterpret_cast<CreateSessionByRefPtr>(shared_library_.get_function_pointer("nxCreateSessionByRef"));
  function_pointers_.DbAddAlias = reinterpret_cast<DbAddAliasPtr>(shared_library_.get_function_pointer("nxdbAddAlias"));
  function_pointers_.DbAddAlias64 = reinterpret_cast<DbAddAlias64Ptr>(shared_library_.get_function_pointer("nxdbAddAlias64"));
  function_pointers_.DbCloseDatabase = reinterpret_cast<DbCloseDatabasePtr>(shared_library_.get_function_pointer("nxdbCloseDatabase"));
  function_pointers_.DbCreateObject = reinterpret_cast<DbCreateObjectPtr>(shared_library_.get_function_pointer("nxdbCreateObject"));
  function_pointers_.DbDeleteObject = reinterpret_cast<DbDeleteObjectPtr>(shared_library_.get_function_pointer("nxdbDeleteObject"));
  function_pointers_.DbDeploy = reinterpret_cast<DbDeployPtr>(shared_library_.get_function_pointer("nxdbDeploy"));
  function_pointers_.DbFindObject = reinterpret_cast<DbFindObjectPtr>(shared_library_.get_function_pointer("nxdbFindObject"));
  function_pointers_.DbGetDatabaseListSizes = reinterpret_cast<DbGetDatabaseListSizesPtr>(shared_library_.get_function_pointer("nxdbGetDatabaseListSizes"));
  function_pointers_.DbGetPropertySize = reinterpret_cast<DbGetPropertySizePtr>(shared_library_.get_function_pointer("nxdbGetPropertySize"));
  function_pointers_.DbMerge = reinterpret_cast<DbMergePtr>(shared_library_.get_function_pointer("nxdbMerge"));
  function_pointers_.DbOpenDatabase = reinterpret_cast<DbOpenDatabasePtr>(shared_library_.get_function_pointer("nxdbOpenDatabase"));
  function_pointers_.DbRemoveAlias = reinterpret_cast<DbRemoveAliasPtr>(shared_library_.get_function_pointer("nxdbRemoveAlias"));
  function_pointers_.DbSaveDatabase = reinterpret_cast<DbSaveDatabasePtr>(shared_library_.get_function_pointer("nxdbSaveDatabase"));
  function_pointers_.DbUndeploy = reinterpret_cast<DbUndeployPtr>(shared_library_.get_function_pointer("nxdbUndeploy"));
  function_pointers_.DisconnectTerminals = reinterpret_cast<DisconnectTerminalsPtr>(shared_library_.get_function_pointer("nxDisconnectTerminals"));
  function_pointers_.Flush = reinterpret_cast<FlushPtr>(shared_library_.get_function_pointer("nxFlush"));
  function_pointers_.FutureTimeTrigger = reinterpret_cast<FutureTimeTriggerPtr>(shared_library_.get_function_pointer("nxFutureTimeTrigger"));
  function_pointers_.GetPropertySize = reinterpret_cast<GetPropertySizePtr>(shared_library_.get_function_pointer("nxGetPropertySize"));
  function_pointers_.GetSubPropertySize = reinterpret_cast<GetSubPropertySizePtr>(shared_library_.get_function_pointer("nxGetSubPropertySize"));
  function_pointers_.ReadSignalSinglePoint = reinterpret_cast<ReadSignalSinglePointPtr>(shared_library_.get_function_pointer("nxReadSignalSinglePoint"));
  function_pointers_.ReadSignalWaveform = reinterpret_cast<ReadSignalWaveformPtr>(shared_library_.get_function_pointer("nxReadSignalWaveform"));
  function_pointers_.Start = reinterpret_cast<StartPtr>(shared_library_.get_function_pointer("nxStart"));
  function_pointers_.Stop = reinterpret_cast<StopPtr>(shared_library_.get_function_pointer("nxStop"));
  function_pointers_.SystemClose = reinterpret_cast<SystemClosePtr>(shared_library_.get_function_pointer("nxSystemClose"));
  function_pointers_.SystemOpen = reinterpret_cast<SystemOpenPtr>(shared_library_.get_function_pointer("nxSystemOpen"));
  function_pointers_.Wait = reinterpret_cast<WaitPtr>(shared_library_.get_function_pointer("nxWait"));
  function_pointers_.WriteSignalSinglePoint = reinterpret_cast<WriteSignalSinglePointPtr>(shared_library_.get_function_pointer("nxWriteSignalSinglePoint"));
  function_pointers_.WriteSignalWaveform = reinterpret_cast<WriteSignalWaveformPtr>(shared_library_.get_function_pointer("nxWriteSignalWaveform"));
  function_pointers_.WriteSignalXY = reinterpret_cast<WriteSignalXYPtr>(shared_library_.get_function_pointer("nxWriteSignalXY"));
}

NiXnetLibrary::~NiXnetLibrary()
{
}

::grpc::Status NiXnetLibrary::check_function_exists(std::string functionName)
{
  return shared_library_.function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

nxStatus_t NiXnetLibrary::Blink(nxSessionRef_t interfaceRef, u32 modifier)
{
  if (!function_pointers_.Blink) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxBlink.");
  }
#if defined(_MSC_VER)
  return nxBlink(interfaceRef, modifier);
#else
  return function_pointers_.Blink(interfaceRef, modifier);
#endif
}

nxStatus_t NiXnetLibrary::Clear(nxSessionRef_t sessionRef)
{
  if (!function_pointers_.Clear) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxClear.");
  }
#if defined(_MSC_VER)
  return nxClear(sessionRef);
#else
  return function_pointers_.Clear(sessionRef);
#endif
}

nxStatus_t NiXnetLibrary::ConnectTerminals(nxSessionRef_t sessionRef, const char source[], const char destination[])
{
  if (!function_pointers_.ConnectTerminals) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxConnectTerminals.");
  }
#if defined(_MSC_VER)
  return nxConnectTerminals(sessionRef, source, destination);
#else
  return function_pointers_.ConnectTerminals(sessionRef, source, destination);
#endif
}

nxStatus_t NiXnetLibrary::ConvertTimestamp100nsTo1ns(nxTimestamp100ns_t from, nxTimestamp1ns_t* to)
{
  if (!function_pointers_.ConvertTimestamp100nsTo1ns) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxConvertTimestamp100nsTo1ns.");
  }
#if defined(_MSC_VER)
  return nxConvertTimestamp100nsTo1ns(from, to);
#else
  return function_pointers_.ConvertTimestamp100nsTo1ns(from, to);
#endif
}

nxStatus_t NiXnetLibrary::ConvertTimestamp1nsTo100ns(nxTimestamp1ns_t from, nxTimestamp100ns_t* to)
{
  if (!function_pointers_.ConvertTimestamp1nsTo100ns) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxConvertTimestamp1nsTo100ns.");
  }
#if defined(_MSC_VER)
  return nxConvertTimestamp1nsTo100ns(from, to);
#else
  return function_pointers_.ConvertTimestamp1nsTo100ns(from, to);
#endif
}

nxStatus_t NiXnetLibrary::CreateSession(const char databaseName[], const char clusterName[], const char list[], const char interfaceParameter[], u32 mode, nxSessionRef_t* sessionRef)
{
  if (!function_pointers_.CreateSession) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxCreateSession.");
  }
#if defined(_MSC_VER)
  return nxCreateSession(databaseName, clusterName, list, interfaceParameter, mode, sessionRef);
#else
  return function_pointers_.CreateSession(databaseName, clusterName, list, interfaceParameter, mode, sessionRef);
#endif
}

nxStatus_t NiXnetLibrary::CreateSessionByRef(u32 numberOfDatabaseRef, nxDatabaseRef_t arrayOfDatabaseRef[], const char interfaceParameter[], u32 mode, nxSessionRef_t* sessionRef)
{
  if (!function_pointers_.CreateSessionByRef) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxCreateSessionByRef.");
  }
#if defined(_MSC_VER)
  return nxCreateSessionByRef(numberOfDatabaseRef, arrayOfDatabaseRef, interfaceParameter, mode, sessionRef);
#else
  return function_pointers_.CreateSessionByRef(numberOfDatabaseRef, arrayOfDatabaseRef, interfaceParameter, mode, sessionRef);
#endif
}

nxStatus_t NiXnetLibrary::DbAddAlias(const char databaseAlias[], const char databaseFilepath[], u32 defaultBaudRate)
{
  if (!function_pointers_.DbAddAlias) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbAddAlias.");
  }
#if defined(_MSC_VER)
  return nxdbAddAlias(databaseAlias, databaseFilepath, defaultBaudRate);
#else
  return function_pointers_.DbAddAlias(databaseAlias, databaseFilepath, defaultBaudRate);
#endif
}

nxStatus_t NiXnetLibrary::DbAddAlias64(const char databaseAlias[], const char databaseFilepath[], u64 defaultBaudRate)
{
  if (!function_pointers_.DbAddAlias64) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbAddAlias64.");
  }
#if defined(_MSC_VER)
  return nxdbAddAlias64(databaseAlias, databaseFilepath, defaultBaudRate);
#else
  return function_pointers_.DbAddAlias64(databaseAlias, databaseFilepath, defaultBaudRate);
#endif
}

nxStatus_t NiXnetLibrary::DbCloseDatabase(nxDatabaseRef_t databaseRef, u32 closeAllRefs)
{
  if (!function_pointers_.DbCloseDatabase) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbCloseDatabase.");
  }
#if defined(_MSC_VER)
  return nxdbCloseDatabase(databaseRef, closeAllRefs);
#else
  return function_pointers_.DbCloseDatabase(databaseRef, closeAllRefs);
#endif
}

nxStatus_t NiXnetLibrary::DbCreateObject(nxDatabaseRef_t parentObjectRef, u32 objectClass, const char objectName[], nxDatabaseRef_t* dbObjectRef)
{
  if (!function_pointers_.DbCreateObject) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbCreateObject.");
  }
#if defined(_MSC_VER)
  return nxdbCreateObject(parentObjectRef, objectClass, objectName, dbObjectRef);
#else
  return function_pointers_.DbCreateObject(parentObjectRef, objectClass, objectName, dbObjectRef);
#endif
}

nxStatus_t NiXnetLibrary::DbDeleteObject(nxDatabaseRef_t dbObjectRef)
{
  if (!function_pointers_.DbDeleteObject) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbDeleteObject.");
  }
#if defined(_MSC_VER)
  return nxdbDeleteObject(dbObjectRef);
#else
  return function_pointers_.DbDeleteObject(dbObjectRef);
#endif
}

nxStatus_t NiXnetLibrary::DbDeploy(const char ipAddress[], const char databaseAlias[], u32 waitForComplete, u32* percentComplete)
{
  if (!function_pointers_.DbDeploy) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbDeploy.");
  }
#if defined(_MSC_VER)
  return nxdbDeploy(ipAddress, databaseAlias, waitForComplete, percentComplete);
#else
  return function_pointers_.DbDeploy(ipAddress, databaseAlias, waitForComplete, percentComplete);
#endif
}

nxStatus_t NiXnetLibrary::DbFindObject(nxDatabaseRef_t parentObjectRef, u32 objectClass, const char objectName[], nxDatabaseRef_t* dbObjectRef)
{
  if (!function_pointers_.DbFindObject) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbFindObject.");
  }
#if defined(_MSC_VER)
  return nxdbFindObject(parentObjectRef, objectClass, objectName, dbObjectRef);
#else
  return function_pointers_.DbFindObject(parentObjectRef, objectClass, objectName, dbObjectRef);
#endif
}

nxStatus_t NiXnetLibrary::DbGetDatabaseListSizes(const char ipAddress[], u32* sizeofAliasBuffer, u32* sizeofFilepathBuffer)
{
  if (!function_pointers_.DbGetDatabaseListSizes) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbGetDatabaseListSizes.");
  }
#if defined(_MSC_VER)
  return nxdbGetDatabaseListSizes(ipAddress, sizeofAliasBuffer, sizeofFilepathBuffer);
#else
  return function_pointers_.DbGetDatabaseListSizes(ipAddress, sizeofAliasBuffer, sizeofFilepathBuffer);
#endif
}

nxStatus_t NiXnetLibrary::DbGetPropertySize(nxDatabaseRef_t dbObjectRef, u32 propertyID, u32* propertySize)
{
  if (!function_pointers_.DbGetPropertySize) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbGetPropertySize.");
  }
#if defined(_MSC_VER)
  return nxdbGetPropertySize(dbObjectRef, propertyID, propertySize);
#else
  return function_pointers_.DbGetPropertySize(dbObjectRef, propertyID, propertySize);
#endif
}

nxStatus_t NiXnetLibrary::DbMerge(nxDatabaseRef_t targetClusterRef, nxDatabaseRef_t sourceObjRef, u32 copyMode, char prefix[], u32 waitForComplete, u32* percentComplete)
{
  if (!function_pointers_.DbMerge) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbMerge.");
  }
#if defined(_MSC_VER)
  return nxdbMerge(targetClusterRef, sourceObjRef, copyMode, prefix, waitForComplete, percentComplete);
#else
  return function_pointers_.DbMerge(targetClusterRef, sourceObjRef, copyMode, prefix, waitForComplete, percentComplete);
#endif
}

nxStatus_t NiXnetLibrary::DbOpenDatabase(const char databaseName[], nxDatabaseRef_t* databaseRef)
{
  if (!function_pointers_.DbOpenDatabase) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbOpenDatabase.");
  }
#if defined(_MSC_VER)
  return nxdbOpenDatabase(databaseName, databaseRef);
#else
  return function_pointers_.DbOpenDatabase(databaseName, databaseRef);
#endif
}

nxStatus_t NiXnetLibrary::DbRemoveAlias(const char databaseAlias[])
{
  if (!function_pointers_.DbRemoveAlias) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbRemoveAlias.");
  }
#if defined(_MSC_VER)
  return nxdbRemoveAlias(databaseAlias);
#else
  return function_pointers_.DbRemoveAlias(databaseAlias);
#endif
}

nxStatus_t NiXnetLibrary::DbSaveDatabase(nxDatabaseRef_t databaseRef, const char dbFilepath[])
{
  if (!function_pointers_.DbSaveDatabase) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbSaveDatabase.");
  }
#if defined(_MSC_VER)
  return nxdbSaveDatabase(databaseRef, dbFilepath);
#else
  return function_pointers_.DbSaveDatabase(databaseRef, dbFilepath);
#endif
}

nxStatus_t NiXnetLibrary::DbUndeploy(const char ipAddress[], const char databaseAlias[])
{
  if (!function_pointers_.DbUndeploy) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxdbUndeploy.");
  }
#if defined(_MSC_VER)
  return nxdbUndeploy(ipAddress, databaseAlias);
#else
  return function_pointers_.DbUndeploy(ipAddress, databaseAlias);
#endif
}

nxStatus_t NiXnetLibrary::DisconnectTerminals(nxSessionRef_t sessionRef, const char source[], const char destination[])
{
  if (!function_pointers_.DisconnectTerminals) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxDisconnectTerminals.");
  }
#if defined(_MSC_VER)
  return nxDisconnectTerminals(sessionRef, source, destination);
#else
  return function_pointers_.DisconnectTerminals(sessionRef, source, destination);
#endif
}

nxStatus_t NiXnetLibrary::Flush(nxSessionRef_t sessionRef)
{
  if (!function_pointers_.Flush) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxFlush.");
  }
#if defined(_MSC_VER)
  return nxFlush(sessionRef);
#else
  return function_pointers_.Flush(sessionRef);
#endif
}

nxStatus_t NiXnetLibrary::FutureTimeTrigger(nxSessionRef_t sessionRef, nxTimestamp1ns_t when, u32 timescale)
{
  if (!function_pointers_.FutureTimeTrigger) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxFutureTimeTrigger.");
  }
#if defined(_MSC_VER)
  return nxFutureTimeTrigger(sessionRef, when, timescale);
#else
  return function_pointers_.FutureTimeTrigger(sessionRef, when, timescale);
#endif
}

nxStatus_t NiXnetLibrary::GetPropertySize(nxSessionRef_t sessionRef, u32 propertyID, u32* propertySize)
{
  if (!function_pointers_.GetPropertySize) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxGetPropertySize.");
  }
#if defined(_MSC_VER)
  return nxGetPropertySize(sessionRef, propertyID, propertySize);
#else
  return function_pointers_.GetPropertySize(sessionRef, propertyID, propertySize);
#endif
}

nxStatus_t NiXnetLibrary::GetSubPropertySize(nxSessionRef_t sessionRef, u32 activeIndex, u32 propertyID, u32* propertySize)
{
  if (!function_pointers_.GetSubPropertySize) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxGetSubPropertySize.");
  }
#if defined(_MSC_VER)
  return nxGetSubPropertySize(sessionRef, activeIndex, propertyID, propertySize);
#else
  return function_pointers_.GetSubPropertySize(sessionRef, activeIndex, propertyID, propertySize);
#endif
}

nxStatus_t NiXnetLibrary::ReadSignalSinglePoint(nxSessionRef_t sessionRef, f64 valueBuffer[], u32 sizeOfValueBuffer, nxTimestamp100ns_t timestampBuffer[], u32 sizeOfTimestampBuffer)
{
  if (!function_pointers_.ReadSignalSinglePoint) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxReadSignalSinglePoint.");
  }
#if defined(_MSC_VER)
  return nxReadSignalSinglePoint(sessionRef, valueBuffer, sizeOfValueBuffer, timestampBuffer, sizeOfTimestampBuffer);
#else
  return function_pointers_.ReadSignalSinglePoint(sessionRef, valueBuffer, sizeOfValueBuffer, timestampBuffer, sizeOfTimestampBuffer);
#endif
}

nxStatus_t NiXnetLibrary::ReadSignalWaveform(nxSessionRef_t sessionRef, f64 timeout, nxTimestamp100ns_t* startTime, f64* deltaTime, f64 valueBuffer[], u32 sizeOfValueBuffer, u32* numberOfValuesReturned)
{
  if (!function_pointers_.ReadSignalWaveform) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxReadSignalWaveform.");
  }
#if defined(_MSC_VER)
  return nxReadSignalWaveform(sessionRef, timeout, startTime, deltaTime, valueBuffer, sizeOfValueBuffer, numberOfValuesReturned);
#else
  return function_pointers_.ReadSignalWaveform(sessionRef, timeout, startTime, deltaTime, valueBuffer, sizeOfValueBuffer, numberOfValuesReturned);
#endif
}

nxStatus_t NiXnetLibrary::Start(nxSessionRef_t sessionRef, u32 scope)
{
  if (!function_pointers_.Start) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxStart.");
  }
#if defined(_MSC_VER)
  return nxStart(sessionRef, scope);
#else
  return function_pointers_.Start(sessionRef, scope);
#endif
}

nxStatus_t NiXnetLibrary::Stop(nxSessionRef_t sessionRef, u32 scope)
{
  if (!function_pointers_.Stop) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxStop.");
  }
#if defined(_MSC_VER)
  return nxStop(sessionRef, scope);
#else
  return function_pointers_.Stop(sessionRef, scope);
#endif
}

nxStatus_t NiXnetLibrary::SystemClose(nxSessionRef_t systemRef)
{
  if (!function_pointers_.SystemClose) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxSystemClose.");
  }
#if defined(_MSC_VER)
  return nxSystemClose(systemRef);
#else
  return function_pointers_.SystemClose(systemRef);
#endif
}

nxStatus_t NiXnetLibrary::SystemOpen(nxSessionRef_t* systemRef)
{
  if (!function_pointers_.SystemOpen) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxSystemOpen.");
  }
#if defined(_MSC_VER)
  return nxSystemOpen(systemRef);
#else
  return function_pointers_.SystemOpen(systemRef);
#endif
}

nxStatus_t NiXnetLibrary::Wait(nxSessionRef_t sessionRef, u32 condition, u32 paramIn, f64 timeout, u32* paramOut)
{
  if (!function_pointers_.Wait) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxWait.");
  }
#if defined(_MSC_VER)
  return nxWait(sessionRef, condition, paramIn, timeout, paramOut);
#else
  return function_pointers_.Wait(sessionRef, condition, paramIn, timeout, paramOut);
#endif
}

nxStatus_t NiXnetLibrary::WriteSignalSinglePoint(nxSessionRef_t sessionRef, f64 valueBuffer[], u32 sizeOfValueBuffer)
{
  if (!function_pointers_.WriteSignalSinglePoint) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxWriteSignalSinglePoint.");
  }
#if defined(_MSC_VER)
  return nxWriteSignalSinglePoint(sessionRef, valueBuffer, sizeOfValueBuffer);
#else
  return function_pointers_.WriteSignalSinglePoint(sessionRef, valueBuffer, sizeOfValueBuffer);
#endif
}

nxStatus_t NiXnetLibrary::WriteSignalWaveform(nxSessionRef_t sessionRef, f64 timeout, f64 valueBuffer[], u32 sizeOfValueBuffer)
{
  if (!function_pointers_.WriteSignalWaveform) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxWriteSignalWaveform.");
  }
#if defined(_MSC_VER)
  return nxWriteSignalWaveform(sessionRef, timeout, valueBuffer, sizeOfValueBuffer);
#else
  return function_pointers_.WriteSignalWaveform(sessionRef, timeout, valueBuffer, sizeOfValueBuffer);
#endif
}

nxStatus_t NiXnetLibrary::WriteSignalXY(nxSessionRef_t sessionRef, f64 timeout, f64 valueBuffer[], u32 sizeOfValueBuffer, nxTimestamp100ns_t timestampBuffer[], u32 sizeOfTimestampBuffer, u32 numPairsBuffer[], u32 sizeOfNumPairsBuffer)
{
  if (!function_pointers_.WriteSignalXY) {
    throw nidevice_grpc::LibraryLoadException("Could not find nxWriteSignalXY.");
  }
#if defined(_MSC_VER)
  return nxWriteSignalXY(sessionRef, timeout, valueBuffer, sizeOfValueBuffer, timestampBuffer, sizeOfTimestampBuffer, numPairsBuffer, sizeOfNumPairsBuffer);
#else
  return function_pointers_.WriteSignalXY(sessionRef, timeout, valueBuffer, sizeOfValueBuffer, timestampBuffer, sizeOfTimestampBuffer, numPairsBuffer, sizeOfNumPairsBuffer);
#endif
}

}  // namespace nixnet_grpc
