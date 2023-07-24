#include <QApplication>
#include <QWidget>
#include <QSplitter>
#include <QTextEdit>
#include <QWebEngineView>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("HTML Viewer");
    window.resize(800, 600);

    // Create a splitter to divide the window into two halves
    QSplitter *splitter = new QSplitter(&window);
    window.setLayout(new QVBoxLayout);
    window.layout()->addWidget(splitter);

    // Create the left side widget (text editor to edit HTML document)
    QTextEdit *textEdit = new QTextEdit;
    splitter->addWidget(textEdit);

    // Create the right side widget (WebView to display the result)
    QWebEngineView *webView = new QWebEngineView;
    splitter->addWidget(webView);

    QObject::connect(textEdit, &QTextEdit::textChanged, [=]() {
        // Load the HTML content from the text editor into the WebView
        QString htmlContent = textEdit->toPlainText();
        webView->setHtml(htmlContent);
    });

    window.show();
    return app.exec();
}
