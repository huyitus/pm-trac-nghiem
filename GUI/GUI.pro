QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

RC_ICONS = icon/icon.ico

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../BLL/BLLManager/BLLManager.cpp \
    ../BLL/CountDown/CountDown.cpp \
    ../BLL/EditingQuiz/EditingQuiz.cpp \
    ../BLL/QuizRecordsWrapper/QuizRecordsWrapper.cpp \
    ../BLL/Random/Random.cpp \
    ../BLL/RunningQuestion/RunningQuestion.cpp \
    ../BLL/RunningQuiz/RunningQuiz.cpp \
    ../DAL/DALManager.cpp \
    ../DAL/Formatter.cpp \
    ../DAL/PathResolver.cpp \
    ../DAL/Question.cpp \
    ../DAL/Quiz.cpp \
    ../DAL/QuizHeader.cpp \
    ../DAL/QuizRecord.cpp \
    ../DAL/TimeStamp.cpp \
    ../main.cpp \
    formchinhsua.cpp \
    formlb.cpp \
    formtaocauhoi.cpp \
    mainwindow.cpp

HEADERS += \
    ../BLL/BLLManager/BLLManager.h \
    ../BLL/CountDown/CountDown.h \
    ../BLL/CountDown/ICountDownValue.h \
    ../BLL/EditingQuiz/EditingQuiz.h \
    ../BLL/QuizRecordsWrapper/QuizRecordsWrapper.h \
    ../BLL/Random/Random.h \
    ../BLL/RunningQuestion/RunningQuestion.h \
    ../BLL/RunningQuiz/RunningQuiz.h \
    ../BLL/ServiceInterface/IEditingQuizSI.h \
    ../BLL/ServiceInterface/IExamQuestionSI.h \
    ../BLL/ServiceInterface/IExamQuizSI.h \
    ../BLL/ServiceInterface/IQuizHeaderSI.h \
    ../DAL/DALManager.h \
    ../DAL/Formatter.h \
    ../DAL/IQuestion.h \
    ../DAL/PathResolver.h \
    ../DAL/Question.h \
    ../DAL/Quiz.h \
    ../DAL/QuizHeader.h \
    ../DAL/QuizRecord.h \
    ../DAL/TimeStamp.h \
    formchinhsua.h \
    formlb.h \
    formtaocauhoi.h \
    mainwindow.h

FORMS += \
    formchinhsua.ui \
    formlb.ui \
    formtaocauhoi.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
