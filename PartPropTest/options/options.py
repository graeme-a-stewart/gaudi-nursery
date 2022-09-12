from Gaudi.Configuration import *
from Configurables import partproptest

alg = partproptest()

ApplicationMgr(
    EvtMax = 10,
    EvtSel = 'NONE',
    HistogramPersistency = 'NONE',
    TopAlg = [alg],
)
