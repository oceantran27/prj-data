(set-option :timeout 5000)
; Variable "operations" , real type = "vector<string>&", class com.dse.parser.object.InternalVariableNode
; do not support this type
; Variable "operations.size" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun operations___attr___size () Int)
(assert (and (>= operations___attr___size -128) (<= operations___attr___size 127)))
; Variable "operations[0]" , real type = "string", class com.dse.parser.object.VariableNode
(declare-fun operations____arrbegin____0____arrend____ () String)
; Variable "operations[1]" , real type = "string", class com.dse.parser.object.VariableNode
(declare-fun operations____arrbegin____1____arrend____ () String)
; Variable "operations[2]" , real type = "string", class com.dse.parser.object.VariableNode
(declare-fun operations____arrbegin____2____arrend____ () String)
; Variable "operations[3]" , real type = "string", class com.dse.parser.object.VariableNode
(declare-fun operations____arrbegin____3____arrend____ () String)


(assert (> operations___attr___size 0) )
(assert (> operations 0) )
(assert (< 0  () ) )
(assert (> operations 0) )
(assert (= s "--X") )
(assert (< 1  () ) )
(assert (> operations 1) )
(assert (< 2  () ) )
(assert (> operations 2) )
(assert (< 3  () ) )
(assert (> operations 3) )
(check-sat)
(get-model)