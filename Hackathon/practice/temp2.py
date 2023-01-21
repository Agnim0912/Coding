
class MyClass:
    def f():
        global x
        x = 5
        print(x)

class myclaa:
    def g():
        print(x)
MyClass.f()
myclaa.g()
print(x)