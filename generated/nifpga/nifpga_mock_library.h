//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-FPGA
//---------------------------------------------------------------------
#ifndef NIFPGA_GRPC_MOCK_LIBRARY_H
#define NIFPGA_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nifpga_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiFpgaMockLibrary : public nifpga_grpc::NiFpgaLibraryInterface {
 public:
  MOCK_METHOD(NiFpga_Status, Abort, (NiFpga_Session session), (override));
  MOCK_METHOD(NiFpga_Status, Close, (NiFpga_Session session, uint32_t attribute), (override));
  MOCK_METHOD(NiFpga_Status, CommitFifoConfiguration, (NiFpga_Session session, uint32_t fifo), (override));
  MOCK_METHOD(NiFpga_Status, ConfigureFifo, (NiFpga_Session session, uint32_t fifo, size_t depth), (override));
  MOCK_METHOD(NiFpga_Status, ConfigureFifo2, (NiFpga_Session session, uint32_t fifo, size_t requestedDepth, size_t* actualDepth), (override));
  MOCK_METHOD(NiFpga_Status, Download, (NiFpga_Session session), (override));
  MOCK_METHOD(NiFpga_Status, FindFifo, (NiFpga_Session session, char fifoName[], uint32_t* fifoNumber), (override));
  MOCK_METHOD(NiFpga_Status, FindRegister, (NiFpga_Session session, char registerName[], uint32_t* registerOffset), (override));
  MOCK_METHOD(NiFpga_Status, Open, (char bitfile[], char signature[], char resource[], uint32_t attribute, NiFpga_Session* session), (override));
  MOCK_METHOD(NiFpga_Status, ReadArrayBool, (NiFpga_Session session, uint32_t indicator, NiFpga_Bool array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, ReadArrayDbl, (NiFpga_Session session, uint32_t indicator, double array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, ReadArrayI16, (NiFpga_Session session, uint32_t indicator, int16_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, ReadArrayI32, (NiFpga_Session session, uint32_t indicator, int32_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, ReadArrayI64, (NiFpga_Session session, uint32_t indicator, int64_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, ReadArrayI8, (NiFpga_Session session, uint32_t indicator, int8_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, ReadArraySgl, (NiFpga_Session session, uint32_t indicator, float array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, ReadArrayU16, (NiFpga_Session session, uint32_t indicator, uint16_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, ReadArrayU32, (NiFpga_Session session, uint32_t indicator, uint32_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, ReadArrayU64, (NiFpga_Session session, uint32_t indicator, uint64_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, ReadArrayU8, (NiFpga_Session session, uint32_t indicator, uint8_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, ReadBool, (NiFpga_Session session, uint32_t indicator, NiFpga_Bool* value), (override));
  MOCK_METHOD(NiFpga_Status, ReadDbl, (NiFpga_Session session, uint32_t indicator, double* value), (override));
  MOCK_METHOD(NiFpga_Status, ReadFifoBool, (NiFpga_Session session, uint32_t fifo, NiFpga_Bool data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, ReadFifoDbl, (NiFpga_Session session, uint32_t fifo, double data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, ReadFifoI16, (NiFpga_Session session, uint32_t fifo, int16_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, ReadFifoI32, (NiFpga_Session session, uint32_t fifo, int32_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, ReadFifoI64, (NiFpga_Session session, uint32_t fifo, int64_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, ReadFifoI8, (NiFpga_Session session, uint32_t fifo, int8_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, ReadFifoSgl, (NiFpga_Session session, uint32_t fifo, float data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, ReadFifoU16, (NiFpga_Session session, uint32_t fifo, uint16_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, ReadFifoU32, (NiFpga_Session session, uint32_t fifo, uint32_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, ReadFifoU64, (NiFpga_Session session, uint32_t fifo, uint64_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, ReadFifoU8, (NiFpga_Session session, uint32_t fifo, uint8_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, ReadI16, (NiFpga_Session session, uint32_t indicator, int16_t* value), (override));
  MOCK_METHOD(NiFpga_Status, ReadI32, (NiFpga_Session session, uint32_t indicator, int32_t* value), (override));
  MOCK_METHOD(NiFpga_Status, ReadI64, (NiFpga_Session session, uint32_t indicator, int64_t* value), (override));
  MOCK_METHOD(NiFpga_Status, ReadI8, (NiFpga_Session session, uint32_t indicator, int8_t* value), (override));
  MOCK_METHOD(NiFpga_Status, ReadSgl, (NiFpga_Session session, uint32_t indicator, float* value), (override));
  MOCK_METHOD(NiFpga_Status, ReadU16, (NiFpga_Session session, uint32_t indicator, uint16_t* value), (override));
  MOCK_METHOD(NiFpga_Status, ReadU32, (NiFpga_Session session, uint32_t indicator, uint32_t* value), (override));
  MOCK_METHOD(NiFpga_Status, ReadU64, (NiFpga_Session session, uint32_t indicator, uint64_t* value), (override));
  MOCK_METHOD(NiFpga_Status, ReadU8, (NiFpga_Session session, uint32_t indicator, uint8_t* value), (override));
  MOCK_METHOD(NiFpga_Status, ReleaseFifoElements, (NiFpga_Session session, uint32_t fifo, size_t elements), (override));
  MOCK_METHOD(NiFpga_Status, Reset, (NiFpga_Session session), (override));
  MOCK_METHOD(NiFpga_Status, Run, (NiFpga_Session session, uint32_t attribute), (override));
  MOCK_METHOD(NiFpga_Status, StartFifo, (NiFpga_Session session, uint32_t fifo), (override));
  MOCK_METHOD(NiFpga_Status, StopFifo, (NiFpga_Session session, uint32_t fifo), (override));
  MOCK_METHOD(NiFpga_Status, UnreserveFifo, (NiFpga_Session session, uint32_t fifo), (override));
  MOCK_METHOD(NiFpga_Status, WriteArrayBool, (NiFpga_Session session, uint32_t control, NiFpga_Bool array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, WriteArrayDbl, (NiFpga_Session session, uint32_t control, double array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, WriteArrayI16, (NiFpga_Session session, uint32_t control, int16_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, WriteArrayI32, (NiFpga_Session session, uint32_t control, int32_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, WriteArrayI64, (NiFpga_Session session, uint32_t control, int64_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, WriteArrayI8, (NiFpga_Session session, uint32_t control, int8_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, WriteArraySgl, (NiFpga_Session session, uint32_t control, float array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, WriteArrayU16, (NiFpga_Session session, uint32_t control, uint16_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, WriteArrayU32, (NiFpga_Session session, uint32_t control, uint32_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, WriteArrayU64, (NiFpga_Session session, uint32_t control, uint64_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, WriteArrayU8, (NiFpga_Session session, uint32_t control, uint8_t array[], size_t size), (override));
  MOCK_METHOD(NiFpga_Status, WriteBool, (NiFpga_Session session, uint32_t control, NiFpga_Bool value), (override));
  MOCK_METHOD(NiFpga_Status, WriteDbl, (NiFpga_Session session, uint32_t control, double value), (override));
  MOCK_METHOD(NiFpga_Status, WriteFifoBool, (NiFpga_Session session, uint32_t fifo, NiFpga_Bool data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, WriteFifoDbl, (NiFpga_Session session, uint32_t fifo, double data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, WriteFifoI16, (NiFpga_Session session, uint32_t fifo, int16_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, WriteFifoI32, (NiFpga_Session session, uint32_t fifo, int32_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, WriteFifoI64, (NiFpga_Session session, uint32_t fifo, int64_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, WriteFifoI8, (NiFpga_Session session, uint32_t fifo, int8_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, WriteFifoSgl, (NiFpga_Session session, uint32_t fifo, float data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, WriteFifoU16, (NiFpga_Session session, uint32_t fifo, uint16_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, WriteFifoU32, (NiFpga_Session session, uint32_t fifo, uint32_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, WriteFifoU64, (NiFpga_Session session, uint32_t fifo, uint64_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, WriteFifoU8, (NiFpga_Session session, uint32_t fifo, uint8_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining), (override));
  MOCK_METHOD(NiFpga_Status, WriteI16, (NiFpga_Session session, uint32_t control, int16_t value), (override));
  MOCK_METHOD(NiFpga_Status, WriteI32, (NiFpga_Session session, uint32_t control, int32_t value), (override));
  MOCK_METHOD(NiFpga_Status, WriteI64, (NiFpga_Session session, uint32_t control, int64_t value), (override));
  MOCK_METHOD(NiFpga_Status, WriteI8, (NiFpga_Session session, uint32_t control, int8_t value), (override));
  MOCK_METHOD(NiFpga_Status, WriteSgl, (NiFpga_Session session, uint32_t control, float value), (override));
  MOCK_METHOD(NiFpga_Status, WriteU16, (NiFpga_Session session, uint32_t control, uint16_t value), (override));
  MOCK_METHOD(NiFpga_Status, WriteU32, (NiFpga_Session session, uint32_t control, uint32_t value), (override));
  MOCK_METHOD(NiFpga_Status, WriteU64, (NiFpga_Session session, uint32_t control, uint64_t value), (override));
  MOCK_METHOD(NiFpga_Status, WriteU8, (NiFpga_Session session, uint32_t control, uint8_t value), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIFPGA_GRPC_MOCK_LIBRARY_H
