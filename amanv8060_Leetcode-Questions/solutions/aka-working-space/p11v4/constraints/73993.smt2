(set-option :timeout 5000)
; Variable "n" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun n () Int)
(assert (and (>= n 0) (<= n 10)))
; Variable "spf" , real type = "vector<int>", class com.dse.parser.object.AttributeOfStructureVariableNode
; do not support this type
; Variable "spf[10]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____10____arrend____ () Int)
(assert (and (>= spf____arrbegin____10____arrend____ -2147483648) (<= spf____arrbegin____10____arrend____ 2147483647)))
; Variable "spf[2]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____2____arrend____ () Int)
(assert (and (>= spf____arrbegin____2____arrend____ -2147483648) (<= spf____arrbegin____2____arrend____ 2147483647)))
; Variable "spf[3]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____3____arrend____ () Int)
(assert (and (>= spf____arrbegin____3____arrend____ -2147483648) (<= spf____arrbegin____3____arrend____ 2147483647)))
; Variable "spf[4]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____4____arrend____ () Int)
(assert (and (>= spf____arrbegin____4____arrend____ -2147483648) (<= spf____arrbegin____4____arrend____ 2147483647)))
; Variable "spf[5]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____5____arrend____ () Int)
(assert (and (>= spf____arrbegin____5____arrend____ -2147483648) (<= spf____arrbegin____5____arrend____ 2147483647)))
; Variable "spf[6]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____6____arrend____ () Int)
(assert (and (>= spf____arrbegin____6____arrend____ -2147483648) (<= spf____arrbegin____6____arrend____ 2147483647)))
; Variable "spf[7]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____7____arrend____ () Int)
(assert (and (>= spf____arrbegin____7____arrend____ -2147483648) (<= spf____arrbegin____7____arrend____ 2147483647)))
; Variable "spf[8]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____8____arrend____ () Int)
(assert (and (>= spf____arrbegin____8____arrend____ -2147483648) (<= spf____arrbegin____8____arrend____ 2147483647)))
; Variable "spf[9]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun spf____arrbegin____9____arrend____ () Int)
(assert (and (>= spf____arrbegin____9____arrend____ -2147483648) (<= spf____arrbegin____9____arrend____ 2147483647)))


(assert (< 2 n) )
(assert (> spf 0) )
(assert (> spf 2) )
(assert (< 3 n) )
(assert (> spf 3) )
(assert (< 4 n) )
(assert (> spf 4) )
(assert (< 5 n) )
(assert (> spf 5) )
(assert (< 6 n) )
(assert (> spf 6) )
(assert (< 7 n) )
(assert (> spf 7) )
(assert (< 8 n) )
(assert (> spf 8) )
(assert (< 9 n) )
(assert (> spf 9) )
(assert (< 10 n) )
(assert (> spf 10) )
(assert (not  (< 11 n) ) )
(assert (<  (* 2 2)  n) )
(assert (not  (= spf____arrbegin____2____arrend____ 2) ) )
(assert (<  (* 3 3)  n) )
(assert (not  (= spf____arrbegin____3____arrend____ 3) ) )
(assert (<  (* 4 4)  n) )
(assert (not  (= spf____arrbegin____4____arrend____ 4) ) )
(assert (<  (* 5 5)  n) )
(assert (not  (= spf____arrbegin____5____arrend____ 5) ) )
(assert (<  (* 6 6)  n) )
(assert (not  (= spf____arrbegin____6____arrend____ 6) ) )
(assert (<  (* 7 7)  n) )
(assert (not  (= spf____arrbegin____7____arrend____ 7) ) )
(check-sat)
(get-model)