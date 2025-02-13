(set-option :timeout 5000)
; Variable "nums" , real type = "vector<int>&", class com.dse.parser.object.InternalVariableNode
; do not support this type
; Variable "nums.size" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun nums___attr___size () Int)
(assert (and (>= nums___attr___size -128) (<= nums___attr___size 127)))


(assert (> nums___attr___size 0) )
(assert (> nums 0) )
(assert (=  ()  0) )
(check-sat)
(get-model)