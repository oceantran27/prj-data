(set-option :timeout 5000)
; Variable "nums" , real type = "vector<int>&", class com.dse.parser.object.InternalVariableNode
; do not support this type
; Variable "nums.size" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun nums___attr___size () Int)
(assert (and (>= nums___attr___size -128) (<= nums___attr___size 127)))
; Variable "nums[0]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun nums____arrbegin____0____arrend____ () Int)
(assert (and (>= nums____arrbegin____0____arrend____ -2147483648) (<= nums____arrbegin____0____arrend____ 2147483647)))
; Variable "nums[1]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun nums____arrbegin____1____arrend____ () Int)
(assert (and (>= nums____arrbegin____1____arrend____ -2147483648) (<= nums____arrbegin____1____arrend____ 2147483647)))
; Variable "nums[2]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun nums____arrbegin____2____arrend____ () Int)
(assert (and (>= nums____arrbegin____2____arrend____ -2147483648) (<= nums____arrbegin____2____arrend____ 2147483647)))
; Variable "nums[3]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun nums____arrbegin____3____arrend____ () Int)
(assert (and (>= nums____arrbegin____3____arrend____ -2147483648) (<= nums____arrbegin____3____arrend____ 2147483647)))
; Variable "nums[4]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun nums____arrbegin____4____arrend____ () Int)
(assert (and (>= nums____arrbegin____4____arrend____ -2147483648) (<= nums____arrbegin____4____arrend____ 2147483647)))
; Variable "nums[5]" , real type = "int", class com.dse.parser.object.VariableNode
(declare-fun nums____arrbegin____5____arrend____ () Int)
(assert (and (>= nums____arrbegin____5____arrend____ -2147483648) (<= nums____arrbegin____5____arrend____ 2147483647)))
; Variable "temp" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun temp () Int)
(assert (and (>= temp -128) (<= temp 127)))
; Variable "temp[2]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun temp____arrbegin____2____arrend____ () Int)
(assert (and (>= temp____arrbegin____2____arrend____ -128) (<= temp____arrbegin____2____arrend____ 127)))
; Variable "temp[3]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun temp____arrbegin____3____arrend____ () Int)
(assert (and (>= temp____arrbegin____3____arrend____ -128) (<= temp____arrbegin____3____arrend____ 127)))
; Variable "temp[4]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun temp____arrbegin____4____arrend____ () Int)
(assert (and (>= temp____arrbegin____4____arrend____ -128) (<= temp____arrbegin____4____arrend____ 127)))
; Variable "temp[5]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun temp____arrbegin____5____arrend____ () Int)
(assert (and (>= temp____arrbegin____5____arrend____ -128) (<= temp____arrbegin____5____arrend____ 127)))
; Variable "temp[6]" , real type = "char", class com.dse.parser.object.VariableNode
(declare-fun temp____arrbegin____6____arrend____ () Int)
(assert (and (>= temp____arrbegin____6____arrend____ -128) (<= temp____arrbegin____6____arrend____ 127)))


(assert (> nums___attr___size 0) )
(assert (> nums 0) )
(assert (not  (=  ()  0) ) )
(assert (> nums 0) )
(assert (> temp 0) )
(assert (> temp 2) )
(assert (<= 1  (-  ()  2) ) )
(assert (not  (> nums____arrbegin____0____arrend____  (+ nums____arrbegin____0____arrend____ 0) ) ) )
(assert (> temp  (+ 1 1) ) )
(assert (> nums 1) )
(assert (not  (> nums____arrbegin____1____arrend____  (+ nums____arrbegin____0____arrend____ 0) ) ) )
(assert (not  (> nums____arrbegin____1____arrend____ nums____arrbegin____0____arrend____) ) )
(assert (<= 2  (-  ()  2) ) )
(assert (> temp  (+ 2 1) ) )
(assert (> nums 2) )
(assert (not  (> nums____arrbegin____2____arrend____  (+ nums____arrbegin____0____arrend____ 0) ) ) )
(assert (not  (> nums____arrbegin____2____arrend____ nums____arrbegin____1____arrend____) ) )
(assert (<= 3  (-  ()  2) ) )
(assert (> temp 3) )
(assert (> temp  (+ 3 1) ) )
(assert (> nums 3) )
(assert (not  (> nums____arrbegin____3____arrend____  (+ nums____arrbegin____0____arrend____ 0) ) ) )
(assert (not  (> nums____arrbegin____3____arrend____ nums____arrbegin____2____arrend____) ) )
(assert (<= 4  (-  ()  2) ) )
(assert (> temp 4) )
(assert (> temp  (+ 4 1) ) )
(assert (> nums 4) )
(assert (not  (> nums____arrbegin____4____arrend____  (+ nums____arrbegin____0____arrend____ 0) ) ) )
(assert (not  (> nums____arrbegin____4____arrend____ nums____arrbegin____3____arrend____) ) )
(assert (<= 5  (-  ()  2) ) )
(assert (> temp 5) )
(assert (> temp  (+ 5 1) ) )
(assert (> nums 5) )
(assert (not  (> nums____arrbegin____5____arrend____  (+ nums____arrbegin____0____arrend____ 0) ) ) )
(assert (> nums____arrbegin____5____arrend____ nums____arrbegin____4____arrend____) )
(check-sat)
(get-model)