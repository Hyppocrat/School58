import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton


class Window(QWidget):
    def __init__(self):
        super().__init__()

        self.init_ui()

    def init_ui(self):
        self.setGeometry(100, 100, 260, 320)
        self.setWindowTitle('My First PyQt Program')

        for y in range(20, 320, 50):
            btn = QPushButton('Push me!', self)
            btn.move(30, y)
            btn.resize(200, 30)
            btn.clicked.connect(self.push)

    def push(self):
        btn = self.sender()
        if btn.text() == 'Push me!':
            count = 0
        else:
            count = int(btn.text().split()[3])
        count += 1
        btn.setText(f'You hit me {count} times!')


if __name__ == '__main__':
    app = QApplication(sys.argv)
    wnd = Window()
    wnd.show()
    sys.exit(app.exec())

    
    =========================================================
    
import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QVBoxLayout


class Window(QWidget):
    def __init__(self):
        super().__init__()

        self.init_ui()

    def init_ui(self):
        self.setGeometry(100, 100, 260, 320)
        self.setWindowTitle('My First PyQt Program')

        vbox = QVBoxLayout()
        vbox.addStretch(1)
        for _ in range(20, 320, 50):
            btn = QPushButton('Push me!')
            vbox.addWidget(btn)
            vbox.addStretch(1)
            btn.resize(200, 30)
            btn.clicked.connect(self.push)

        self.setLayout(vbox)

    def push(self):
        btn = self.sender()
        if btn.text() == 'Push me!':
            count = 0
        else:
            count = int(btn.text().split()[3])
        count += 1
        btn.setText(f'You hit me {count} times!')


if __name__ == '__main__':
    app = QApplication(sys.argv)
    wnd = Window()
    wnd.show()
    sys.exit(app.exec())

    
    ==========================================================
    
import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QLabel
from PyQt5.QtWidgets import QLCDNumber
 

class Example(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()
        
    def initUI(self):
        self.setGeometry(300, 300, 300, 300)
        self.setWindowTitle('Пятая программа')

        self.btn = QPushButton('Кнопка', self)
        self.btn.resize(self.btn.sizeHint())
        self.btn.move(100, 150)
        self.btn.clicked.connect(self.hello)

        self.label = QLabel(self)
        self.label.setText("Количество нажатий на кнопку")
        self.label.move(80, 30)

        #self.LCD_count = QLCDNumber(self)
        #self.LCD_count.move(110, 80)
        self.label1 = QLabel(self)
        self.label1.setText("    0")
        self.label1.move(110, 80)
        
        self.count = 0

    def hello(self):
        self.count += 1
        self.label1.setText(str(self.count))
        
        
if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = Example()
    ex.show()
    sys.exit(app.exec())

    
    ==============================
    
    
    import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QLabel
from PyQt5.QtWidgets import QLCDNumber, QLineEdit
 

class Example(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()
        
    def initUI(self):
        self.setGeometry(300, 300, 300, 300)
        self.setWindowTitle('Шестая программа')

        self.btn = QPushButton('Кнопка', self)
        self.btn.resize(self.btn.sizeHint())
        self.btn.move(100, 150)
        self.btn.clicked.connect(self.hello)

        self.label = QLabel(self)
        self.label.setText("Привет, неопознанный лев")
        self.label.move(40, 30)

        self.name_label = QLabel(self)
        self.name_label.setText("Введите имя: ")
        self.name_label.move(40, 90)

        self.name_input = QLineEdit(self)
        self.name_input.move(130, 90)

    def hello(self):
        name = self.name_input.text()
        self.label.setText("Привет, {}".format(name))
        
        
if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = Example()
    ex.show()
    sys.exit(app.exec())

    
    ==========================================
    
    
import sys

from PyQt5.QtWidgets import QApplication, QWidget, QPushButton
from PyQt5.QtWidgets import QMainWindow, QLabel


class FirstForm(QMainWindow):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.setGeometry(300, 300, 300, 300)
        self.setWindowTitle('Главная форма')

        self.btn = QPushButton('Другая форма', self)
        self.btn.resize(100, 100)
        self.btn.move(100, 100)

        self.btn.clicked.connect(self.open_second_form)

    def open_second_form(self):
        self.second_form = SecondForm(self, "Данные для второй формы")
        self.second_form.show()


class SecondForm(QWidget):
    def __init__(self, *args):
        super().__init__()
        self.initUI(args)

    def initUI(self, args):
        self.setGeometry(300, 300, 300, 300)
        self.setWindowTitle('Вторая форма')
        self.lbl = QLabel(args[-1], self)
        self.lbl.adjustSize()


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = FirstForm()
    ex.show()
    sys.exit(app.exec())
