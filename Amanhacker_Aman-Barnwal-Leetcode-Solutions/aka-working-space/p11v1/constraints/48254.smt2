(set-option :timeout 5000)
; Variable "root" , real type = "TreeNode*", class com.dse.parser.object.InternalVariableNode
(declare-fun root () Int)
(assert (>= root 0)); Variable "node" , real type = "TreeNode*", class com.dse.parser.object.InternalVariableNode
(declare-fun node () Int)
(assert (>= node 0)); Variable "mini" , real type = "int&", class com.dse.parser.object.InternalVariableNode
(declare-fun mini () Int)
(assert (and (>= mini -2147483648) (<= mini 2147483647)))
; Variable "maxi" , real type = "int&", class com.dse.parser.object.InternalVariableNode
(declare-fun maxi () Int)
(assert (and (>= maxi -2147483648) (<= maxi 2147483647)))
; Variable "akaut_stub_findMinMax_ref_call1_root" , real type = "TreeNode*", class com.dse.parser.object.InternalVariableNode
(declare-fun akaut_stub_findMinMax_ref_call1_root () Int)
(assert (>= akaut_stub_findMinMax_ref_call1_root 0)); Variable "akaut_stub_findMinMax_ref_call1_node" , real type = "TreeNode*", class com.dse.parser.object.InternalVariableNode
(declare-fun akaut_stub_findMinMax_ref_call1_node () Int)
(assert (>= akaut_stub_findMinMax_ref_call1_node 0)); Variable "akaut_stub_findMinMax_ref_call1_mini" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun akaut_stub_findMinMax_ref_call1_mini () Int)
(assert (and (>= akaut_stub_findMinMax_ref_call1_mini -2147483648) (<= akaut_stub_findMinMax_ref_call1_mini 2147483647)))
; Variable "akaut_stub_findMinMax_ref_call1_maxi" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun akaut_stub_findMinMax_ref_call1_maxi () Int)
(assert (and (>= akaut_stub_findMinMax_ref_call1_maxi -2147483648) (<= akaut_stub_findMinMax_ref_call1_maxi 2147483647)))
; Variable "akaut_stub_findMinMax_ref_call1_root" , real type = "TreeNode*", class com.dse.parser.object.InternalVariableNode
(declare-fun akaut_stub_findMinMax_ref_call1_root () Int)
(assert (>= akaut_stub_findMinMax_ref_call1_root 0)); Variable "akaut_stub_findMinMax_ref_call1_node" , real type = "TreeNode*", class com.dse.parser.object.InternalVariableNode
(declare-fun akaut_stub_findMinMax_ref_call1_node () Int)
(assert (>= akaut_stub_findMinMax_ref_call1_node 0)); Variable "akaut_stub_findMinMax_ref_call1_mini" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun akaut_stub_findMinMax_ref_call1_mini () Int)
(assert (and (>= akaut_stub_findMinMax_ref_call1_mini -2147483648) (<= akaut_stub_findMinMax_ref_call1_mini 2147483647)))
; Variable "akaut_stub_findMinMax_ref_call1_maxi" , real type = "int", class com.dse.parser.object.InternalVariableNode
(declare-fun akaut_stub_findMinMax_ref_call1_maxi () Int)
(assert (and (>= akaut_stub_findMinMax_ref_call1_maxi -2147483648) (<= akaut_stub_findMinMax_ref_call1_maxi 2147483647)))


(assert (not  (= node  0 ) ) )
(assert (not  (not (= node root)) ) )
(check-sat)
(get-model)