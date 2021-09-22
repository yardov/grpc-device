
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-RFSA.
//---------------------------------------------------------------------
#include "nirfsa_client.h"

#include <grpcpp/grpcpp.h>

#include <nirfsa.grpc.pb.h>

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

namespace nirfsa_grpc::experimental::client {

CloseResponse
close(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = CloseRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = CloseResponse{};

  raise_if_error(
      stub->Close(&context, request, &response));

  return response;
}

InitWithOptionsResponse
init_with_options(const StubPtr& stub, const pb::string& resource_name, const bool& id_query, const bool& reset, const pb::string& option_string)
{
  ::grpc::ClientContext context;

  auto request = InitWithOptionsRequest{};
  request.set_resource_name(resource_name);
  request.set_id_query(id_query);
  request.set_reset(reset);
  request.set_option_string(option_string);

  auto response = InitWithOptionsResponse{};

  raise_if_error(
      stub->InitWithOptions(&context, request, &response));

  return response;
}


} // namespace nirfsa_grpc::experimental::client
