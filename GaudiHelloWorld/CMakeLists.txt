
gaudi_add_module(GaudiHelloWorld SOURCES src/HelloWorldEx.cxx
                #LINK GaudiAlg
                )

target_link_libraries(GaudiHelloWorld PRIVATE Gaudi::GaudiKernel Gaudi::GaudiAlgLib)
