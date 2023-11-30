# -*- coding: utf-8 -*-

"""
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
"""

n = int(input())
alcool = 0
gasolina = 0
diesel = 0
while n != 4:
    if n == 1:
        alcool = alcool + 1
    elif n == 2:
        gasolina = gasolina + 1
    elif n == 3:
        diesel = diesel + 1
    elif n == 4:
        break
    n = int(input())

print("MUITO OBRIGADO")
print("Alcool:", alcool)
print("Gasolina:", gasolina)
print("Diesel:", diesel)
