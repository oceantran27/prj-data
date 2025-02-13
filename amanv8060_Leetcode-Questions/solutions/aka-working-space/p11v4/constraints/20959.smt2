(set-option :timeout 5000)
; Variable "n" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun n () Int)
(assert (and (>= n 0) (<= n 10)))
; Variable "spf" , real type = "vector<int>", class com.dse.parser.object.AttributeOfStructureVariableNode
; do not support this type
; Variable "spf[2]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____2____arrend____ () Int)
(assert (and (>= spf____arrbegin____2____arrend____ -2147483648) (<= spf____arrbegin____2____arrend____ 2147483647)))
; Variable "spf[3]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____3____arrend____ () Int)
(assert (and (>= spf____arrbegin____3____arrend____ -2147483648) (<= spf____arrbegin____3____arrend____ 2147483647)))
; Variable "spf[4]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____4____arrend____ () Int)
(assert (and (>= spf____arrbegin____4____arrend____ -2147483648) (<= spf____arrbegin____4____arrend____ 2147483647)))


(assert (< 2 n) )
(assert (> spf 0) )
(assert (> spf 2) )
(assert (< 3 n) )
(assert (> spf 3) )
(assert (< 4 n) )
(assert (> spf 4) )
(assert (not  (< 5 n) ) )
(check-sat)
(get-model)