
gaudi_add_module(GaudiHelloWorld SOURCES src/HelloWorldEx.cxx
                LINK 
                PRIVATE
                Gaudi::GaudiKernel
                Gaudi::GaudiAlgLib
                )

#target_link_libraries(GaudiHelloWorld PRIVATE Gaudi::GaudiKernel Gaudi::GaudiAlgLib)
