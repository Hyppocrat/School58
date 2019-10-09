
help(open) #справка по работе функции open()

f = open("files/Толстой.txt", mode="rb") #открыть файл Толстой.txt, лежащий в папке files, лежащей в одной папке с питоновским файлом
f.read(20)                               #считать первые 20 байт

data = open("files/Толстой.txt", mode="rb").read() #считать файл
print(type(data))                                  #узнать тип перменной data (он будет списком байтов)
print(data[19])                                    #вывести значение 20-го байта файла

print("ab\n12")
print(r"ab\n12")
#сравните работу программы с r и без него

f = open("files/Толстой.txt", mode="rb")
f.read(20)
print(f.name)
print(f.readable())
print(f.tell())
print(f.writable())
print(f.seekable())
print(f.mode)

f = open("files/Толстой.txt", encoding="utf-8")
print(f.read(100))
print(f.tell())
print(f.seek(1245))
print(f.read(100))
print(f.tell())

print(f.seek(1246))
print(f.read(1))

f = open("files/Толстой.txt", encoding="utf8")
data = f.read()
print('Type: %s, length: %d' % (type(data), len(data)))
f.close()


f = open("files/Толстой.txt", encoding="utf8")
for i in range(7):
    print(f.readline(), end="")
f.close()

#считать все строки файла
f = open("files/Толстой.txt", encoding="utf8")
lines = f.readlines()
print('Type: %s, length: %d' % (type(lines), len(lines)))
print(lines[10])
f.close()

f = open("files/Толстой.txt", encoding="utf8")
for number, line in enumerate(f):
    print(line)
    if number > 8:
        break
f.close()


#записать в файл example.txt значения синусов для чисел 0, 1, ..., 9 с двумя знаками после запятой
from math import sin

f = open("files/example2.txt", 'w')
for i in range(10):
    print("%0.2f" % sin(i), file=f)
f.close()
