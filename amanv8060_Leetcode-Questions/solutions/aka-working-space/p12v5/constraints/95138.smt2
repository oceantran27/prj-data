(set-option :timeout 5000)
; Variable "rides" , real type = "vector<vector<int>>&", class com.dse.parser.object.InternalVariableNode
; do not support this type
; Variable "i" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun i () Int)
(assert (and (>= i -2147483648) (<= i 2147483647)))
; Variable "n" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun n () Int)
(assert (and (>= n -2147483648) (<= n 2147483647)))
; Variable "dp" , real type = "vector<long long>&", class com.dse.parser.object.InternalVariableNode
; do not support this type


(assert (= i n) )
(check-sat)
(get-model)