from decimal import Decimal, getcontext
getcontext().prec = 1500

j = 0.00
k = 0.00
for i in range(0, 1500):
    j=Decimal((1/(16**i))*((4/(8*i+1)) - (2/(8*i+4)) - (1/(8*i+5)) - (1/(8*i+6))))
    k=Decimal(k)+j
print(k)