import sys
from PyQt5.uic import loadUi
from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QDialog, QApplication, QWidget, QStackedWidget

class WelcomeScreen(QDialog):
    def __init__(self):
        super(WelcomeScreen,self).__init__() 
        loadUi("untitled.ui", self)
        self.but1.clicked.connect(self.gotologin)
    
    def gotologin(self):
        login = LoginScreen()
        widget.addWidget(login)
        widget.setCurrentIndex(widget.currentIndex()+1)

class LoginScreen(QDialog):
    def __init__(self):
        super(LoginScreen, self).__init__()
        loadUi("login.ui",self)
        


app = QApplication(sys.argv)
welcome = WelcomeScreen()
widget = QStackedWidget()
widget.addWidget(welcome)
widget.setFixedHeight(800)
widget.setFixedWidth(1100)
widget.show()
try:
    app.exec()
except:
    print("Exiting...")