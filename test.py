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
