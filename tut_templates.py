#!/usr/bin/env python3
from string import Template
#program for just a simple substitiution 
def Main():
    heros = []
    heros.append(dict(name="Wojtas",s=66,hp=100))
    heros.append(dict(name="Wojtascythe",s=56,hp=440))
    heros.append(dict(name="Adam",s=32,hp=1000))

    t = Template("$s x $hp = $name")
    total = 0
    for x in heros:
        print(t.substitute(x))
        total += x['s']
    print("Total: "+str(total))
if __name__ == '__main__':
    Main()
