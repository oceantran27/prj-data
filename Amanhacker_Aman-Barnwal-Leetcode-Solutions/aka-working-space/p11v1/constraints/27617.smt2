(set-option :timeout 5000)
; Variable "root" , real type = "TreeNode*", class com.dse.parser.object.InternalVariableNode
(declare-fun root () Int)
(assert (>= root 0)); Variable "q" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun q () Int)
(assert (and (>= q -128) (<= q 127)))
; Variable "q.empty" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun q___attr___empty () Int)
(assert (and (>= q___attr___empty -128) (<= q___attr___empty 127)))
; Variable "q.size" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun q___attr___size () Int)
(assert (and (>= q___attr___size -128) (<= q___attr___size 127)))


(assert (not  (= root  0 ) ) )
(assert (> q___attr___empty 0) )
(assert (> q 0) )
(assert (=  ()  0) )
(assert (> q___attr___size 0) )
(check-sat)
(get-model)