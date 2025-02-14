(set-option :timeout 5000)
; Variable "rows" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun rows () Int)
(assert (and (>= rows 0) (<= rows 10)))
; Variable "cols" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun cols () Int)
(assert (and (>= cols 0) (<= cols 10)))
; Variable "rCenter" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun rCenter () Int)
(assert (and (>= rCenter -2147483648) (<= rCenter 2147483647)))
; Variable "cCenter" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun cCenter () Int)
(assert (and (>= cCenter -2147483648) (<= cCenter 2147483647)))


(assert (< 0 rows) )
(assert (not  (< 0 cols) ) )
(assert (< 1 rows) )
(assert (< 2 rows) )
(assert (< 3 rows) )
(assert (< 4 rows) )
(assert (< 5 rows) )
(assert (< 6 rows) )
(assert (< 7 rows) )
(assert (< 8 rows) )
(assert (not  (< 9 rows) ) )
(check-sat)
(get-model)