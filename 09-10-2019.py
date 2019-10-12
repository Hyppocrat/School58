
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



from PyQt5.QtWidgets import QApplication, QWidget
from PyQt5.QtWidgets import QPushButton, QLineEdit, QLabel, QFileDialog
from PyQt5.QtGui import QPixmap
import sys

SCREEN_SIZE = [400, 400]

class Example(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.setGeometry(400, 400, *SCREEN_SIZE)
        self.setWindowTitle('Отображение картинки')

        ## Изображение
        fname = QFileDialog.getOpenFileName(self, 'Выбрать картинку', '', "Картинка(*.png)")[0] 
        self.pixmap = QPixmap(fname)
        self.image = QLabel(self)
        self.image.move(80, 60)
        self.image.resize(250, 250)
        self.image.setPixmap(self.pixmap)


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = Example()
    ex.show()
    sys.exit(app.exec())

    
import sys
from PyQt5.QtWidgets import QWidget, QApplication
from PyQt5.QtGui import QPainter, QColor


class Example(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.setGeometry(300, 300, 600, 600)
        self.setWindowTitle('Рисование')
        self.show()

    def paintEvent(self, event):
        qp = QPainter()
        qp.begin(self)
        self.drawFlag(qp)
        qp.end()

    def drawFlag(self,qp):
        qp.setBrush(QColor(255, 255, 255))
        qp.drawRect(30, 30, 480, 120)
        qp.setBrush(QColor(0, 0, 255))
        qp.drawRect(30, 150, 480, 120)
        qp.setBrush(QColor(255, 0, 0))
        qp.drawRect(30, 270, 480, 120)


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())    
