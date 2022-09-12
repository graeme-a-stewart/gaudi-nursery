#include "HelloWorldEx.h"
#include "GaudiKernel/MsgStream.h"

DECLARE_COMPONENT(HelloWorldEx)

HelloWorldEx::HelloWorldEx(const std::string& name, ISvcLocator* ploc) :
    GaudiAlgorithm(name, ploc) {}

StatusCode HelloWorldEx::initialize() {

  StatusCode sc = Algorithm::initialize();
  if(sc.isFailure() ) return sc;

  info() << "Hello World: Inilializing..." << endmsg;
  return StatusCode::SUCCESS;
}

StatusCode HelloWorldEx::execute() {
  info() << "Hello World: Executing..." << endmsg;
  return StatusCode::SUCCESS;
}

StatusCode HelloWorldEx::finalize() {
  info() << "Hello World: Finalizing..." << endmsg;
  return Algorithm::finalize(); // must be executed last
}
