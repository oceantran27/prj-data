(set-option :timeout 5000)
; Variable "a" , real type = "vector<int>&", class com.dse.parser.object.InternalVariableNode
; do not support this type
; Variable "k" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun k () Int)
(assert (and (>= k -2147483648) (<= k 2147483647)))
; Variable "a.size" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun a___attr___size () Int)
(assert (and (>= a___attr___size -128) (<= a___attr___size 127)))


(assert (> a___attr___size 0) )
(assert (> a 0) )
(check-sat)
(get-model)