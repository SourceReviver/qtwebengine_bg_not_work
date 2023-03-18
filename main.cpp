#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWebEngineView>
#include <QColor>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    auto * view = new QWebEngineView();

    view->page()->setBackgroundColor(Qt::black);


    QUrl b1 = QUrl("qrc:///black.html");
    QUrl b2 = QUrl("qrc:////black2.html");

    auto * btn = new QPushButton("load another black page");

    view->load(b1);


    QObject::connect(btn,&QPushButton::clicked,[=](){
        if (view->url() == b1)
             view->load(b2);
        else
            view->load(b1);
    });


    auto *layout = new QVBoxLayout();
    layout->addWidget(view);
    layout->addWidget(btn);
    auto *container = new QWidget;
    container->setLayout(layout);
    container->show();

    return QApplication::exec();
}
