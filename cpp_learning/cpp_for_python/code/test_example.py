import sys, os
sys.path.append(os.path.join(os.path.dirname(__file__), "build"))
import example

# help(example) # 查看帮助信息
print(example.add(3, 4))       # 输出 7
print(example.greet("Liang"))  # 输出 Hello, Liang!

pet = example.Pet("Milo", 2)
print(pet.info())              # 输出 Milo is 2 years old.
pet.set_age(3)
print(pet.info())              # 输出 Milo is 3 years old.
