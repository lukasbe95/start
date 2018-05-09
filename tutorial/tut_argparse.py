#!/usr/bin/env python3
import argparse

#exapmle to passing arguments to script, option, mutual options
def factorial(n):
    result = 1
    for i in range(1,n):
        result *= i
    return result
def fib(n):
    a,b = 0,1
    for i in range(n):
        a,b = b, a+b
    return a
def Main():
    parser = argparse.ArgumentParser()
    #creating a group of mutual args
    group = parser.add_mutually_exclusive_group()
    group.add_argument("-f","--fibonacci",action="store_true")
    group.add_argument("-x","--factorial",action="store_true")
    #add arg
    parser.add_argument("num",help="Give the number of fib or factorial",type=int)
    #add options
    parser.add_argument("-o","--output",help="Output to file",action="store_true")
    args = parser.parse_args()
    result = 0
    if args.fibonacci:
        result = fib(args.num)
    elif args.factorial:
        result = factorial(args.num)
    else:
        print(":(")
    print(result)
    if args.output:
        f = open("outfile","a")
        f.write(str(result)+"\n")
if __name__ == '__main__':
    Main()
