(set-option :timeout 5000)
; Variable "a" , real type = "vector<int>&", class com.dse.parser.object.InternalVariableNode
; do not support this type
; Variable "n" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun n () Int)
(assert (and (>= n 0) (<= n 10)))
; Variable "k" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun k () Int)
(assert (and (>= k 0) (<= k 10)))
; Variable "pos" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun pos () Int)
(assert (and (>= pos 0) (<= pos 10)))
; Variable "res" , real type = "int&", class com.dse.parser.object.InternalVariableNode
(declare-fun res () Int)
(assert (and (>= res -2147483648) (<= res 2147483647)))
; Variable "dp" , real type = "vector<int>&", class com.dse.parser.object.InternalVariableNode
; do not support this type
; Variable "dp[pos]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun dp____arrbegin____pos____arrend____ () Int)
(assert (and (>= dp____arrbegin____pos____arrend____ -2147483648) (<= dp____arrbegin____pos____arrend____ 2147483647)))


(assert (not  (>= pos n) ) )
(assert (not  (< pos n) ) )
(assert (not  (< 0 k) ) )
(assert (> dp 0) )
(assert (>= pos 0) )
(assert (> dp pos) )
(check-sat)
(get-model)