// Gaudi Particle Property Service Test

#pragma once

// from Gaudi
#include "GaudiKernel/Kernel.h"
#include "GaudiKernel/Service.h"
#include "GaudiKernel/StatusCode.h"

#include "GaudiKernel/Algorithm.h"
#include "HepPDT/CommonParticleData.hh"
#include "HepPDT/ProcessUnknownID.hh"

class IPartPropSvc;

class partproptest : public Algorithm {

public:
  using Algorithm::Algorithm;
  StatusCode initialize() override;
  StatusCode execute() override;

private:
  IPartPropSvc* m_pps{ nullptr };
};

namespace HepPDT {
  class TestUnknownID : public ProcessUnknownID {
  public:
    TestUnknownID() = default;

    CommonParticleData* processUnknownID( ParticleID, const ParticleDataTable& pdt ) override;
  };
} // namespace HepPDT
