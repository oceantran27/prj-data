from manim_imports_ext import *

class KmpPrefixScene(AlgoScene):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.data = "cbccbcbccb"

    def compute_prefix_function(self):
        t = self.data
        n = len(t)
        prefix = np.zeros(n, dtype=int)
        prefix[0] = -1

        vector_string = AlgoVector(self, list(t))
        self.add(vector_string)
        text = AlgoText("pattern", color=BLUE).next_to(vector_string, direction=LEFT)
        self.add(text)

        vector_index = AlgoVector(self, range(0, n))
        self.add(vector_index)
        vector_index.next_to(vector_string, direction=UP)
        text = AlgoText("index", color=BLUE).next_to(vector_index, direction=LEFT)
        self.add(text)

        vector_prefix = AlgoVector(self, prefix)
        self.add(vector_prefix)
        vector_prefix.next_to(vector_string, direction=DOWN)
        text = AlgoText("next", color=BLUE).next_to(vector_prefix, direction=LEFT)
        self.add(text)

        cursor_j = vector_index.add_arrow(0, color=RED, text="j")
        cursor_k = vector_index.add_arrow(-1, color=BLUE, text="k")

        j = 0
        k = -1

        while j<len(t)-1:
            if k==-1 or t[j] == t[k]:
                if t[j] == t[k] and k != -1:
                    self.play(ApplyMethod(vector_string.get_node(j).set_color, BLUE), 
                        ApplyMethod(vector_string.get_node(k).set_color, BLUE))
                    self.show_message("比较后相等，前进一步")
                    self.play(ApplyMethod(vector_string.get_node(j).set_color, ALGO_NODE_COLOR), 
                        ApplyMethod(vector_string.get_node(k).set_color, ALGO_NODE_COLOR))
                if k == -1:
                    self.show_message("k=-1，前进一步")
                j+=1
                k+=1
                prefix[j] = k
                
                vector_index.move_arrow(cursor_j, j, run_time=0.5)
                vector_index.move_arrow(cursor_k, k, run_time=0.5)

                vector_prefix.set(j, str(k))
                if k>0:
                    self.play(vector_prefix.submobjects[j].set_color, BLUE)
                else:
                    self.play(vector_prefix.submobjects[j].set_color, RED)
            else:
                self.play(ApplyMethod(vector_string.get_node(j).set_color, RED), 
                        ApplyMethod(vector_string.get_node(k).set_color, RED))
                self.show_message("比较后不相等，回溯一步")
                self.play(ApplyMethod(vector_string.get_node(j).set_color, ALGO_NODE_COLOR), 
                    ApplyMethod(vector_string.get_node(k).set_color, ALGO_NODE_COLOR))

                node = vector_prefix.get_node(k)
                old_k = k
                k = prefix[k]
                if k != -1:
                    arrow = Arrow(vector_prefix.get_node(old_k).get_center(),
                        vector_prefix.get_node(k).get_center(), path_arc=-np.pi*0.5, thickness=0.03, color=GREEN)
                else:
                    arrow = Arrow(vector_prefix.get_node(old_k).get_center(),
                        vector_prefix.get_node(old_k).get_center()+LEFT, path_arc=-np.pi*0.5, thickness=0.03, color=GREEN)
                arrow.set_color(BLUE)
                self.play(ShowCreation(arrow), run_time=0.5)
                self.wait()

                vector_index.move_arrow(cursor_k, k, run_time=0.5)

                self.play(FadeOut(arrow))

        self.show_message("next表计算完成")
        self.prefix = prefix
        print(prefix)

    def construct(self):
        self.start_logo(subtitle="KMP算法")
        self.init_message("KMP算法 - 前缀表")
        self.compute_prefix_function()
        self.wait(2)

class KmpScene(AlgoScene):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.text = "acbccbccbcbccbcab"
        self.pattern = "cbccbcbccb"

    def compute_prefix_function(self, p):
        n = len(p)
        next = np.zeros(n, dtype=int)
        k = -1
        j = 0
        next[0] = -1
        while j < n-1:
            if k == -1 or p[j] == p[k]:
                k+=1
                j+=1
                next[j] = k
            else:
                k = next[k]
        return next

    def kmp_matcher(self, prefix):
        t = self.text
        p = self.pattern
        n = len(p)
        j = 0
        k = 0

        groups = []

        vector_index = AlgoVector(self, range(0, len(t))).arrange(buff=0.15).scale(0.7).set_color(GREY)
        groups.append(VGroup(*[vector_index]))

        vector_text = AlgoVector(self, list(t)).arrange(buff=0.15).to_edge(edge=UP).scale(0.7).set_color(GREY)
        groups.append(VGroup(*[vector_text]))

        vector_pattern = AlgoVector(self, list(p)).arrange(buff=0.15).scale(0.7).set_color(GREY)
        groups.append(VGroup(*[vector_pattern]))

        vector_prefix = AlgoVector(self, prefix).arrange(buff=0.15).scale(0.7).set_color(TEAL_E)
        groups.append(VGroup(*[vector_prefix]))
        
        v = VGroup(*groups)
        v.arrange(direction=DOWN, buff=0.7, aligned_edge=LEFT)
        v.shift(RIGHT*0.5)

        v.add(AlgoText("text", color=WHITE).scale(0.7).next_to(vector_text, direction=LEFT), 
            AlgoText("pattern", color=WHITE).scale(0.7).next_to(vector_pattern, direction=LEFT),
            AlgoText("index", color=WHITE).scale(0.7).next_to(vector_index, direction=LEFT), 
            AlgoText("prefix", color=WHITE).scale(0.7).next_to(vector_prefix, direction=LEFT))
        
        self.add(v)

        cursor_j = vector_text.add_arrow(0, color=RED, text="j")
        cursor_k = vector_pattern.add_arrow(0, color=BLUE, text="k")

        while j < len(t) and k < len(p):
            if k == -1 or t[j] == p[k]:
                k += 1
                j += 1
                if j < len(t) and k < len(p):
                    vector_text.move_arrow(cursor_j, j, run_time=0.5)
                    vector_pattern.move_arrow(cursor_k, k, run_time=0.5)
                    g = [ApplyMethod(vector_text.submobjects[j].set_color, GREEN), 
                        ApplyMethod(vector_pattern.submobjects[k].set_color, BLUE)]
                    self.play(*g)
            else:
                g = [ApplyMethod(vector_text.submobjects[j].set_color, RED), 
                    ApplyMethod(vector_pattern.submobjects[k].set_color, RED)]
                self.play(*g)

                old_k = k
                k = prefix[k]
                g = []
                for i in range(k+1, old_k+1):
                    g.append(ApplyMethod(vector_pattern.submobjects[i].set_color, GREY))
                self.play(*g)

                if k != -1:
                    arrow = Arrow(vector_prefix.get_node(old_k).get_center()-LEFT*0.2,
                        vector_prefix.get_node(k).get_center()-RIGHT*0.2, path_arc=-np.pi*0.6, thickness=0.02, color=WHITE)
                else:
                    arrow = Arrow(vector_prefix.get_node(old_k).get_center()-LEFT*0.2,
                        vector_prefix.get_node(old_k).get_center()+LEFT*0.7, path_arc=-np.pi*0.6, thickness=0.02, color=WHITE)
                arrow.set_color(BLUE)
                self.play(ShowCreation(arrow), run_time=0.5)

                vector_pattern.move_arrow(cursor_k, k)

        if k == len(p):
            return j - len(p)

        return -1

    def construct(self):
        self.start_logo(animate=False)
        self.init_message("KMP算法")
        prefix = self.compute_prefix_function(self.pattern)
        self.kmp_matcher(prefix)
        self.wait(2)


