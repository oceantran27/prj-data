(set-option :timeout 5000)
; Variable "root" , real type = "TreeNode*", class com.dse.parser.object.InternalVariableNode
(declare-fun root () Int)
(assert (>= root 0))

(assert (= root 0) )
(check-sat)
(get-model)