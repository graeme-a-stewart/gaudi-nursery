#pragma once

#include "GaudiAlg/GaudiAlgorithm.h"

class HelloWorldEx : public GaudiAlgorithm {
public:
    HelloWorldEx(const std::string& name, ISvcLocator* pSvcLocator); 
    StatusCode initialize() override;
    StatusCode execute() override;
    StatusCode finalize() override;
};
