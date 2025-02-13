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
; Variable "operations[4]" , real type = "string", class com.dse.parser.object.VariableNode
(declare-fun operations____arrbegin____4____arrend____ () String)
; Variable "operations[5]" , real type = "string", class com.dse.parser.object.VariableNode
(declare-fun operations____arrbegin____5____arrend____ () String)
; Variable "operations[6]" , real type = "string", class com.dse.parser.object.VariableNode
(declare-fun operations____arrbegin____6____arrend____ () String)
; Variable "operations[7]" , real type = "string", class com.dse.parser.object.VariableNode
(declare-fun operations____arrbegin____7____arrend____ () String)
; Variable "operations[8]" , real type = "string", class com.dse.parser.object.VariableNode
(declare-fun operations____arrbegin____8____arrend____ () String)


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
(assert (< 4  () ) )
(assert (> operations 4) )
(assert (< 5  () ) )
(assert (> operations 5) )
(assert (< 6  () ) )
(assert (> operations 6) )
(assert (< 7  () ) )
(assert (> operations 7) )
(assert (< 8  () ) )
(assert (> operations 8) )
(assert (not  (= s "--X") ) )
(assert (= s "X--") )
(check-sat)
(get-model)