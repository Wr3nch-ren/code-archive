money = int(input("Total Money: "))
cost = int(input("Total Cost: "))
changes = money - cost
c1000 = changes // 1000
print(f"1000 | {c1000}")
changes = changes - c1000*(1000)
c500 = changes // 500
print(f" 500 | {c500}")
changes = changes - c500*(500)
c100 = changes // 100
print(f" 100 | {c100}")
changes = changes - c100*(100)
c50 = changes // 50
print(f"  50 | {c50}")
changes = changes - c50*(50)
c20 = changes // 20
print(f"  20 | {c20}")
changes = changes - c20*(20)
c10 = changes // 10
print(f"  10 | {c10}")
changes = changes - c10*(10)
print(f"   1 | {changes}")