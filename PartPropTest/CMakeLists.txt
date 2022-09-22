# Gaudi application

find_package(HepPDT REQUIRED)

gaudi_add_module(PartPropTest
    SOURCES
        src/PartPropTest.cxx
    LINK PRIVATE
        HepPDT::heppdt
        Gaudi::GaudiKernel
        Gaudi::GaudiAlgLib
    )
#target_link_libraries(PartPropTest PRIVATE HepPDT::heppdt Gaudi::GaudiKernel Gaudi::GaudiAlgLib)

