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
; Variable "word[10]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____10____arrend____ () Int)
(assert (and (>= word____arrbegin____10____arrend____ -128) (<= word____arrbegin____10____arrend____ 127)))
; Variable "word[1]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____1____arrend____ () Int)
(assert (and (>= word____arrbegin____1____arrend____ -128) (<= word____arrbegin____1____arrend____ 127)))
; Variable "word[2]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____2____arrend____ () Int)
(assert (and (>= word____arrbegin____2____arrend____ -128) (<= word____arrbegin____2____arrend____ 127)))
; Variable "word[3]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____3____arrend____ () Int)
(assert (and (>= word____arrbegin____3____arrend____ -128) (<= word____arrbegin____3____arrend____ 127)))
; Variable "word[4]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____4____arrend____ () Int)
(assert (and (>= word____arrbegin____4____arrend____ -128) (<= word____arrbegin____4____arrend____ 127)))
; Variable "word[5]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____5____arrend____ () Int)
(assert (and (>= word____arrbegin____5____arrend____ -128) (<= word____arrbegin____5____arrend____ 127)))
; Variable "word[6]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____6____arrend____ () Int)
(assert (and (>= word____arrbegin____6____arrend____ -128) (<= word____arrbegin____6____arrend____ 127)))
; Variable "word[7]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____7____arrend____ () Int)
(assert (and (>= word____arrbegin____7____arrend____ -128) (<= word____arrbegin____7____arrend____ 127)))
; Variable "word[8]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____8____arrend____ () Int)
(assert (and (>= word____arrbegin____8____arrend____ -128) (<= word____arrbegin____8____arrend____ 127)))
; Variable "word[9]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun word____arrbegin____9____arrend____ () Int)
(assert (and (>= word____arrbegin____9____arrend____ -128) (<= word____arrbegin____9____arrend____ 127)))


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
(assert (not  (= word____arrbegin____3____arrend____ ch) ) )
(assert (< 4  () ) )
(assert (> word 4) )
(assert (not  (= word____arrbegin____4____arrend____ ch) ) )
(assert (< 5  () ) )
(assert (> word 5) )
(assert (not  (= word____arrbegin____5____arrend____ ch) ) )
(assert (< 6  () ) )
(assert (> word 6) )
(assert (not  (= word____arrbegin____6____arrend____ ch) ) )
(assert (< 7  () ) )
(assert (> word 7) )
(assert (not  (= word____arrbegin____7____arrend____ ch) ) )
(assert (< 8  () ) )
(assert (> word 8) )
(assert (not  (= word____arrbegin____8____arrend____ ch) ) )
(assert (< 9  () ) )
(assert (> word 9) )
(assert (not  (= word____arrbegin____9____arrend____ ch) ) )
(assert (< 10  () ) )
(assert (> word 10) )
(assert (= word____arrbegin____10____arrend____ ch) )
(check-sat)
(get-model)