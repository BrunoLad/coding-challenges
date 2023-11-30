# -*- coding: utf-8 -*-

"""
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
"""

n = int(input())
contd = 0
contf = 0
for i in range(1, n + 1):
    x = int(input())
    if x >= 10 and x <= 20:
        contd = contd + 1
    else:
        contf = contf + 1

print(contd, "in")
print(contf, "out")
