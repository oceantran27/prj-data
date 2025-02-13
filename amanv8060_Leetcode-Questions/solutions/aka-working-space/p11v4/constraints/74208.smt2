(set-option :timeout 5000)
; Variable "Mod" , real type = "int", class com.dse.parser.object.ExternalVariableNode
(declare-fun Mod () Int)
(assert (and (>= Mod -2147483648) (<= Mod 2147483647)))
; Variable "nextVisit" , real type = "vector<int>&", class com.dse.parser.object.InternalVariableNode
; do not support this type
; Variable "nextVisit.size" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun nextVisit___attr___size () Int)
(assert (and (>= nextVisit___attr___size -128) (<= nextVisit___attr___size 127)))


(assert (> nextVisit___attr___size 0) )
(assert (> nextVisit 0) )
(check-sat)
(get-model)