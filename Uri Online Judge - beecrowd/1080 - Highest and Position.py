# -*- coding: utf-8 -*-

"""
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
"""

maior = 0
posicao = 0
for i in range(1, 101):
    n = int(input())
    if n >= maior:
        maior = n
        posicao = i
print(maior)
print(posicao)
