foo() # wont work

def foo():
    print('hello, world')

spam() # wont work

def spam():
    foo() # works


spam()  # works