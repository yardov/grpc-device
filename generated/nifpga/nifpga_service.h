
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-FPGA Metadata
//---------------------------------------------------------------------
#ifndef NIFPGA_GRPC_SERVICE_H
#define NIFPGA_GRPC_SERVICE_H

#include <nifpga.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nifpga_library_interface.h"

namespace nifpga_grpc {

struct NiFpgaFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiFpgaFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

void RegisterMonikerEndpoints();

::grpc::Status MonikerReadArrayBool(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadArrayDbl(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadArrayI16(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadArrayI32(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadArrayI64(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadArrayI8(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadArraySgl(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadArrayU16(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadArrayU32(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadArrayU64(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadArrayU8(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadBool(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadDbl(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadI16(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadI32(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadI64(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadI8(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadSgl(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadU16(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadU32(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadU64(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerReadU8(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteArrayBool(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteArrayDbl(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteArrayI16(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteArrayI32(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteArrayI64(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteArrayI8(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteArraySgl(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteArrayU16(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteArrayU32(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteArrayU64(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteArrayU8(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteBool(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteDbl(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteI16(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteI32(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteI64(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteI8(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteSgl(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteU16(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteU32(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteU64(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);
::grpc::Status MonikerWriteU8(void* data, google::protobuf::Arena& arena, google::protobuf::Any& packedData);

class NiFpgaService final : public NiFpga::Service {
public:
  using LibrarySharedPtr = std::shared_ptr<NiFpgaLibraryInterface>;
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<NiFpga_Session>>;

  NiFpgaService(
    LibrarySharedPtr library,
    ResourceRepositorySharedPtr resource_repository,
    const NiFpgaFeatureToggles& feature_toggles = {});
  virtual ~NiFpgaService();

  ::grpc::Status Abort(::grpc::ServerContext* context, const AbortRequest* request, AbortResponse* response) override;
  ::grpc::Status AcknowledgeIrqs(::grpc::ServerContext* context, const AcknowledgeIrqsRequest* request, AcknowledgeIrqsResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status CommitFifoConfiguration(::grpc::ServerContext* context, const CommitFifoConfigurationRequest* request, CommitFifoConfigurationResponse* response) override;
  ::grpc::Status ConfigureFifo(::grpc::ServerContext* context, const ConfigureFifoRequest* request, ConfigureFifoResponse* response) override;
  ::grpc::Status ConfigureFifo2(::grpc::ServerContext* context, const ConfigureFifo2Request* request, ConfigureFifo2Response* response) override;
  ::grpc::Status Download(::grpc::ServerContext* context, const DownloadRequest* request, DownloadResponse* response) override;
  ::grpc::Status FindFifo(::grpc::ServerContext* context, const FindFifoRequest* request, FindFifoResponse* response) override;
  ::grpc::Status FindRegister(::grpc::ServerContext* context, const FindRegisterRequest* request, FindRegisterResponse* response) override;
  ::grpc::Status GetBitfileSignature(::grpc::ServerContext* context, const GetBitfileSignatureRequest* request, GetBitfileSignatureResponse* response) override;
  ::grpc::Status GetFifoPropertyI32(::grpc::ServerContext* context, const GetFifoPropertyI32Request* request, GetFifoPropertyI32Response* response) override;
  ::grpc::Status GetFifoPropertyI64(::grpc::ServerContext* context, const GetFifoPropertyI64Request* request, GetFifoPropertyI64Response* response) override;
  ::grpc::Status GetFifoPropertyU32(::grpc::ServerContext* context, const GetFifoPropertyU32Request* request, GetFifoPropertyU32Response* response) override;
  ::grpc::Status GetFifoPropertyU64(::grpc::ServerContext* context, const GetFifoPropertyU64Request* request, GetFifoPropertyU64Response* response) override;
  ::grpc::Status GetFpgaViState(::grpc::ServerContext* context, const GetFpgaViStateRequest* request, GetFpgaViStateResponse* response) override;
  ::grpc::Status Open(::grpc::ServerContext* context, const OpenRequest* request, OpenResponse* response) override;
  ::grpc::Status ReadArrayBool(::grpc::ServerContext* context, const ReadArrayBoolRequest* request, ReadArrayBoolResponse* response) override;
  ::grpc::Status BeginReadArrayBool(::grpc::ServerContext* context, const BeginReadArrayBoolRequest* request, BeginReadArrayBoolResponse* response) override;
  ::grpc::Status ReadArrayDbl(::grpc::ServerContext* context, const ReadArrayDblRequest* request, ReadArrayDblResponse* response) override;
  ::grpc::Status BeginReadArrayDbl(::grpc::ServerContext* context, const BeginReadArrayDblRequest* request, BeginReadArrayDblResponse* response) override;
  ::grpc::Status ReadArrayI16(::grpc::ServerContext* context, const ReadArrayI16Request* request, ReadArrayI16Response* response) override;
  ::grpc::Status BeginReadArrayI16(::grpc::ServerContext* context, const BeginReadArrayI16Request* request, BeginReadArrayI16Response* response) override;
  ::grpc::Status ReadArrayI32(::grpc::ServerContext* context, const ReadArrayI32Request* request, ReadArrayI32Response* response) override;
  ::grpc::Status BeginReadArrayI32(::grpc::ServerContext* context, const BeginReadArrayI32Request* request, BeginReadArrayI32Response* response) override;
  ::grpc::Status ReadArrayI64(::grpc::ServerContext* context, const ReadArrayI64Request* request, ReadArrayI64Response* response) override;
  ::grpc::Status BeginReadArrayI64(::grpc::ServerContext* context, const BeginReadArrayI64Request* request, BeginReadArrayI64Response* response) override;
  ::grpc::Status ReadArrayI8(::grpc::ServerContext* context, const ReadArrayI8Request* request, ReadArrayI8Response* response) override;
  ::grpc::Status BeginReadArrayI8(::grpc::ServerContext* context, const BeginReadArrayI8Request* request, BeginReadArrayI8Response* response) override;
  ::grpc::Status ReadArraySgl(::grpc::ServerContext* context, const ReadArraySglRequest* request, ReadArraySglResponse* response) override;
  ::grpc::Status BeginReadArraySgl(::grpc::ServerContext* context, const BeginReadArraySglRequest* request, BeginReadArraySglResponse* response) override;
  ::grpc::Status ReadArrayU16(::grpc::ServerContext* context, const ReadArrayU16Request* request, ReadArrayU16Response* response) override;
  ::grpc::Status BeginReadArrayU16(::grpc::ServerContext* context, const BeginReadArrayU16Request* request, BeginReadArrayU16Response* response) override;
  ::grpc::Status ReadArrayU32(::grpc::ServerContext* context, const ReadArrayU32Request* request, ReadArrayU32Response* response) override;
  ::grpc::Status BeginReadArrayU32(::grpc::ServerContext* context, const BeginReadArrayU32Request* request, BeginReadArrayU32Response* response) override;
  ::grpc::Status ReadArrayU64(::grpc::ServerContext* context, const ReadArrayU64Request* request, ReadArrayU64Response* response) override;
  ::grpc::Status BeginReadArrayU64(::grpc::ServerContext* context, const BeginReadArrayU64Request* request, BeginReadArrayU64Response* response) override;
  ::grpc::Status ReadArrayU8(::grpc::ServerContext* context, const ReadArrayU8Request* request, ReadArrayU8Response* response) override;
  ::grpc::Status BeginReadArrayU8(::grpc::ServerContext* context, const BeginReadArrayU8Request* request, BeginReadArrayU8Response* response) override;
  ::grpc::Status ReadBool(::grpc::ServerContext* context, const ReadBoolRequest* request, ReadBoolResponse* response) override;
  ::grpc::Status BeginReadBool(::grpc::ServerContext* context, const BeginReadBoolRequest* request, BeginReadBoolResponse* response) override;
  ::grpc::Status ReadDbl(::grpc::ServerContext* context, const ReadDblRequest* request, ReadDblResponse* response) override;
  ::grpc::Status BeginReadDbl(::grpc::ServerContext* context, const BeginReadDblRequest* request, BeginReadDblResponse* response) override;
  ::grpc::Status ReadFifoBool(::grpc::ServerContext* context, const ReadFifoBoolRequest* request, ReadFifoBoolResponse* response) override;
  ::grpc::Status ReadFifoDbl(::grpc::ServerContext* context, const ReadFifoDblRequest* request, ReadFifoDblResponse* response) override;
  ::grpc::Status ReadFifoI16(::grpc::ServerContext* context, const ReadFifoI16Request* request, ReadFifoI16Response* response) override;
  ::grpc::Status ReadFifoI32(::grpc::ServerContext* context, const ReadFifoI32Request* request, ReadFifoI32Response* response) override;
  ::grpc::Status ReadFifoI64(::grpc::ServerContext* context, const ReadFifoI64Request* request, ReadFifoI64Response* response) override;
  ::grpc::Status ReadFifoI8(::grpc::ServerContext* context, const ReadFifoI8Request* request, ReadFifoI8Response* response) override;
  ::grpc::Status ReadFifoSgl(::grpc::ServerContext* context, const ReadFifoSglRequest* request, ReadFifoSglResponse* response) override;
  ::grpc::Status ReadFifoU16(::grpc::ServerContext* context, const ReadFifoU16Request* request, ReadFifoU16Response* response) override;
  ::grpc::Status ReadFifoU32(::grpc::ServerContext* context, const ReadFifoU32Request* request, ReadFifoU32Response* response) override;
  ::grpc::Status ReadFifoU64(::grpc::ServerContext* context, const ReadFifoU64Request* request, ReadFifoU64Response* response) override;
  ::grpc::Status ReadFifoU8(::grpc::ServerContext* context, const ReadFifoU8Request* request, ReadFifoU8Response* response) override;
  ::grpc::Status ReadI16(::grpc::ServerContext* context, const ReadI16Request* request, ReadI16Response* response) override;
  ::grpc::Status BeginReadI16(::grpc::ServerContext* context, const BeginReadI16Request* request, BeginReadI16Response* response) override;
  ::grpc::Status ReadI32(::grpc::ServerContext* context, const ReadI32Request* request, ReadI32Response* response) override;
  ::grpc::Status BeginReadI32(::grpc::ServerContext* context, const BeginReadI32Request* request, BeginReadI32Response* response) override;
  ::grpc::Status ReadI64(::grpc::ServerContext* context, const ReadI64Request* request, ReadI64Response* response) override;
  ::grpc::Status BeginReadI64(::grpc::ServerContext* context, const BeginReadI64Request* request, BeginReadI64Response* response) override;
  ::grpc::Status ReadI8(::grpc::ServerContext* context, const ReadI8Request* request, ReadI8Response* response) override;
  ::grpc::Status BeginReadI8(::grpc::ServerContext* context, const BeginReadI8Request* request, BeginReadI8Response* response) override;
  ::grpc::Status ReadSgl(::grpc::ServerContext* context, const ReadSglRequest* request, ReadSglResponse* response) override;
  ::grpc::Status BeginReadSgl(::grpc::ServerContext* context, const BeginReadSglRequest* request, BeginReadSglResponse* response) override;
  ::grpc::Status ReadU16(::grpc::ServerContext* context, const ReadU16Request* request, ReadU16Response* response) override;
  ::grpc::Status BeginReadU16(::grpc::ServerContext* context, const BeginReadU16Request* request, BeginReadU16Response* response) override;
  ::grpc::Status ReadU32(::grpc::ServerContext* context, const ReadU32Request* request, ReadU32Response* response) override;
  ::grpc::Status BeginReadU32(::grpc::ServerContext* context, const BeginReadU32Request* request, BeginReadU32Response* response) override;
  ::grpc::Status ReadU64(::grpc::ServerContext* context, const ReadU64Request* request, ReadU64Response* response) override;
  ::grpc::Status BeginReadU64(::grpc::ServerContext* context, const BeginReadU64Request* request, BeginReadU64Response* response) override;
  ::grpc::Status ReadU8(::grpc::ServerContext* context, const ReadU8Request* request, ReadU8Response* response) override;
  ::grpc::Status BeginReadU8(::grpc::ServerContext* context, const BeginReadU8Request* request, BeginReadU8Response* response) override;
  ::grpc::Status ReleaseFifoElements(::grpc::ServerContext* context, const ReleaseFifoElementsRequest* request, ReleaseFifoElementsResponse* response) override;
  ::grpc::Status Reset(::grpc::ServerContext* context, const ResetRequest* request, ResetResponse* response) override;
  ::grpc::Status Run(::grpc::ServerContext* context, const RunRequest* request, RunResponse* response) override;
  ::grpc::Status SetFifoPropertyI32(::grpc::ServerContext* context, const SetFifoPropertyI32Request* request, SetFifoPropertyI32Response* response) override;
  ::grpc::Status SetFifoPropertyI64(::grpc::ServerContext* context, const SetFifoPropertyI64Request* request, SetFifoPropertyI64Response* response) override;
  ::grpc::Status SetFifoPropertyU32(::grpc::ServerContext* context, const SetFifoPropertyU32Request* request, SetFifoPropertyU32Response* response) override;
  ::grpc::Status SetFifoPropertyU64(::grpc::ServerContext* context, const SetFifoPropertyU64Request* request, SetFifoPropertyU64Response* response) override;
  ::grpc::Status StartFifo(::grpc::ServerContext* context, const StartFifoRequest* request, StartFifoResponse* response) override;
  ::grpc::Status StopFifo(::grpc::ServerContext* context, const StopFifoRequest* request, StopFifoResponse* response) override;
  ::grpc::Status UnreserveFifo(::grpc::ServerContext* context, const UnreserveFifoRequest* request, UnreserveFifoResponse* response) override;
  ::grpc::Status WaitOnIrqs(::grpc::ServerContext* context, const WaitOnIrqsRequest* request, WaitOnIrqsResponse* response) override;
  ::grpc::Status WriteArrayBool(::grpc::ServerContext* context, const WriteArrayBoolRequest* request, WriteArrayBoolResponse* response) override;
  ::grpc::Status BeginWriteArrayBool(::grpc::ServerContext* context, const BeginWriteArrayBoolRequest* request, BeginWriteArrayBoolResponse* response) override;
  ::grpc::Status WriteArrayDbl(::grpc::ServerContext* context, const WriteArrayDblRequest* request, WriteArrayDblResponse* response) override;
  ::grpc::Status BeginWriteArrayDbl(::grpc::ServerContext* context, const BeginWriteArrayDblRequest* request, BeginWriteArrayDblResponse* response) override;
  ::grpc::Status WriteArrayI16(::grpc::ServerContext* context, const WriteArrayI16Request* request, WriteArrayI16Response* response) override;
  ::grpc::Status BeginWriteArrayI16(::grpc::ServerContext* context, const BeginWriteArrayI16Request* request, BeginWriteArrayI16Response* response) override;
  ::grpc::Status WriteArrayI32(::grpc::ServerContext* context, const WriteArrayI32Request* request, WriteArrayI32Response* response) override;
  ::grpc::Status BeginWriteArrayI32(::grpc::ServerContext* context, const BeginWriteArrayI32Request* request, BeginWriteArrayI32Response* response) override;
  ::grpc::Status WriteArrayI64(::grpc::ServerContext* context, const WriteArrayI64Request* request, WriteArrayI64Response* response) override;
  ::grpc::Status BeginWriteArrayI64(::grpc::ServerContext* context, const BeginWriteArrayI64Request* request, BeginWriteArrayI64Response* response) override;
  ::grpc::Status WriteArrayI8(::grpc::ServerContext* context, const WriteArrayI8Request* request, WriteArrayI8Response* response) override;
  ::grpc::Status BeginWriteArrayI8(::grpc::ServerContext* context, const BeginWriteArrayI8Request* request, BeginWriteArrayI8Response* response) override;
  ::grpc::Status WriteArraySgl(::grpc::ServerContext* context, const WriteArraySglRequest* request, WriteArraySglResponse* response) override;
  ::grpc::Status BeginWriteArraySgl(::grpc::ServerContext* context, const BeginWriteArraySglRequest* request, BeginWriteArraySglResponse* response) override;
  ::grpc::Status WriteArrayU16(::grpc::ServerContext* context, const WriteArrayU16Request* request, WriteArrayU16Response* response) override;
  ::grpc::Status BeginWriteArrayU16(::grpc::ServerContext* context, const BeginWriteArrayU16Request* request, BeginWriteArrayU16Response* response) override;
  ::grpc::Status WriteArrayU32(::grpc::ServerContext* context, const WriteArrayU32Request* request, WriteArrayU32Response* response) override;
  ::grpc::Status BeginWriteArrayU32(::grpc::ServerContext* context, const BeginWriteArrayU32Request* request, BeginWriteArrayU32Response* response) override;
  ::grpc::Status WriteArrayU64(::grpc::ServerContext* context, const WriteArrayU64Request* request, WriteArrayU64Response* response) override;
  ::grpc::Status BeginWriteArrayU64(::grpc::ServerContext* context, const BeginWriteArrayU64Request* request, BeginWriteArrayU64Response* response) override;
  ::grpc::Status WriteArrayU8(::grpc::ServerContext* context, const WriteArrayU8Request* request, WriteArrayU8Response* response) override;
  ::grpc::Status BeginWriteArrayU8(::grpc::ServerContext* context, const BeginWriteArrayU8Request* request, BeginWriteArrayU8Response* response) override;
  ::grpc::Status WriteBool(::grpc::ServerContext* context, const WriteBoolRequest* request, WriteBoolResponse* response) override;
  ::grpc::Status BeginWriteBool(::grpc::ServerContext* context, const BeginWriteBoolRequest* request, BeginWriteBoolResponse* response) override;
  ::grpc::Status WriteDbl(::grpc::ServerContext* context, const WriteDblRequest* request, WriteDblResponse* response) override;
  ::grpc::Status BeginWriteDbl(::grpc::ServerContext* context, const BeginWriteDblRequest* request, BeginWriteDblResponse* response) override;
  ::grpc::Status WriteFifoBool(::grpc::ServerContext* context, const WriteFifoBoolRequest* request, WriteFifoBoolResponse* response) override;
  ::grpc::Status WriteFifoDbl(::grpc::ServerContext* context, const WriteFifoDblRequest* request, WriteFifoDblResponse* response) override;
  ::grpc::Status WriteFifoI16(::grpc::ServerContext* context, const WriteFifoI16Request* request, WriteFifoI16Response* response) override;
  ::grpc::Status WriteFifoI32(::grpc::ServerContext* context, const WriteFifoI32Request* request, WriteFifoI32Response* response) override;
  ::grpc::Status WriteFifoI64(::grpc::ServerContext* context, const WriteFifoI64Request* request, WriteFifoI64Response* response) override;
  ::grpc::Status WriteFifoI8(::grpc::ServerContext* context, const WriteFifoI8Request* request, WriteFifoI8Response* response) override;
  ::grpc::Status WriteFifoSgl(::grpc::ServerContext* context, const WriteFifoSglRequest* request, WriteFifoSglResponse* response) override;
  ::grpc::Status WriteFifoU16(::grpc::ServerContext* context, const WriteFifoU16Request* request, WriteFifoU16Response* response) override;
  ::grpc::Status WriteFifoU32(::grpc::ServerContext* context, const WriteFifoU32Request* request, WriteFifoU32Response* response) override;
  ::grpc::Status WriteFifoU64(::grpc::ServerContext* context, const WriteFifoU64Request* request, WriteFifoU64Response* response) override;
  ::grpc::Status WriteFifoU8(::grpc::ServerContext* context, const WriteFifoU8Request* request, WriteFifoU8Response* response) override;
  ::grpc::Status WriteI16(::grpc::ServerContext* context, const WriteI16Request* request, WriteI16Response* response) override;
  ::grpc::Status BeginWriteI16(::grpc::ServerContext* context, const BeginWriteI16Request* request, BeginWriteI16Response* response) override;
  ::grpc::Status WriteI32(::grpc::ServerContext* context, const WriteI32Request* request, WriteI32Response* response) override;
  ::grpc::Status BeginWriteI32(::grpc::ServerContext* context, const BeginWriteI32Request* request, BeginWriteI32Response* response) override;
  ::grpc::Status WriteI64(::grpc::ServerContext* context, const WriteI64Request* request, WriteI64Response* response) override;
  ::grpc::Status BeginWriteI64(::grpc::ServerContext* context, const BeginWriteI64Request* request, BeginWriteI64Response* response) override;
  ::grpc::Status WriteI8(::grpc::ServerContext* context, const WriteI8Request* request, WriteI8Response* response) override;
  ::grpc::Status BeginWriteI8(::grpc::ServerContext* context, const BeginWriteI8Request* request, BeginWriteI8Response* response) override;
  ::grpc::Status WriteSgl(::grpc::ServerContext* context, const WriteSglRequest* request, WriteSglResponse* response) override;
  ::grpc::Status BeginWriteSgl(::grpc::ServerContext* context, const BeginWriteSglRequest* request, BeginWriteSglResponse* response) override;
  ::grpc::Status WriteU16(::grpc::ServerContext* context, const WriteU16Request* request, WriteU16Response* response) override;
  ::grpc::Status BeginWriteU16(::grpc::ServerContext* context, const BeginWriteU16Request* request, BeginWriteU16Response* response) override;
  ::grpc::Status WriteU32(::grpc::ServerContext* context, const WriteU32Request* request, WriteU32Response* response) override;
  ::grpc::Status BeginWriteU32(::grpc::ServerContext* context, const BeginWriteU32Request* request, BeginWriteU32Response* response) override;
  ::grpc::Status WriteU64(::grpc::ServerContext* context, const WriteU64Request* request, WriteU64Response* response) override;
  ::grpc::Status BeginWriteU64(::grpc::ServerContext* context, const BeginWriteU64Request* request, BeginWriteU64Response* response) override;
  ::grpc::Status WriteU8(::grpc::ServerContext* context, const WriteU8Request* request, WriteU8Response* response) override;
  ::grpc::Status BeginWriteU8(::grpc::ServerContext* context, const BeginWriteU8Request* request, BeginWriteU8Response* response) override;
private:
  LibrarySharedPtr library_;
  ResourceRepositorySharedPtr session_repository_;
  ::grpc::Status ConvertApiErrorStatusForNiFpga_Session(::grpc::ServerContextBase* context, int32_t status, NiFpga_Session session);
  std::map<std::int32_t, std::int32_t> irq_input_map_ { {0, 0},{1, 1},{2, 2},{3, 4},{4, 8},{5, 16},{6, 32},{7, 64},{8, 128},{9, 256},{10, 512},{11, 1024},{12, 2048},{13, 4096},{14, 8192},{15, 16384},{16, 32768},{17, 65536},{18, 131072},{19, 262144},{20, 524288},{21, 1048576},{22, 2097152},{23, 4194304},{24, 8388608},{25, 16777216},{26, 33554432},{27, 67108864},{28, 134217728},{29, 268435456},{30, 536870912},{31, 1073741824},{32, 2147483648}, };
  std::map<std::int32_t, std::int32_t> irq_output_map_ { {0, 0},{1, 1},{2, 2},{4, 3},{8, 4},{16, 5},{32, 6},{64, 7},{128, 8},{256, 9},{512, 10},{1024, 11},{2048, 12},{4096, 13},{8192, 14},{16384, 15},{32768, 16},{65536, 17},{131072, 18},{262144, 19},{524288, 20},{1048576, 21},{2097152, 22},{4194304, 23},{8388608, 24},{16777216, 25},{33554432, 26},{67108864, 27},{134217728, 28},{268435456, 29},{536870912, 30},{1073741824, 31},{2147483648, 32}, };
  std::map<std::int32_t, std::int32_t> openattribute_input_map_ { {0, 0},{1, 1},{2, 2},{3, 1073741824},{4, 2147483648}, };
  std::map<std::int32_t, std::int32_t> openattribute_output_map_ { {0, 0},{1, 1},{2, 2},{1073741824, 3},{2147483648, 4}, };

  NiFpgaFeatureToggles feature_toggles_;
};

} // namespace nifpga_grpc

#endif  // NIFPGA_GRPC_SERVICE_H
