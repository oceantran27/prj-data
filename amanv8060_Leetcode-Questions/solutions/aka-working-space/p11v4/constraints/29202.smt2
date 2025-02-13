(set-option :timeout 5000)
; Variable "word" , real type = "string", class com.dse.parser.object.InternalVariableNode
(declare-fun word () String)
; Variable "ch" , real type = "char", class com.dse.parser.object.InternalVariableNode
(declare-fun ch () Int)
(assert (and (>= ch -128) (<= ch 127)))
; Variable "word.size" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word___attr___size () Int)
(assert (and (>= word___attr___size -128) (<= word___attr___size 127)))
; Variable "word[0]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____0____arrend____ () Int)
(assert (and (>= word____arrbegin____0____arrend____ -128) (<= word____arrbegin____0____arrend____ 127)))
; Variable "word[1]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____1____arrend____ () Int)
(assert (and (>= word____arrbegin____1____arrend____ -128) (<= word____arrbegin____1____arrend____ 127)))
; Variable "word[2]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____2____arrend____ () Int)
(assert (and (>= word____arrbegin____2____arrend____ -128) (<= word____arrbegin____2____arrend____ 127)))
; Variable "word[3]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____3____arrend____ () Int)
(assert (and (>= word____arrbegin____3____arrend____ -128) (<= word____arrbegin____3____arrend____ 127)))


(assert (> word___attr___size 0) )
(assert (> word 0) )
(assert (< 0  () ) )
(assert (> word 0) )
(assert (not  (= word____arrbegin____0____arrend____ ch) ) )
(assert (< 1  () ) )
(assert (> word 1) )
(assert (not  (= word____arrbegin____1____arrend____ ch) ) )
(assert (< 2  () ) )
(assert (> word 2) )
(assert (not  (= word____arrbegin____2____arrend____ ch) ) )
(assert (< 3  () ) )
(assert (> word 3) )
(assert (= word____arrbegin____3____arrend____ ch) )
(check-sat)
(get-model)