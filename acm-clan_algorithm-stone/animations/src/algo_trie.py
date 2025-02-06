from manimlib import *
import networkx as nx

from .algo_vgroup import *
from .algo_node import *
from .algo_tree import *
import numpy

class AlgoTrieTreeNode(AlgoTreeNode):
    def __init__(self, tree):
        super().__init__(tree)
        self.end = False
        self.tree = tree
        self.color = TEAL_D
        self.c = numpy.empty(26, dtype=object)

class AlgoTrieTree(AlgoTree):
    def __init__(self, scene, data=[], **kwargs):
        self.scene = scene
        super().__init__(**kwargs)
        # empty
        self.root = AlgoTrieTreeNode(self)
        self.root.setText("*")
        self.ctx.wait_time = 0.5

    def add_word(self, word):
        self.scene.show_message("插入单词%s"%(word))
        p = self.root
        nodes = []
        for ch in word:
            index = ord(ch) - ord('a')
            if p.c[index] == None:
                p.c[index] = AlgoTrieTreeNode(self)
                p.c[index].setText(ch)
                self.update_tree()
            p = p.c[index]
            node = self.get_node(p.id)
            old_color = node.get_color()
            if node.get_color != RED:
                self.scene.play(node.set_color, RED, time=0.5)
            nodes.append((node, old_color))
        p.end = True
        node = self.get_node(p.id)
        a = []
        for n in nodes:
            a.append(ApplyMethod(n[0].set_color, n[1]))
        self.scene.play(*a, time=0.5)
        node.set_sub("$").set_color(RED).scale(0.5).shift(DR/8)

    # overwrite
    def calc_tree_data(self):
        q = []
        q.append(self.root)
        nodes = []
        edges = []

        while len(q)>0:
            p = q.pop(0)
            self.check_node(p)
            nodes.append(p)

            for i in range(0, 26):
                child = p.c[i]
                if child:
                    self.check_node(child)
                    self.check_edge(p, child)
                    edges.append((p.id, child.id))
                    q.append(child)

        return nodes, edges

    def query(self, word):
        self.scene.show_message("查询单词%s"%(word))
        p = self.root

        nodes = []

        for ch in word:
            index = ord(ch) - ord('a')
            if not p.c[index]:
                return False
            p = p.c[index]

            node = self.get_node(p.id)
            old_color = node.get_color()
            if node.get_color != RED:
                self.scene.play(node.set_color, RED, time=0.5)
            nodes.append((node, old_color))

        a = []
        for n in nodes:
            a.append(ApplyMethod(n[0].set_color, n[1]))
        self.scene.play(*a, time=0.5)
        if p.end:
            self.scene.show_message("结尾符号包含$，查询成功（%s）"%(word))
        else:
            self.scene.show_message("结尾符号不包含$，查询失败（%s）"%(word))
        return p.end
            