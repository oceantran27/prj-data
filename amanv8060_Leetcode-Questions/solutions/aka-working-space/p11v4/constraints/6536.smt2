(set-option :timeout 5000)
; Variable "Mod" , real type = "int", class com.dse.parser.object.ExternalVariableNode
(declare-fun Mod () Int)
(assert (and (>= Mod -2147483648) (<= Mod 2147483647)))
; Variable "nextVisit" , real type = "vector<int>&", class com.dse.parser.object.InternalVariableNode
; do not support this type
; Variable "nextVisit.size" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun nextVisit___attr___size () Int)
(assert (and (>= nextVisit___attr___size -128) (<= nextVisit___attr___size 127)))
; Variable "prefix" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun prefix () Int)
(assert (and (>= prefix -128) (<= prefix 127)))
; Variable "prefix[-1]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun prefix____arrbegin____-1____arrend____ () Int)
(assert (and (>= prefix____arrbegin____-1____arrend____ -128) (<= prefix____arrbegin____-1____arrend____ 127)))


(assert (> nextVisit___attr___size 0) )
(assert (> nextVisit 0) )
(assert (not not (= 0 0)) )
(assert (> prefix 0) )
(assert (> prefix  (*  (- 1)   1 ) ) )
(check-sat)
(get-model)