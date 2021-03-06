* PARAMETER DHF_STEPS describes the elastic electricity demands                                                                         
* in relative terms, by quantifying the steps. Compare PARAMETER DEF_STEPS.                                                             
* Unit: (none).                                                                                                                         
                                                                                                                                        
PARAMETER DHF_STEPS(AAA,DHUSER,SSS,TTT,DF_QP,DHF)  'Elastic heat demands'                                                               
;                                                                                                                                       
                                                                                                                                        
                                                                                                                                        
TABLE DHF_STEPS                                                                                                                         
$ontext                                                                                                                                 
                                                                                                                                DHF_DINF
DK2A.S01.T001.DF_QUANT                                                                                                          -INF    
DK2A.S01.T001.DF_PRICE                                                                                                          10000   
DK1A.S01.T001.DF_QUANT                                                                                                          -INF    
DK1A.S01.T001.DF_PRICE                                                                                                          10000   
$offtext                                                                                                                                
;                                                                                                                                       
                                                                                                                                        
$ontext                                                                                                                                 
DHF_STEPS(IA,SSS,TTT,DF_QP,DHF_U1)$(DHF_STEPS(IA,SSS,TTT,DF_QP,DHF_U) EQ 0) = DHF_STEPS('Denmark1A','S01','T001',DF_QP,DHF_U) ;         
DHF_STEPS(IA,SSS,TTT,DF_QP,DHF_D1)$(DHF_STEPS(IA,SSS,TTT,DF_QP,DHF_D) EQ 0) = DHF_STEPS('Denmark1A','S01','T001',DF_QP,DHF_D) ;         
$offtext                                                                                                                                
