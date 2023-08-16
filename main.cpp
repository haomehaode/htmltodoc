#include <QTextDocument>
#include <QTextCursor>
#include <QTextImageFormat>
#include <QTextDocumentWriter>
#include <QBuffer>
#include <QTextTableCell>

//直接插入文件到doc
void test()
{
    QTextDocument document;
    QTextCursor cursor(&document);

    // 插入图片
    QImage image("D:/Desktop/3.png");
    document.addResource(QTextDocument::ImageResource, QUrl("1.png"), QVariant(image));

    cursor.insertImage("1.png");

    QTextImageFormat imageFormat;
    imageFormat.setName("1.png");
    imageFormat.setWidth(550);
    imageFormat.setHeight(900);
    cursor.insertImage(imageFormat);

    // 保存为.doc文件
    QTextDocumentWriter writer("D:/Desktop/document.doc");
    writer.setFormat("odf"); // 将格式设置为纯文本，以便保存为Word文档（.doc）
    writer.write(&document);

}



int main()
{
// 创建文档
    QTextDocument document;
    // 创建光标
    QTextCursor cursor(&document);

    {
        QImage image("D:/Desktop/1.png");
          // 缩小文件
        //image = image.scaled(QSize(692, 1113), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        qDebug() << image.size();
        // 将图像转换为Base64编码
        QByteArray imageData;
        QBuffer buffer(&imageData);
        buffer.open(QIODevice::WriteOnly);
        image.save(&buffer, "PNG");
        QString base64Image = QString::fromLatin1(imageData.toBase64().data());
        // 在文档中插入图像
        cursor.insertHtml("<img src='data:image/png;base64," + base64Image + "' width='550' height='900'>");
        // 在文档中插入换行
        cursor.insertBlock();
        // 在文档中插入题注
        cursor.insertText("图 1 ");
        cursor.insertHtml("<a id=\"anchor1\">This is 1 centered text</a>");
        // 设置段落格式为居中对齐
        QTextBlockFormat blockFormat;
        blockFormat.setAlignment(Qt::AlignCenter);
        cursor.mergeBlockFormat(blockFormat);
        // 设置文本格式
        QTextCharFormat charFormat;
        cursor.mergeCharFormat(charFormat);
        // 在文档中插入换行
        cursor.insertBlock();
    }

    {
        QImage image("D:/Desktop/2.png");
        image = image.scaled(QSize(692, 1113), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        qDebug() << image.size();
        // 将图像转换为Base64编码
        QByteArray imageData;
        QBuffer buffer(&imageData);
        buffer.open(QIODevice::WriteOnly);
        image.save(&buffer, "PNG");
        QString base64Image = QString::fromLatin1(imageData.toBase64().data());
        // 在文档中插入图像
        cursor.insertHtml("<img src='data:image/png;base64," + base64Image + "'>");
        // 在文档中插入换行
        cursor.insertBlock();
        // 在文档中插入题注
        cursor.insertText("图 2 ");
        cursor.insertHtml("<a id=\"anchor2\">This is 2 centered text</a>");
        // 设置段落格式为居中对齐
        QTextBlockFormat blockFormat;
        blockFormat.setAlignment(Qt::AlignCenter);
        cursor.mergeBlockFormat(blockFormat);
        // 设置文本格式
        QTextCharFormat charFormat;
        cursor.mergeCharFormat(charFormat);
        // 在文档中插入换行
        cursor.insertBlock();
    }

    {
        QImage image("D:/Desktop/3.png");
        image = image.scaled(QSize(692, 1113), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        qDebug() << image.size();
        // 将图像转换为Base64编码
        QByteArray imageData;
        QBuffer buffer(&imageData);
        buffer.open(QIODevice::WriteOnly);
        image.save(&buffer, "PNG");
        QString base64Image = QString::fromLatin1(imageData.toBase64().data());
        // 在文档中插入图像
        cursor.insertHtml("<img src='data:image/png;base64," + base64Image + "'>");
        // 在文档中插入换行
        cursor.insertBlock();
        // 在文档中插入题注
        cursor.insertText("图 3 ");
        cursor.insertHtml("<a id=\"anchor3\">This is 3 centered text</a>");
        // 设置段落格式为居中对齐
        QTextBlockFormat blockFormat;
        blockFormat.setAlignment(Qt::AlignCenter);
        cursor.mergeBlockFormat(blockFormat);
        // 设置文本格式
        QTextCharFormat charFormat;
        cursor.mergeCharFormat(charFormat);
        // 在文档中插入换行
        cursor.insertBlock();
    }

    {
        QImage image("D:/Desktop/4.png");
        image = image.scaled(QSize(692, 1113), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        qDebug() << image.size();
        // 将图像转换为Base64编码
        QByteArray imageData;
        QBuffer buffer(&imageData);
        buffer.open(QIODevice::WriteOnly);
        image.save(&buffer, "PNG");
        QString base64Image = QString::fromLatin1(imageData.toBase64().data());
        // 在文档中插入图像
        cursor.insertHtml("<img src='data:image/png;base64," + base64Image + "'>");
        // 在文档中插入换行
        cursor.insertBlock();
        // 在文档中插入题注
        cursor.insertText("图 4 ");
        cursor.insertHtml("<a id=\"anchor4\">This is 4 centered text</a>");
        // 设置段落格式为居中对齐
        QTextBlockFormat blockFormat;
        blockFormat.setAlignment(Qt::AlignCenter);
        cursor.mergeBlockFormat(blockFormat);
        // 设置文本格式
        QTextCharFormat charFormat;
        cursor.mergeCharFormat(charFormat);
        // 在文档中插入换行
        cursor.insertBlock();
    }

    {
        QImage image("D:/Desktop/5.png");
        image = image.scaled(QSize(692, 1113), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        qDebug() << image.size();
        // 将图像转换为Base64编码
        QByteArray imageData;
        QBuffer buffer(&imageData);
        buffer.open(QIODevice::WriteOnly);
        image.save(&buffer, "PNG");
        QString base64Image = QString::fromLatin1(imageData.toBase64().data());
        // 在文档中插入图像
        cursor.insertHtml("<img src='data:image/png;base64," + base64Image + "'>");
        // 在文档中插入换行
        cursor.insertBlock();
        // 在文档中插入题注
        cursor.insertText("图 5 ");
        cursor.insertHtml("<a id=\"anchor5\">This is 5 centered text</a>");
        // 设置段落格式为居中对齐
        QTextBlockFormat blockFormat;
        blockFormat.setAlignment(Qt::AlignCenter);
        cursor.mergeBlockFormat(blockFormat);
        // 设置文本格式
        QTextCharFormat charFormat;
        cursor.mergeCharFormat(charFormat);
        // 在文档中插入换行
        cursor.insertBlock();
    }

    {
        // 创建一个 QTextTable 对象，定义行数和列数
        int numRows = 6;
        int numColumns = 8;
        QTextTableFormat tableFormat;
        tableFormat.setWidth(QTextLength(QTextLength::PercentageLength, 100));
        //tableFormat.setAlignment(Qt::AlignHCenter);
        tableFormat.setBorderCollapse(true);
        QTextTable* table = cursor.insertTable(numRows, numColumns, tableFormat);


        table->cellAt(0, 0).firstCursorPosition().insertText("日期");
        table->cellAt(0, 1).firstCursorPosition().insertText("时间");
        table->cellAt(0, 2).firstCursorPosition().insertText("VIB60");
        table->cellAt(0, 3).firstCursorPosition().insertText("TFuel");
        table->cellAt(0, 4).firstCursorPosition().insertText("MB");
        table->cellAt(0, 5).firstCursorPosition().insertText("VtB");
        table->cellAt(0, 6).firstCursorPosition().insertText("VeB");
        table->cellAt(0, 7).firstCursorPosition().insertText("引用");


        // 为表格设置内容
        for (int row = 1; row < numRows; ++row) {
            //for (int col = 0; col < numColumns; ++col) {
            //	QTextTableCell cell = table->cellAt(row, col);
            //	QTextCursor cellCursor = cell.firstCursorPosition();
            //	cellCursor.insertText("Row " + QString::number(row) + ", Column " + QString::number(col));
            //}
            table->cellAt(row, 0).firstCursorPosition().insertText("20220717");
            table->cellAt(row, 1).firstCursorPosition().insertText("08:33:14.733");
            table->cellAt(row, 2).firstCursorPosition().insertText("-0.0");
            table->cellAt(row, 3).firstCursorPosition().insertText("center");
            table->cellAt(row, 4).firstCursorPosition().insertText("0.0");
            table->cellAt(row, 5).firstCursorPosition().insertText("0.0");
            table->cellAt(row, 6).firstCursorPosition().insertText("0.0");
            table->cellAt(row, 7).firstCursorPosition().insertHtml(QString("<a href='#anchor%1'>图 %2</a>").arg(row).arg(row));
        }
    }
    // 保存文档为doc文件
    QFile file("D:/Desktop/1.doc");
    if (file.open(QIODevice::WriteOnly)) {
        QString str = document.toHtml(QByteArray("UTF-8")).toUtf8();
        file.write(document.toHtml(QByteArray("UTF-8")).toUtf8());
        file.close();
    }

    return 0;
}
