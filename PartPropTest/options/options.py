from Gaudi.Configuration import *
from Configurables import PartPropTest

alg = PartPropTest()

ApplicationMgr(
    EvtMax = 10,
    EvtSel = 'NONE',
    HistogramPersistency = 'NONE',
    TopAlg = [alg],
)
